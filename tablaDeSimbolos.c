#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "tablaDeSimbolos.h"
#define  MAX 1000


Nodo * cabeza = NULL;


void insertarEntero(int entrada, char* nombre)		//Funcion para ingresar una variable tipo int
{
	Nodo *nuevo ;
	nuevo = NuevoNodoint(entrada, 'i', nombre);
	nuevo -> siguiente = cabeza;
	cabeza = nuevo;
}

Nodo* NuevoNodoint(int x, char tipon, char* nuevoname)		//creacion del nodo tipo int
{
	Nodo *a ;
	a = (Nodo*)malloc(sizeof(Nodo)); 			/* asiqna memoria a nuevo nodo */
	a-> dato1 = x;
	a-> tipo = tipon;
	a-> name = nuevoname;
	a-> siguiente = NULL;
	return a;
}

void insertarDoble(double entrada, char* nombre)
{
	Nodo *nuevo ;
	nuevo = NuevoNododob(entrada, 'd', nombre);
	nuevo -> siguiente = cabeza;
	cabeza = nuevo;

}

Nodo* NuevoNododob(double x, char tipon, char* nuevoname)
{
	Nodo *a ;
	a = (Nodo*)malloc(sizeof(Nodo));
	a-> dato2 = x;
	a-> tipo = tipon;
	a-> name = nuevoname;
	a-> siguiente = NULL;
	//printf("aqui %s \n", cabeza->name);
	//printf("aqui %f \n", cabeza->dato2);
	//printf("aqui %c \n", cabeza->tipo);
	return a;
}

void Insertarchar(char* entrada, char* nombre)
{
	Nodo *nuevo ;
  // entrada = quitarComillas(entrada);
  // printf("2_El dato: %s\n",entrada );
	nuevo = NuevoNodochar(entrada, 's', nombre);
	nuevo -> siguiente = cabeza;
	cabeza = nuevo;

}



Nodo* NuevoNodochar(char* x, char tipon, char* nuevoname)
{
	Nodo *a ;


	a = (Nodo*)malloc(sizeof(Nodo));
	a->dato3 = x;
	a->tipo = tipon;
	a->name = nuevoname;
	a->siguiente = NULL;
  // printf("4_El dato: %s\n",a->dato3 );

	return a;
}

void printError(char * m){
  printf(RED "%s %s\n> ", m, RESETCOL);
}

void printWarning(char * m){
  printf(YELLOW "%s %s\n", m, RESETCOL);
}

int existe (char* nombre)
//Funcion que sirve para checar si una variable existe en nuestra lista o no, solo
{					//requiere el nombre y devuelve un 1 si existe, 0 si no existe
	Nodo *indice;
	char* aux;
	//printf("checa nombre %s ", nombre);
	for (indice=cabeza; indice != NULL; indice = indice ->siguiente)
	{
		//printf("nombre: %s ", indice -> name);
		aux = indice -> name;
		if (strcmp(nombre, aux) == 0)
		{
			return 1;
		}
	}

	return 0;
}

void createInteger(char* nombre, int dato)
//en esta funcion recibimos el nombre y el dato, checa si existe y si no crea la nueva variable
{	// si existe lanza el mensaje de que ya existe la variable
	int aux;
	aux= existe(nombre);
	char tipo = 'i';
	if(aux==0)
	{
		insertarEntero(dato, nombre);
	}
	else
	{
    printError("La variable ya existe");
	}

}


void createString(char* nombre, char* dato)
//en esta funcion recibimos el nombre y el dato, checa si existe y si no crea la nueva variable
{				// si existe lanza el mensaje de que ya existe la variable
  dato = quitarComillas(dato);
  // printf("El dato: %s\n", dato);
	if(!existe(nombre))
	{
		Insertarchar(dato, nombre);
	}
	else
	{
    printError("La variable ya existe");

		// printf("La variable ya existe\n>>");
	}


}


void createDouble(char* nombre, double dato)
//en esta funcion recibimos el nombre y el dato, checa si existe y si no crea la nueva variable
{					// si existe lanza el mensaje de que ya existe la variable

	int aux;
	aux=existe(nombre);
	char tipo = 'd';
	if(aux==0)
	{
		insertarDoble(dato, nombre);
	}
	else
	{
    printError("La variable ya existe");
	}
}


void showVar(void* v){
	// printf("show var\n");
  if(v != NULL){//Si se recibió una variable
    Nodo * var =  (Nodo*) v;
    switch (var->tipo) {
      // case 'i': printf("Variable %s encontrada...TIPO:%d, VALOR: %d\n", var->name, var->tipo, var->dato1);break;
      // case 'd': printf("Variable %s encontrada...TIPO:%d, VALOR: %lf\n", var->name, var->tipo, var->dato2);break;
      // case 's': printf("Variable %s encontrada...TIPO:%d, VALOR: %s\n", var->name, var->tipo, var->dato3);break;
      case 'i': printf(GREEN "%d\n" RESETCOL, var->dato1); printf("> "); break;
      case 'd': printf(GREEN "%lf\n" RESETCOL, var->dato2); printf("> ");break;
      case 's': printf(GREEN "'%s'\n" RESETCOL, var->dato3); printf("> ");break;
    }
  }
}

void *  getVariable(char* nombre){
	// printf("get var\n");
  void * nope = NULL;
	double au=0.0;
	Nodo * indice;
	for (indice=cabeza; indice != NULL; indice = indice->siguiente)
	{
		if (strcmp(nombre, indice->name) == 0)
		{
      // if(print){
        // printf("Variable %s encontrada...TIPO:%d, VALOR: %d\n", indice->name, indice->tipo, indice->dato1);
      // }
			return (void *)indice;
		}
	}
  printf(BLUE "No existe la variable '%s'! %s\n> ",nombre, RESETCOL );
  return nope;
}





//Función para actualizar un nodo de tipo entero
void setIntegerValue(char* nombre, int dato) 	//Funcion para actualizar el valor de una variable de tipo int
{
	char* aux;
	char t = 'i';
	Nodo *indice;
	for (indice=cabeza; indice != NULL; indice = indice ->siguiente)
	{
		aux = indice -> name;
		if (strcmp(nombre, aux) == 0)
		{
			t = indice->tipo;
			if(t =='i')
			{
				//printf("datos anteriores nombre: %s dato: %d ",indice->name, indice->dato1 );
				indice->dato1=dato;
				//printf("variable actualizada nombre: %s dato: %d ",indice->name, indice->dato1 );
			}
			else if (t =='d')
			{
				//printf("datos anteriores nombre: %s dato: %f ",indice->name, indice->dato2 );
				indice->dato2=(double)dato;
				//printf("variable actualizada nombre: %s dato: %f ",indice->name, indice->dato2 );

			}

			else
			{
        printError("Tipos incompatibles");
      }
		}
	}

}


//Función para actualizar el nodo de tipo doble
void setDoubleValue(char* nombre, double dato)	//Funcion para actualizar el valor de una variable de tipo double
{
	char* aux;
	char t='d';
	Nodo *indice;
	for (indice=cabeza; indice != NULL; indice = indice ->siguiente)
	{
		aux = indice -> name;
		if (strcmp(nombre, aux) == 0)
		{
			t = indice->tipo;
			if(t =='d')
			{
				//printf("datos anteriores nombre: %s dato: %f ",indice->name, indice->dato2 );
				indice->dato2=dato;
				//printf("variable actualizada nombre: %s dato: %f ",indice->name, indice->dato2 );

			}
			else if(t =='i')
			{
				//printf("datos anteriores nombre: %s dato: %d ",indice->name, indice->dato1 );
				indice->dato1=(int)dato;
				//printf("variable actualizada nombre: %s dato: %d ",indice->name, indice->dato1 );
			}

			else
			{
        printError("Tipos incompatibles \n>>");
      }
		}
	}

}

//Función para actualizar un nodo de tipo cadena
void setStringValue(char* nombre, char* dato)		//Funcion para actualizar el valor de una variable de tipo char
{
	char* aux;
	char t = 's';
	Nodo *indice;
	dato =  quitarComillas(dato);
	//printf("sinco %s", sinco);
	for (indice=cabeza; indice != NULL; indice = indice ->siguiente)
	{
		aux = indice -> name;
		if (strcmp(nombre, aux) == 0)
		{
			t = indice->tipo;
			if(t =='s')
			{
				// printf("datos anteriores nombre: %s dato: %s ",indice->name, indice->dato3 );
				indice->dato3=dato;
				//printf("sinco %s", indice->dato3);
				// printf("variable actualizada nombre: %s dato: %s ",indice->name, indice->dato3 );
			}
			else
			{
        printError("Tipos incompatibles");
      }


		}
	}

}



//Función para obtener el tipo y saber a que parte de la estrucutura referenciar
char getTipo(char* nombre)
{
	char* aux;
	char t;
	Nodo *indice;
  //printf("get tipo de variable...\n");

	for (indice=cabeza; indice != NULL; indice = indice ->siguiente)
	{
		aux = indice -> name;
		if (strcmp(nombre, aux) == 0)
		{
			t = indice->tipo;
			return indice->tipo;
		}
	}
	return 'n';

}

//Función para actualizar un nodo de tipo doble
void actualizar(char* nombre, double dato)
{
	char aux;
	aux = getTipo(nombre);


	if (aux == 'i')
	{
		setIntegerValue(nombre, dato);
	}
	else if (aux == 'd')
	{
		setDoubleValue(nombre, dato);

	}
	else
	{	printf("error \n");
	}


}

//Función para eliminar comillas
char* quitarComillas(char* g)
{
	int i=0;
	int j=0;
	//char frase[100];
	char fraseResultante[100];
	char* aux;
	//strcpy(frase, g);

	while (g[i] != '\0')
  	{
	    if (g[i] != '"')
	    {
	      fraseResultante[j] = g[i];
		  j++;
	    }
	    i++;
	}
	fraseResultante[j] = '\0';
	aux=fraseResultante;
	return strdup(aux);
}


char* concat(char* variable, char* variable1)
{
  // printf("%s + %s\n", variable, variable1);
	char ans[MAX];
    strcpy(ans, "");
    strcat(ans,  quitarComillas(variable));
    strcat(ans,  quitarComillas(variable1));
    return strdup(ans);

}



char * remstr(char * a, char * b) {
	char ans[MAX];
  // printf("a: %s\n", a);
  // printf("b: %s\n", b);
    char *  x = strstr(a, b);
    // printf("x: %s\n", x);
    if (!x) return strdup(a);
    int k = x - a, i = 0;
    int m =    strlen(b);
    strcpy(ans, "");
    for (i = 0; i <= k; i++)
      ans[i]   =  a[i];
    ans[i - 1] =  '\0';
    strcat(ans, x + m);
    return strdup(ans);
  }
//
// double strToReal(char * num){
//   return atof(num);
// }
//
// char * realToStr(double num){
//   char * nm[sizeof(num)];
//   memcpy(&nm, &num, sizeof(num));
//   return nm;
// }


void  _copyValueInteger(char* nombre, void* var){
  Nodo * Variable = (Nodo *) var;
  // printf("p_%d\n", Variable->dato1);
	if(!existe(nombre))
	{
    if(Variable->tipo == 'i'){insertarEntero(Variable->dato1, nombre);}
    if(Variable->tipo == 'd'){insertarEntero(Variable->dato2, nombre);}
    if(Variable->tipo == 's'){printf("Tipos incompatibles!\n");}
	}
	else
	{
    printError("La variable ya existe");
		// printf("La variable ya existe\n>");
	}
}


void _copyValueDouble(char* nombre, void* var){
  Nodo * Variable = (Nodo *) var;
  printf("d_%d\n", Variable->dato1);

	if(!existe(nombre))
	{
    if(Variable->tipo == 'i'){insertarDoble(Variable->dato1, nombre);}
    if(Variable->tipo == 'd'){insertarDoble(Variable->dato2, nombre);}
    if(Variable->tipo == 's'){printf("Tipos incompatibles!\n");}
	}
	else
	{
    printError("La variable ya existe");

	}
}

void  _copyValueString(char* nombre, void* var){
  Nodo * Variable = (Nodo *) var;
  printf("s_%d\n", Variable->dato1);

	if(!existe(nombre))
	{
    if(Variable->tipo == 'i'){printf("Tipos incompatibles!\n");}
    if(Variable->tipo == 'd'){printf("Tipos incompatibles!\n");}
    if(Variable->tipo == 's'){Insertarchar(Variable->dato3, nombre);}
	}
	else
	{
    printError("La variable ya existe");

	}
}



void  copyValueVar(void* source, void* dest){
  Nodo * Source = (Nodo *) source;
  Nodo * Dest = (Nodo *) dest;

	if(!existe(Dest->name))
	{
    printError("La variable ya existe");
	}
	else
	{
    if(Source->tipo == 'i' && Dest->tipo == 'i'){ Dest->dato1 =  Source->dato1; }
    else if(Source->tipo == 'i' && Dest->tipo == 'd'){ Dest->dato2 =  Source->dato1;}
    else if(Source->tipo == 'd' && Dest->tipo == 'i'){ Dest->dato1 =  Source->dato2; printWarning("Posible perdida de precisión real -> entero");}
    else if(Source->tipo == 'd' && Dest->tipo == 'd'){ Dest->dato2 =  Source->dato2; }
    else if(Source->tipo == 's' && Dest->tipo == 's'){ Dest->dato3 =  strdup(Source->dato3); }
    else {printError("Tipos incompatibles!\n");}
	}
}

void * sumarVariables(void * v1, void * v2){
  // printf("Sumando variables\n" );
  if(v1 == NULL || v2 == NULL){  return NULL;  }
  Nodo * V1 = (Nodo *) v1;
  Nodo * V2 = (Nodo *) v2;
  Nodo * dummy = (Nodo*)malloc(sizeof(Nodo));
  // void * nope = NULL;



  // printf("V1 tipo: %c, valor: %d\n", V1->tipo, V1->dato1 );
  // printf("V2 tipo: %c, valor: %d\n", V2->tipo, V2->dato1 );
  // void* dummy;
  //char* nm = getNombreDummy();
  if(V1->tipo == 'i' && V2->tipo == 'i'){
      dummy->tipo = 'i';
      dummy->dato1 = (V1->dato1 +  V2->dato1);
      // printf("%d\n",dummy->dato1);
      return (void *) dummy;
    }
  if(V1->tipo == 'i' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato1 +  V2->dato2);
      // printf("%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'i'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 +  V2->dato1);
      // printf("%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 +  V2->dato2);
      printf("%lf\n",dummy->dato2);
      return (void *)dummy;
    }//Fin sumarVariables

  if(V1->tipo == 's' && V2->tipo == 's'){
      dummy->tipo = 's';
      dummy->dato3 = concat(V1->dato3,V2->dato3);
      // printf("%s\n",dummy->dato3);
      return (void *)dummy;
  }//Fin sumarVariables

  if(V1->tipo == 's' && (V2->tipo == 'i' || V2->tipo == 'd')){
      yyerror("Tipos incompatibles");
      return NULL;
  }//Fin sumarVariables





}

void * multiplicarVariables(void * v1, void * v2){
  if(v1 == NULL || v2 == NULL){  return NULL;  }
  Nodo * V1 = (Nodo *) v1;
  Nodo * V2 = (Nodo *) v2;
  Nodo * dummy = (Nodo*)malloc(sizeof(Nodo));

  if(V1->tipo == 'i' && V2->tipo == 'i'){
      dummy->tipo = 'i';
      dummy->dato1 = (V1->dato1 *  V2->dato1);
      // printf("\n%d\n",dummy->dato1);
      return (void *) dummy;
    }
  if(V1->tipo == 'i' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato1 *  V2->dato2);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'i'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 * V2->dato1);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 * V2->dato2);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
  }
  if(V1->tipo == 's' || V2->tipo == 's'){
    yyerror("No puedes multiplicar cadenas!");
    return (void *)dummy;
  }

  yyerror("Tipos incompatibles");
  return (void *)dummy;

}

void * dividirVariables(void * v1, void * v2){
  if(v1 == NULL || v2 == NULL){  return NULL;  }
  Nodo * V1 = (Nodo *) v1;
  Nodo * V2 = (Nodo *) v2;
  Nodo * dummy = (Nodo*)malloc(sizeof(Nodo));

  if(V1->tipo == 'i' && V2->tipo == 'i'){
      dummy->tipo = 'i';
      dummy->dato1 = (V1->dato1 /  V2->dato1);
      // printf("\n%d\n",dummy->dato1);
      return (void *) dummy;
    }
  if(V1->tipo == 'i' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato1 /  V2->dato2);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'i'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 / V2->dato1);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 / V2->dato2);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
  }
  if(V1->tipo == 's' || V2->tipo == 's'){
    yyerror("No puedes dividir cadenas!");
    return (void *)dummy;
  }

  yyerror("Tipos incompatibles");
  return (void *)dummy;

}

void * restarVariables(void * v1, void * v2){
  if(v1 == NULL || v2 == NULL){  return NULL;  }

  // printf("restando variables\n" );

  Nodo * V1 = (Nodo *) v1;
  Nodo * V2 = (Nodo *) v2;
  Nodo * dummy = (Nodo*)malloc(sizeof(Nodo));



  printf("V1 tipo: %c, valor: %d\n", V1->tipo, V1->dato1 );
  printf("V2 tipo: %c, valor: %d\n", V2->tipo, V2->dato1 );


  if(V1->tipo == 'i' && V2->tipo == 'i'){
      dummy->tipo = 'i';
      dummy->dato1 = (V1->dato1 -  V2->dato1);
      printf("\n%d\n",dummy->dato1);
      return (void *) dummy;
    }
  if(V1->tipo == 'i' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato1 -  V2->dato2);
      printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'i'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 - V2->dato1);
      printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = (V1->dato2 -  V2->dato2);
      printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 's' && V2->tipo == 's'){
      dummy->tipo = 's';
      dummy->dato3 = remstr(V1->dato3, V2->dato3);
      printf("\n%lf\n",dummy->dato3);
      return (void *)dummy;
  }


}


void*  variableMasEntero(void* var, int a){
  Nodo* v_ = (Nodo *) var;
  Nodo * sumado = (Nodo*)malloc(sizeof(Nodo));
  switch (v_->tipo) {
    case 'i': sumado->tipo = 'i'; sumado->dato1 = v_->dato1 + a; break;
    case 'd': sumado->tipo = 'd'; sumado->dato2 = v_->dato2 + a; break;
    // case 's': sumado->tipo = 'd'; sumado->dato3 = concat(v_->dato3,c);printf("\n%s\n",sumado->dato3);break;
  }
  return (void*) sumado;
}

void*  variableMasDouble(void* var, double a){
  Nodo* v_ = (Nodo *) var;
  Nodo * sumado = (Nodo*)malloc(sizeof(Nodo));
  switch (v_->tipo) {
    case 'i': sumado->tipo = 'i'; sumado->dato1 = v_->dato1 + a; printWarning("Posible perdida de precisión real -> entero."); break;
    case 'd': sumado->tipo = 'd'; sumado->dato2 = v_->dato2 + a; break;
    // case 's': sumado->tipo = 'd'; sumado->dato3 = concat(v_->dato3,c);printf("\n%s\n",sumado->dato3);break;
  }
  return (void*) sumado;
}

void*  sumarAVariable(void* var, int a, double b){
  Nodo* v_ = (Nodo *) var;
  Nodo * sumado = (Nodo*)malloc(sizeof(Nodo));

  switch (v_->tipo) {
    case 'i': sumado->tipo = 'i'; sumado->dato1 = v_->dato1 + a; break;
    case 'd': sumado->tipo = 'd'; sumado->dato2 = v_->dato2 + b; break;
    // case 's': sumado->tipo = 'd'; sumado->dato3 = concat(v_->dato3,c);printf("\n%s\n",sumado->dato3);break;
  }
  return (void*) sumado;
}

void*  sumarAVariable_d(void* var, double a){
  Nodo* v_ = (Nodo *) var;
  Nodo * sumado = (Nodo*)malloc(sizeof(Nodo));
  sumado->tipo = 'd';
  sumado->dato2 = v_->dato2 + a;
  printf("\n%lf\n",sumado->dato2);

  //
  // switch (v_->tipo) {
  //   case 'i': sumado->tipo = 'i'; sumado->dato1 = v_->dato1 + a; printf("\n%d\n",sumado->dato1);break;
  //   case 'd': sumado->tipo = 's'; sumado->dato2 = v_->dato2 + b; printf("\n%lf\n",sumado->dato2);break;
  //   case 's': sumado->tipo = 'd'; sumado->dato3 = concat(v_->dato3,c);printf("\n%s\n",sumado->dato3);break;
  // }
  return (void*) sumado;
}

void*  variableMasCadena(void* var, char* s, int orden){
  printf("Varialbe + cadena\n");
  printf("Cadena: %s\n", s);
  //orden 1 -> cadena + var
  //orden 2 -> var + cadena
  Nodo* v_ = (Nodo *) var;
  Nodo * concatenado = (Nodo*)malloc(sizeof(Nodo));
  concatenado->tipo = 's';
  if(orden == 1){
    concatenado->dato3 = concat(v_->dato3, s);
  }else{
    concatenado->dato3 = concat(s, v_->dato3);
  }
  printf("\n%s\n",concatenado->dato3);
  return (void*) concatenado;
}


void*  variablePorDouble(void* var, double a){
  Nodo* v_ = (Nodo *) var;
  Nodo * mul = (Nodo*)malloc(sizeof(Nodo));
  switch (v_->tipo) {
    case 'i': mul->tipo = 'i'; mul->dato1 = v_->dato1 * a; break;
    case 'd': mul->tipo = 'd'; mul->dato2 = v_->dato2 * a; break;
    // case 's': mul->tipo = 'd'; mul->dato3 = concat(v_->dato3,c);printf("\n%s\n",mul->dato3);break;
  }
  return (void*) mul;
}


void*  variableEntreDouble(void* var, double a, int orden){
  Nodo* v_ = (Nodo *) var;
  Nodo * dividido = (Nodo*)malloc(sizeof(Nodo));
  if(orden == 1){
    switch (v_->tipo) {
      case 'i': dividido->tipo = 'i'; dividido->dato1 = v_->dato1 / a; printWarning("Posible perdida de precisión real -> entero."); break;
      case 'd': dividido->tipo = 'd'; dividido->dato2 = v_->dato2 / a; break;
      // case 's': dividido->tipo = 'd'; dividido->dato3 = concat(v_->dato3,c);printf("\n%s\n",dividido->dato3);break;
    }
  }else{
    switch (v_->tipo) {
      case 'i': dividido->tipo = 'i'; dividido->dato1 = a / v_->dato1; printWarning("Posible perdida de precisión real -> entero."); break;
      case 'd': dividido->tipo = 'd'; dividido->dato2 = a / v_->dato2; break;
      // case 's': dividido->tipo = 'd'; dividido->dato3 = concat(v_->dato3,c);printf("\n%s\n",dividido->dato3);break;
    }
  }

  return (void*) dividido;
}

void*  variableMenosNumero(void* var, double a, int orden){
  Nodo* v_ = (Nodo *) var;
  Nodo * sumado = (Nodo*)malloc(sizeof(Nodo));
  if(orden == 1){
    switch (v_->tipo) {
      case 'i': sumado->tipo = 'i'; sumado->dato1 = v_->dato1 - a; break;
      case 'd': sumado->tipo = 'd'; sumado->dato2 = v_->dato2 - a; break;
      // case 's': sumado->tipo = 'd'; sumado->dato3 = concat(v_->dato3,c);printf("\n%s\n",sumado->dato3);break;
    }
  }else{
    switch (v_->tipo) {
      case 'i': sumado->tipo = 'i'; sumado->dato1 = a - v_->dato1; break;
      case 'd': sumado->tipo = 'd'; sumado->dato2 = a - v_->dato2; break;
      // case 's': sumado->tipo = 'd'; sumado->dato3 = concat(v_->dato3,c);printf("\n%s\n",sumado->dato3);break;
    }
  }

  return (void*) sumado;
}

void*  variableMenosCadena(void* var, char* s, int orden){
  // printf("Varialbe - cadena\n");
  // printf("Cadena: %s\n", s);
  //orden 1 -> cadena + var
  //orden 2 -> var + cadena
  s = quitarComillas(s);
  Nodo* v_ = (Nodo *) var;
  Nodo * concatenado = (Nodo*)malloc(sizeof(Nodo));
  concatenado->tipo = 's';
  if(orden == 1){
    // printf("Cadena1: %s\n", v_->dato3);
    // printf("Cadena2: %s\n", s);

    concatenado->dato3 = remstr(v_->dato3, s);
  }else{
    concatenado->dato3 = remstr(s, v_->dato3);
  }
  // printf("\n%s\n",concatenado->dato3);
  return (void*) concatenado;
}

void*  variablePotenciaDouble(void* var, double a, int orden){
  Nodo* v_ = (Nodo *) var;
  Nodo * pot = (Nodo*)malloc(sizeof(Nodo));
  if(orden == 1){
    switch (v_->tipo) {
      case 'i': pot->tipo = 'i'; pot->dato1 = pow(v_->dato1, a); break;
      case 'd': pot->tipo = 'd'; pot->dato2 = pow(v_->dato2, a); break;
      // case 's': pot->tipo = 'd'; pot->dato3 = concat(v_->dato3,c);printf("\n%s\n",pot->dato3);break;
    }
  }else{
    switch (v_->tipo) {
      case 'i': pot->tipo = 'i'; pot->dato1 = pow(a, v_->dato1); break;
      case 'd': pot->tipo = 'd'; pot->dato2 = pow(a, v_->dato2); break;
      // case 's': pot->tipo = 'd'; pot->dato3 = concat(v_->dato3,c);printf("\n%s\n",pot->dato3);break;
    }
  }

  return (void*) pot;
}

void*  variablePotenciaVariable(void* v1, void* v2){
  Nodo * V1 = (Nodo *) v1;
  Nodo * V2 = (Nodo *) v2;
  Nodo * dummy = (Nodo*)malloc(sizeof(Nodo));

  if(V1->tipo == 'i' && V2->tipo == 'i'){
      dummy->tipo = 'i';
      dummy->dato1 = pow(V1->dato1, V2->dato1);
      // printf("\n%d\n",dummy->dato1);
      return (void *) dummy;
    }
  if(V1->tipo == 'i' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = pow(V1->dato1, V2->dato2);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'i'){
      dummy->tipo = 'd';
      dummy->dato2 = pow(V1->dato2, V2->dato1);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
    }
  if(V1->tipo == 'd' && V2->tipo == 'd'){
      dummy->tipo = 'd';
      dummy->dato2 = pow(V1->dato2, V2->dato2);
      // printf("\n%lf\n",dummy->dato2);
      return (void *)dummy;
  }
  if(V1->tipo == 's' || V2->tipo == 's'){
    yyerror("Operación no definida!");
    return (void *)dummy;
  }

  yyerror("Tipos incompatibles");
  return (void *)dummy;

}


void * variableModVariable(void* v1, void* v2){
  Nodo * V1 = (Nodo *) v1;
  Nodo * V2 = (Nodo *) v2;
  Nodo * dummy = (Nodo*)malloc(sizeof(Nodo));

  if(V1->tipo == 'i' && V2->tipo == 'i'){
      dummy->tipo = 'i';
      dummy->dato1 = V1->dato1 % V2->dato1;
      // printf("\n%d\n",dummy->dato1);
      return (void *) dummy;
    }

  if(V1->tipo != 'i' && V2->tipo != 'i'){
    yyerror("Operación no definida!");
    return (void *)dummy;
  }

  yyerror("Tipos incompatibles");
  return (void *)dummy;

}

void * variableModEntero(void* var, int a, int orden){
  Nodo* v_ = (Nodo *) var;
  Nodo * pot = (Nodo*)malloc(sizeof(Nodo));
  if(orden == 1){
    switch (v_->tipo) {
      case 'i': pot->tipo = 'i'; pot->dato1 = v_->dato1 % a; break;
    }
  }else{
    switch (v_->tipo) {
      case 'i': pot->tipo = 'i'; pot->dato1 = a % v_->dato1; break;
    }
  }
  if(v_->tipo == 'd' || v_->tipo == 's'){
    yyerror("Operación no definida!");
  }
  return (void*) pot;
}
