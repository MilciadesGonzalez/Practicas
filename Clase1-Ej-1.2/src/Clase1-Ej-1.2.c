/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int n1;
	int n2;
	int n3;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &n1);

	printf("Ingreso otro numero: ");
	scanf("%d", &n2);

	printf("Ingrese otro numero: ");
	scanf("%d", &n3);

	if(n1 > n2 && n1 > n3){
		resultado = n1;
	}if(n2 > n3){
		resultado = n2;
	}else{
		resultado = n3;
	}
	printf("El numero mayor es: %d", resultado);

	return EXIT_SUCCESS;
}
