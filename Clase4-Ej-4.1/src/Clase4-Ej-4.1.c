/*
 ============================================================================
Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número. Utilizar la función PedirNumero de la ejercitación 3-4.
Por ejemplo:
5! = 5*4*3*2*1 = 120

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "PedirNumero.h"

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int resultado = 1;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	for(int i = 1; i <= numero; i++){

		resultado = resultado * i;
	}

	printf("El factorial es: %d", resultado);


	return EXIT_SUCCESS;
}
