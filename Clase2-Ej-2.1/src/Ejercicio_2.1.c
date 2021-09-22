/*
 ============================================================================
 Name        : Clase2-Ej-2.1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define cont 5

int main(void) {
	setbuf(stdout,NULL);

	int n1;
	float promedio;
	int acumNum;

	acumNum = 0;

	for(int i = 0; i<cont; i++){

		printf("Ingrese un número: ");
		scanf("%d", &n1);

		acumNum += n1;
	}
	promedio = (float)acumNum/cont;

	printf("El promedio es: %f", promedio);



	return EXIT_SUCCESS;
}
