#include <stdio.h>
#include <stdlib.h>
#include "primeralibreria.c"

int main(void) {

	int numeroUno;
	int numeroDos;
	int numeroTres;



	if (numeroUno > numeroDos && numeroUno > numeroTres) {
	    printf("El numero mayor es el %d", numeroUno);
	} else if (numeroDos > numeroTres) {
	     printf("El numero mayor es el %d", numeroDos);
	} else {
	    printf("El numero mayor es el %d", numeroTres);
	}

	return 0;
}
