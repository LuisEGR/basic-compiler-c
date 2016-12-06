#ifndef TABLA_SIMBOLOS
#define TABLA_SIMBOLOS


#define YELLOW	"\x1b[33m"
#define RED	"\x1b[31m"
#define REDBG	"\x1b[31m"
#define GREEN	"\x1b[32m"
#define BLUE	"\x1b[34m"
#define RESETCOL	"\x1b[0m"

typedef struct Nodo
{
	char* name;
	int dato1;
	double dato2;
	char* dato3;
	char tipo;
	struct Nodo* siguiente;
}Nodo ;		//Estructura que utilizaremos para almacenar las variables


void insertarEntero(int entrada, char* nombre);		//Funcion para insertar un entero
void insertarDoble(double entrada, char* nombre);		//Funcion para insertar un double
void insertCadena(char* entrada, char* nombre);		//Funcion para insertar una cadena
Nodo* NuevoNodoint(int x, char tipo, char* name);	//creacion del nodo para insertarEntero
Nodo* NuevoNododob(double x, char tipo, char* name);	//creacion del nodo para insertarDoble
Nodo* NuevoNodochar(char* x, char tipo, char* name);	//creacion del nodo para insertCadena

char*  remstr(char * a, char * b);
char*  itoa(int i, char* b);
char*  concat(char* variable, char* variable1);

//Funciones para actualizar los datos de las variables
void   setStringValue(char* nombre, char* dato);
void   setDoubleValue(char* nombre, double dato);
void   setIntegerValue(char* nombre, int dato);

//Funciones para obtener los datos de las variables
void * getVariable(char* nombre);
void   showVar(void* var);
int    existe (char* nombre);
void   actualizar(char* nombre, double dato);
char * quitarComillas(char* x);

//Funciones iniciales
void   createDouble(char* nombre, double dato);
void   createString(char* nombre, char* dato);
void   createInteger(char* nombre, int dato);
void   copyValueInteger(char* nombre, void* var);
void   copyValueDouble(char* nombre, void* var);
void   copyValueString(char* nombre, void* var);
void   copyValueVar(void* source, void* dest);

//Operaciones enter variables
void * sumarVariables(void * var1, void * var2);
void * restarVariables(void * var1, void * var2);
void * multiplicarVariables(void * var1, void * var2);
void * dividirVariables(void * var1, void * var2);
void * variablePotenciaVariable(void* v1, void* v2);
void * variableModVariable(void* v1, void* v2);

void * sumarAVariable(void* var, int a, double b);
void * sumarAVariable_d(void* var, double a);
void * variableMasEntero(void* var, int a);
void * variableMasDouble(void* var, double a);
void * variableMasCadena(void* var, char* s, int orden);
void * variableMenosNumero(void* var, double a, int orden);
void * variableMenosCadena(void* var, char* s, int orden);

void * variablePorDouble(void* var, double a);
void * variableEntreDouble(void* var, double a, int orden);
void * variablePotenciaDouble(void* var, double a, int orden);
void * variableModEntero(void* var, int a, int orden);

// Funciones auxiliares para impresión de texto con color.
void printError(char * m);
void printWarning(char * m);


#endif
