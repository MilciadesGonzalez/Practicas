/*
 ============================================================================
Milciades Gonzalez

Ejercicio 3-1:
Crear una funci�n que muestre por pantalla el n�mero flotante  que recibe como par�metro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void flotante(float numero);

int main(void) {
	setbuf(stdout, NULL);

	float num1;

	printf("Ingrese un numero decimal: ");
	scanf("%f", &num1);


	flotante(num1);


	return EXIT_SUCCESS;
}

void flotante(float numero){

	printf("\n El numero es: %.2f", numero);


}
