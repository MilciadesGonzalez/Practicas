/*
 ============================================================================
Ejercicio 2-4:

Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define cont 5

int main(void) {
	setbuf(stdout,NULL);

	char caracter;
	int contador;

	for(int i = 0; i < cont; i++){
		printf("Ingrese un caracter: ");
		fflush(stdin);
		scanf("%c", &caracter);
		caracter = tolower(caracter);

		if(caracter == 'p'){
			contador++;
		}
	}
	printf("La cantidad de p ingresado es: %d", contador);

	return EXIT_SUCCESS;
}
