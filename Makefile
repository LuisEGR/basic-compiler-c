all: bisonear flexear compilar ejecutar
bisonear: tablaSimbolos.y
	bison tablaSimbolos.y -d

flexear: tablaSimbolos.tab.h tablaSimbolos.l
	flex tablaSimbolos.l

compilar: tablaDeSimbolos.c	tablaSimbolos.tab.c lex.yy.c
	gcc -o Tabla.out tablaDeSimbolos.c tablaSimbolos.tab.c lex.yy.c -ll -w

ejecutar: Tabla.out
	./Tabla.out
