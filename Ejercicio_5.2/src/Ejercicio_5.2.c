/*
 ============================================================================
Milciades Gonzalez

Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
	Cantidad de positivos y negativos.
	Sumatoria de los pares.
	El mayor de los impares.
	Listado de los números ingresados.
	Listado de los números pares.
	Listado de los números de las posiciones impares.
Se deberán utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANT 10

void Inicializar(int numeros[], int tam);
void IngresarNumero(int numeros[], int tam);
void Mostrar(int numeros[], int tam);

int Calculos(int numeros[], int tam, int* contPos, int* contNeg, int* sumaPar, int* maxIpar);


int main(void) {
	setbuf(stdout,NULL);

	int numeros[CANT];
	int contPos;
	int contNeg;
	int sumaPar;
	int maxIpar;

	Inicializar(numeros, CANT);

	IngresarNumero(numeros, CANT);

	Calculos(numeros, CANT, &contPos, &contNeg, &sumaPar, &maxIpar);

	Mostrar(numeros, CANT);

	printf("\nCantidad de positivos: %d", contPos);
	printf("\nCantidad de negativos: %d", contNeg);
	printf("\nSumatoria de los pares: %d", sumaPar);
	printf("\nEl mayor de los impares: %d", maxIpar);

	return 0;
}
void Inicializar(int numeros[], int tam){

	for(int i=0; i<tam; i++){
		numeros[i] = 0;
	}
}
void IngresarNumero(int numeros[], int tam){

	for(int i=0; i<tam; i++){
		printf("Ingrese un numero entre -1000 y 1000: ");
		scanf("%d", &numeros[i]);

		while(numeros[i]<-1000 || numeros[i]>1000){
			printf("Numero invalido. Reingrese numero entre -1000 y 1000: ");
			scanf("%d", &numeros[i]);
		}
	}
}
int Calculos(int numeros[], int tam, int* contPos, int* contNeg, int* sumaPar, int* maxIpar){

	int flag;

	flag = 1;
	int sPar = 0;
	int cPos = 0;
	int cNeg = 0;

	for(int i=0; i<tam; i++){
		if(numeros[i]%2==0){
			sPar += numeros[i];
		}
		if(numeros[i]>0){
			cPos++;
		}else{
			cNeg++;
		}
		if(numeros[i]%2!=0){
			if(flag==1 || maxIpar<numeros[i]){
				maxIpar = numeros[i];
				flag = 0;
			}
		}
	}
	sumaPar = sPar;

	return 0;
}
void Mostrar(int numeros[], int tam){

	for(int i=0; i<tam; i++){
		printf("\n%d", numeros[i]);
	}
}
