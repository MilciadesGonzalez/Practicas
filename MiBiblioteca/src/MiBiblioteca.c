/*
 * MiBiblioteca.c
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "MiBiblioteca.h"

int MenuPrincipal(int opcion, int op1, int op2){

	printf("1. Ingresar 1er operando A = %d\n", op1);
	printf("2. Ingresar 2do operando B = %d\n", op2);
	printf("3. Calcular todas las operaciones.\n");
	printf("4. Resultados\n");
	printf("5. Salir\n");
	printf("\nElija una opción: ");
	scanf("%d", &opcion);

	return opcion;
}

int IngresarNumero(int numero){
	printf("\nIngrese número: ");
	scanf("%d", &numero);

	return numero;
}

void MenuCalculos(int op1, int op2){
	printf("\na) Calcular la suma de (%d+%d)", op1, op2);
	printf("\nb) Calcular la resta de (%d-%d)", op1, op2);
	if(op1==0 || op2==0){
		printf("\nNo es posible dividir por cero");
	}else{
		printf("\nc) Calcular la division de (%d/%d)", op1, op2);
	}
	if(op1==0 || op2==0){
		printf("\nNo es posible multiplicar por cero");
	}else{
		printf("\nd) Calcular la multiplicacion de (%d*%d)", op1, op2);
	}
	printf("\ne) Calcular el factorial de (!%d) y de (!%d)", op1, op2);
	printf("\n");

}

void Calcular(int op1, int op2, int* suma, int* resta, float* div, int* mult, int* fact1, int* fact2){

	int res1 = 1;
	int res2 = 1;

	*suma = op1 + op2;
	*resta = op1 - op2;
	*div = (float)op1 / op2;
	*mult = op1 * op2;

	for(int i=1; i<=op1; i++){
		res1 = res1 * i;
	}
	*fact1 = res1;
	for(int i=1; i<=op2; i++){
		res2 = res2 * i;
	}
	*fact2 = res2;
}

void MostrarResultados(int op1, int op2, int suma, int resta, float div, int mult, int fact1, int fact2){

	printf("\na) El resultado de (%d+%d) es: %d", op1, op2, suma);
	printf("\nb) El resultado de (%d-%d) es: %d", op1, op2, resta);
	printf("\nc) El resultado de (%d/%d) es: %.2f", op1, op2, div);
	printf("\nd) El resultado de (%d*%d) es: %d", op1, op2, mult);
	printf("\ne) El factorial de (!%d) es: %d y El factorial de (!%d) es: %d", op1, fact1, op2, fact2);
	printf("\n");
}

void ordenarArrayCreciente(int num[], int tam){
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

void ordenarArrayDecreciente(int num[], int tam){
	int aux;
	for(int i=0; i<tam-1; i++){
	    for(int j=i+1;j<tam;j++){
	        if(num[i]<num[j]){
	           aux = num[i];
	           num[i] = num[j];
	           num[j] = aux;
	         }
	     }
	}
}

void CargarArraySecuencial(int numeros[], int tam){
	for(int i=0; i<tam; i++){
	    printf("Ingrese numero: ");
	    scanf("%d", &numeros[i]);
	}
}

void CargarArrayAleatoria(int numeros[], int tam){
	int indice;

	for(int i=0; i<tam; i++){
		printf("Ingrese posición para guardar el número: ");
		scanf("%d", indice);

	    printf("\nIngrese el número: ");
	    scanf("%d", &numeros[indice]);
	}
}

void CargarArraySepararPosNeg(int numeros[], int tam, int positivos[], int negativos[]){
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

void MostrarElemArray(int num[], int tam){
	printf("Numeros ingresados: \n");
	for(int i=0;i<tam; i++){
		if(num[i]!=0){
			MostrarIndividual(num[i]);
		}
	}
}

int MostrarIndividual(int num){
	printf("\n%d", num);

	return num;
}

void InicializarArray(int numeros[], int tam){
	for(int i=0; i<tam; i++){
		numeros[i] = 0;
	}
}
