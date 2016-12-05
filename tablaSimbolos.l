%{
#include "tablaSimbolos.tab.h"
#include <stdio.h>
#include <stdlib.h>
%}

Espacio " "*
Entero [0-9]+
Dec [0-9]*"."[0-9]+
Letras [a-zA-z]+
Variablee [a-zA-Z_]+[_a-zA-Z0-9]*
Variable ("_"[a-zA-z]+((({Entero}|{Letras}|"_")(({Entero}|{Letras}|"_")*)))?)|([a-zA-Z])((({Entero}|{Letras}|"_")(({Entero}|{Letras}|"_")*)))*
int "int"
double "double"
string "string"


%%
{Espacio}	{		/*Regla para reconocer el espacio*/
              //printf("espacio %s\n",yytext);
          }

[ \t]

"+"|"-"|"*"|"/"|"("|")"|","|";"|"=" {  return (yytext[0]);}
"\n" {return (yytext[0]);}

"^"		{		return (yytext[0]);}

"%"		{	return (yytext[0]);  }


{Entero}        {/*Regla para reconocer enteros */
		//printf("Entero %s\n",yytext);
                yylval.ent = atoi(yytext);
                return (ENTERO);
                }




{Dec}           {/*Regla para reconocer decimales*/
		//printf("Decimal %s\n",yytext);
		            yylval.real = atof(yytext);
                return (REAL);
                }

{int}		{			/*Palabra reservada int  */
		//printf("palabra int %s\n",yytext);
		return (INT);
		}

{double}	{			/*Palabra reservada double  */
		//printf("reservada double %s\n",yytext);
		return (DOUBLE);
		}

{string}	{			/*Palabra reservada string  */
		// printf("reservada string %s\n",yytext);
		return (STRING);
		}

{Variablee}  { /*printf("Variable %s\n",yytext); *//*Regla para reconocer variables  */
		yylval.let = strdup(yytext);	return (VARIABLE);}



\"(\\.|[^"])*\" 	{
        /*printf("String %s\n",yytext);*/ /*Regla para reconocer cadenas */
					yylval.let = strdup(yytext);	return (CAD);
        }

. {
  char * msg[100];
  sprintf(msg, "Token '%s' desconocido!", yytext);
  yyerror(msg);
} /*Cualquier token desconocido*/

%%
