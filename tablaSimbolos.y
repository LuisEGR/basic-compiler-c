
%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "tablaDeSimbolos.h"
%}

/* Declaraciones de BISON */
%union
{
	int ent;
	double real;
	char* let;
	void* var;
}

%token <ent> ENTERO
%token <real> REAL
%token <let> CAD
%token <let> VARIABLE
%token INT STRING DOUBLE

%type <ent> opint
%type <real> opdob
%type <let> opchar
%type <ent> errores
%type <let> asignar
%type <let> declarar
%type <var> opvar

%left '+' '-' ';'
%left '*' '/'
%left '^' '%' '=' '(' ')'
%left VARIABLE
%left INT STRING DOUBLE


/* Gramática */
%%

input:    /* cadena vacía */
        | input line

;



line:     		'\n'
	|declarar		'\n'			{ printf("> ");}
	|asignar 		'\n'			{ printf("> "); }
	|errores 		'\n'			{/* Reglas para cachar los errores */}
	|opvar			'\n'			{ showVar($1); }
	|opvar	';' '\n'			{ showVar($1); }
	|opdob			'\n'			{ printf(GREEN " %f %s\n> ", $1, RESETCOL); }
	|opdob	';'	'\n'			{ printf(GREEN " %f %s\n> ", $1, RESETCOL); }
	|opint 			'\n'			{ printf(GREEN " %d %s\n> ", $1, RESETCOL); }
	|opint  ';'	'\n'			{ printf(GREEN " %d %s\n> ", $1, RESETCOL); }
	|opchar			'\n'			{ printf(GREEN " '%s'%s\n> ", quitarComillas($1), RESETCOL); }
	|opchar	';'	'\n'			{ printf(GREEN " '%s'%s\n> ", quitarComillas($1), RESETCOL); }
;


declarar:
		INT VARIABLE ';'							{ int aux = 0; createInteger($2, aux);  }
	| INT VARIABLE '=' opvar ';'		{ _copyValueInteger($2, $4); }
	| INT VARIABLE '=' opint ';' 		{ int aux = $4; createInteger($2, aux);}
	| INT VARIABLE '=' opdob ';' 		{ int aux = $4; createInteger($2, aux);}

	| DOUBLE VARIABLE ';'						{ createDouble($2, 0.0);}
	| DOUBLE VARIABLE '=' opint ';'	{ createDouble($2, $4);}
	| DOUBLE VARIABLE '=' opdob ';'	{ createDouble($2, $4); printWarning("Posible perdida de precisión real -> entero");}
	| DOUBLE VARIABLE '=' opvar ';'	{ _copyValueDouble($2, $4);}

	| STRING VARIABLE ';'						{ createString($2, "");}
	| STRING VARIABLE '=' opchar ';'{ createString($2,$4);}
	| STRING VARIABLE '=' opvar ';'	{ _copyValueString($2, $4);}

;


asignar:
	VARIABLE '=' opvar ';'{
		//printf("Asignacion de variable con op.variable\n");
		if(existe($1)){
			// printf("Existe!\n" );
			void* V1 = getVariable($1);
			if($3 != NULL){
				// printf("y es diferente a NULL!\n" );
				Nodo* V2 = (Nodo *) $3;
				copyValueVar($3, V1);
			}
		}else{
			// getVariable($1);
			printf(BLUE "No existe la variable '%s'! %s\n", $1, RESETCOL );

			// printf("Alguna variable no existe \n>>");
		}
	}
	| VARIABLE '=' opint ';' 		{
		int aux = existe($1);
			if(aux==1){
				setIntegerValue($1, $3);
			}else{
				printf("2 No existe la variable %s\n>>", $1);
			}
		}
	| VARIABLE '=' opdob ';'		{
		int aux = existe($1);
			if(aux==1){
				actualizar($1, $3);
			}else{
				printf("3 No existe la variable\n>>");
			}
		}
	| VARIABLE '=' opchar ';'		{
			if(existe($1)){
				setStringValue($1, $3);
			}else{
				printf("4 No existe la variable\n>>");
			}
		}
;

// //Operaciones entre variables
opvar: VARIABLE						{ $$ = getVariable($1);}//Acceder a una variable de la tabla de simbolos
			| opvar '+' opvar 	{ $$ = sumarVariables($1, $3);}
			// | opvar '+' opvar 	{ $$ = $1 + $3; }
			| opvar '+' opint 	{	$$ = variableMasEntero($1, $3);}
			| opint '+' opvar 	{	$$ = variableMasEntero($3, $1);}
			| opvar '+' opdob 	{	$$ = variableMasDouble($1, $3);}
			| opdob '+' opvar 	{	$$ = variableMasDouble($3, $1);}
			| opchar '+' opvar 	{	$$ = variableMasCadena($3, $1, 2);}
			| opvar  '+' opchar {	$$ = variableMasCadena($1, $3, 1);}

			| opvar '-' opvar 	{ $$ = restarVariables($1, $3);	}
			| opvar '-' opint 	{ $$ = variableMenosNumero($1, $3, 1);	}
			| opint '-' opvar 	{ $$ = variableMenosNumero($3, $1, 2);	}
			| opvar '-' opdob 	{ $$ = variableMenosNumero($1, $3, 1);	}
			| opdob '-' opvar 	{ $$ = variableMenosNumero($3, $1, 2);	}
			| opvar '-' opchar 	{ $$ = variableMenosCadena($1, $3, 1);	}
			| opchar '-' opvar 	{ $$ = variableMenosCadena($3, $1, 2);	}

			| opvar  '*' opvar 	{ $$ = multiplicarVariables($1, $3);}
			| opvar  '*' opdob 	{ $$ = variablePorDouble($1, $3);}
			| opdob  '*' opvar 	{ $$ = variablePorDouble($3, $1);}
			| opvar  '*' opint 	{ $$ = variablePorEntero($1, $3);}
			| opint  '*' opvar 	{ $$ = variablePorEntero($3, $1);}

			| opvar '^' opvar			{ $$ = variablePotenciaVariable($1, $3);}
			| opvar '^' opint			{ $$ = variablePotencia($1, $3, 1);}
			| opint '^' opvar			{ $$ = variablePotencia($3, $1, 2);}
			| opvar '^' opdob			{ $$ = variablePotencia($1, $3, 1);}
			| opdob '^' opvar			{ $$ = variablePotencia($3, $1, 2);}

			| opvar '%' opvar			{ $$ = variableModVariable($1, $3);}
			| opvar '%' opint			{ $$ = variableModEntero($1, $3, 1);}
			| opint '%' opvar			{ $$ = variableModEntero($3, $1, 2);}


;


//Producciones de tipo entero
opint:
		ENTERO 				  		{ $$ = $1; }
	| '-' ENTERO 					{ $$ = (-1)*$2; }
	| opint '+' opint			{ $$ = $1 + $3; }
	| opint '-' opint 		{ $$ = $1 - $3;	}
	| opint '*' opint			{ $$ = $1 * $3;	}
	| opint '/' opint			{ $$ = $1 / $3;	}
	| opint '^' opint			{ $$ = pow($1,$3);}
	| opint '%' opint			{ $$ = $1 % $3;	}
;

opchar:
		CAD									{	$$ = $1; }
	| opchar '+' opchar		{ $$ = concat($1, $3);}
	| opchar '-' opchar		{ $$ = remstr($1, $3);}
;
//Producciones de tipo doble
opdob:
		// opint								{ $$ = $1; }
	 REAL								{ $$ = $1; }
	| '-' REAL						{ $$ = (-1)*$2; }
	| opdob '+' opdob		  { $$ = $1 + $3; }
	| opdob '-' opdob    	{ $$ = $1 - $3;	}
	| opdob '*' opdob	    { $$ = $1 * $3;	}
	| opdob '/' opdob	    { $$ = $1 / $3;	}
	| opdob '^' opdob			{ $$ = pow($1,$3);}

	| opdob '+' opint			{ $$ = $1 + $3;	}
	| opdob '-' opint    	{ $$ = $1 - $3;	}
	| opdob '*' opint	    { $$ = $1 * $3;	}
	| opdob '/' opint	    { $$ = $1 / $3;	}
	| opdob '^' opint			{ $$ = pow($1,$3);}

  | opint '+' opdob	 		{ $$ = $1 + $3;	}
	| opint '-' opdob			{ $$ = $1 - $3;	}
	| opint '*' opdob	    { $$ = $1 * $3;	}
	| opint '/' opdob	    { $$ = $1 / $3;	}
	| opint '^' opdob			{ $$ = pow($1,$3);}
;





//Producciones de errores
errores:
	INT																{	printError("ERROR - Se esperaba nombre para variable entera! "); }
	| DOUBLE													{	printError("ERROR - Se esperaba nombre para varible double  ");}
	| STRING													{	printError("ERROR - Se esperaba nombre para variable string ");}
	| INT VARIABLE 										{	printError("ERROR - Se esperaba Token ';' ");}
	| INT VARIABLE '=' opint  				{ printError("ERROR - Se esperaba Token ';' ");}
	| STRING VARIABLE 								{ printError("ERROR - Se esperaba Token ';' ");}
	| STRING VARIABLE '=' opchar 			{ printError("ERROR - Se esperaba Token ';' ");}
	| DOUBLE VARIABLE 								{ printError("ERROR - Se esperaba Token ';' ");}
	| DOUBLE VARIABLE '=' opdob 			{ printError("ERROR - Se esperaba Token ';' ");}
	| VARIABLE '=' VARIABLE						{ printError("ERROR - Se esperaba Token ';' ");}
	// | VARIABLE '=' opint							{ printError("ERROR - Se esperaba Token ';' ");}
	| VARIABLE '=' opdob							{ printError("ERROR - Se esperaba Token ';' ");}
	| VARIABLE '=' opchar							{ printError("ERROR - Se esperaba Token ';' ");}
	| STRING VARIABLE '=' opint ';'		{ printError("ERROR - No se puede asignar un entero a un string ");}
	| STRING VARIABLE '=' opdob ';'		{ printError("ERROR - Conflicto de tipos ");}
	| INT VARIABLE '=' opchar ';'			{ printError("ERROR - Conflicto de tipos ");}
	| DOUBLE VARIABLE '=' opchar ';'	{ printError("ERROR - Conflicto de tipos ");}
	| VARIABLE '=' opint ';' VARIABLE	{ printError("Texto no reconocido despues del Token ';' ");}
	| VARIABLE '=' opdob ';' VARIABLE	{ printError("Texto no reconocido despues del Token ';' ");}
	| VARIABLE '=' opchar ';' VARIABLE{ printError("Texto no reconocido despues del Token ';' ");}
	| opvar  '*' opchar							  {	printError("Operación no definida");}
	| opchar  '*' opvar							  {	printError("Operación no definida");}
	| opdob   '%' opdob							  {	printError("Operación no definida");}
	| opdob   '%' opint							  {	printError("Operación no definida");}
	| opint   '%' opdob							  {	printError("Operación no definida");}
	| ';'															{  }
;

%%
int main()
{
	int d=0;
	int k;
	printf("\n> ");
	yyparse();
}

yyerror (char *s){  printf (RED "-> %s %s\n",s, RESETCOL ); }
int yywrap(){  return 1;}
