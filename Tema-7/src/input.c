/*
 * input.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "input.h"

int ingresarEntero(char mensaje[]){
	int numero;
	printf("%s",mensaje);
	scanf("%d", &numero);

	return numero;
}
float ingresarFlotante(char mensaje[]){
	float numero;
	printf("%s",mensaje);
	scanf("%f", &numero);

	return numero;
}
void GetString(char mensaje[],char cadena[],int tam)
{
    char auxiliar[tam];
    printf("%s", mensaje);
    fflush(stdin);
    strcpy(cadena, auxiliar);
    //scanf("%[^\n]"
}
void CargarArrayEnteroSecuencial(int numeros[], int tam, char mensaje){
	for(int i=0; i<tam; i++){
	    printf(mensaje);
	    scanf("%d", &numeros[i]);
	}
}
void InicializarArrayEnCero(int numeros[], int tam){
	for(int i=0; i<tam; i++){
		numeros[i] = 0;
	}
}
void MostrarTodosElementosArrayEnteros(int num[], int tam){
	for(int i=0; i<tam; i++){
		printf("%d\n", num[i]);
	}
}
void validarIngresoArrayEntero(int num[], int tam, int min, int max){
	for(int i=0; i<tam; i++){
		while(num[i]<min || num[i]>max){
			printf("Rango invalido. Reingrese numero: ");
			scanf("%d", &num[i]);
		}
	}
}
void ordenarArrayCreciente(int num[], int tam){
	int aux;
	printf("Orden creciente:\n");
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(num[i]>num[j]){
				aux = num[i];
				num[j] = num[i];
				num[j] = aux;
			}
		}
	}
}
void MostrarNumerosParesArrayEntero(int num[], int tam){
	printf("Los numeros pares ingresados son:\n");
	for(int i=0; i<tam; i++){
		if(num[i]%2==0){
			printf("%d\n", num[i]);
		}
	}
}
void MostrarPosicionesImparesArrayEntero(int num[], int tam){
	printf("Los numeros en los indices impares son:\n");
	for(int i=0; i<tam; i++){
		if(i%2!=0){
			printf("%d\n", num[i]);
		}
	}
}
void NumerosRepetidosEnArray(int num[], int tam){
	printf("Los numeros repetidos son:\n");
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(num[i]==num[j]){
				printf("%d\n", num[i]);
			}
		}
	}
}
int sumaParesArrayEntero(int num[], int tam, int* suma){
	int sumaPar = 0;
	int flag;
	for(int i=0; i<tam; i++){
		if(num[i]%2==0){
			sumaPar += num[i];
			flag = 1;
		}else{
			flag = 0;
		}
	}
	*suma = sumaPar;
	return flag;
}
int mayorImparArrayEntero(int num[], int tam, int* impar){
	int flag = 0;
	int nImpar;
	for(int i=0; i<tam; i++){
		if(num[i]%2!=0){
			if(flag==0 || nImpar<num[i]){
				nImpar = num[i];
				flag = 1;
			}
		}
	}
	*impar = nImpar;
	return flag;
}
void contarPosNegArrayEntero(int num[], int tam, int* contPos, int* contNeg){
	int positivos = 0;
	int negativos = 0;
	for(int i=0; i<tam; i++){
		if(num[i]>0){
			positivos++;
		}else if(num[i]<0){
			negativos++;
		}
	}
	*contPos = positivos;
	*contNeg = negativos;
}
