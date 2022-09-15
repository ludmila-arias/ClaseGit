/*#include <stdio.h>
 #include <stdlib.h>
 #include <stdio_ext.h>

 int main(void) {

 char operador;
 int numeroUno;
 int numeroDos;
 int resultado;

 printf("Ingrese el numero: ");
 scanf("%d", &numeroUno);
 __fpurge(stdin);
 //fflush(stdin) SOLO WINDOWS
 printf("Ingrese el operador (+/-): ");
 scanf("%c", &operador);
 printf("\nIngrese el numero: ");
 scanf("%d", &numeroDos);

 switch(operador){
 case '+':
 resultado = numeroUno + numeroDos;
 break;
 case '-':
 resultado = numeroUno - numeroDos;
 break;
 }

 printf("El resultado es: %d", resultado);

 return 0;
 }*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroCuatro;
	int numeroCinco;
	int promedio;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);
	printf("Numero tres: ");
	scanf("%d", &numeroTres);
	printf("Numero Cuatro: ");
	scanf("%d", &numeroCuatro);
	printf("Numero Cinco: ");
	scanf("%d", &numeroCinco);

	promedio = (numeroUno + numeroDos + numeroTres + numeroCuatro + numeroCinco)
			/ 5;
	printf("El promedio es de %d", promedio);
	return EXIT_SUCCESS;
}

