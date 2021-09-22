/*
 * MiBiblioteca.c
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "MiBiblioteca.h"

void CargarArraySecuencial(int numeros[], int tam){
	for(int i=0; i<tam; i++){
	    printf("Ingrese numero: ");
	    scanf("%d", &numeros[i]);
	}
}

void CargarArrayAleatoria(int numeros[], int tam){
	int pos;
	int num;

	for(int i=0; i<tam; i++){
		printf("Ingrese numero: ");
		scanf("%d", &num);
		printf("Ingrese posición: ");
		scanf("%d", &pos);

		numeros[pos-1] = num;
	}
}
void InicializarArray(int numeros[], int tam){
	for(int i=0; i<tam; i++){
		numeros[i] = 0;
	}
}
int Promedio(int numeros[], int tam){
	float promedio;
	int acum = 0;
	int cont = 0;
	for(int i=0; i<tam; i++){
		if(numeros[i]>0){
			acum += numeros[i];
			cont++;
		}
	}

	promedio = (float)acum / cont;

	return promedio;
}
int MenorNeg(int numeros[], int tam, int* menorNeg){
	int flag = 0;
	int menorN;

	for(int i=0; i<tam; i++){
		if(numeros[i]<0){
			if(flag == 0 || menorN>numeros[i]){
				menorN = numeros[i];
				flag = 1;
			}
		}
	}
	*menorNeg = menorN;

	return flag;
}
int sumaNeg(int menorN){
	int suma = 0;
	int num;
	for(int i=menorN; i<0; i++){
		num = i+1;
		suma += num;
	}

	return suma;
}
