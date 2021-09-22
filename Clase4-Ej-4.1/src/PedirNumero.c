/*
 * PedirNumero.c
 *
 *  Created on: 5 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "PedirNumero.h"

int PedirNumero(void){

	int num;
	printf("\n Ingrese un numero del 1 al 100: ");
	scanf("%d", &num);

	while(num < 1 || num > 100){
	    printf("\n Error de rango. Reingrese un numero: ");
	    scanf("%d", &num);
	}
	printf("\n El numero ingresado fue: %d", num);

	return num;
}

