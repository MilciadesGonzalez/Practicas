/*
 ============================================================================
Milciades Gonzalez

Ejercicio 3-2:
Crear una funci�n que permita determinar si un n�mero es par o no. La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int numPar(int numero);
int main(void) {
	setbuf(stdout,NULL);

	int num;

	printf("\n Ingrese un numero: ");
	scanf("%d", &num);


	if(numPar(num) == 1){
		printf("\n EL numero es par.");
	}else{
		printf("\n EL numero es impar.");
	}

	return 0;
}

int numPar(int numero){
	int retorno;

	if(numero%2 == 0){
		retorno = 1;
	}else{
		retorno = 0;
	}

	return retorno;
}
