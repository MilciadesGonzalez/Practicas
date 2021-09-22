/*
 ============================================================================
Milciades Gonzalez

Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int numero(void);

int main(void) {
	setbuf(stdout,NULL);

	numero();


	return 0;
}

int numero(void){

	int num;
	printf("\n Ingrese un numero: ");
	scanf("%d", &num);
	printf("\n El numero ingresado fue: %d", num);

	return num;
}
