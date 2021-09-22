/******************************************************************************
Milciades Gonzalez

Ejercicio 6-2:
Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente.
(Como máximo 5 estructuras repetitivas)
*******************************************************************************/
#include <stdio.h>

#define TAM 10

void ordenar(int num[], int tam);
void Cargar(int numeros[], int tam, int positivos[], int negativos[]);
void Mostrar(int num[], int tam);

int main()
{
	setbuf(stdout,NULL);
    int numeros[TAM] = {};
    int positivos[TAM] = {};
    int negativos[TAM] = {};

    Cargar(numeros, TAM, positivos, negativos);

    ordenar(positivos, TAM);
    ordenar(negativos, TAM);

    Mostrar(positivos, TAM);
    Mostrar(negativos, TAM);



    return 0;
}
void ordenar(int num[], int tam){
	int aux;
	for(int i=0; i<tam-1; i++){
	    for(int j=i+1;j<tam;j++){
	        if(num[i]>num[j]){
	           aux = num[i];
	           num[i] = num[j];
	           num[j] = aux;
	         }
	     }
	}
}
void Cargar(int numeros[], int tam, int positivos[], int negativos[]){
	for(int i=0; i<tam; i++){
	    printf("Ingrese numero: ");
	    scanf("%d", &numeros[i]);
	    if(numeros[i]>0){
	       positivos[i] = numeros[i];
	    }else{
	        negativos[i] = numeros[i];
	    }
	}
}
void Mostrar(int num[], int tam){
	printf("\nNumeros ingresados: \n");
	for(int i=0;i<tam; i++){
		if(num[i]!=0){
			printf("%d\n", num[i]);
		}
	}
}
