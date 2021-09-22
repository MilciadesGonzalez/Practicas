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
	Los números que se repiten
	Los positivos creciente y los negativos de manera decreciente

Se deberán utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 10
#define MIN -1000
#define MAX 1000

int main(void) {
	setbuf(stdout,NULL);

	int numeros[TAM];
	int contPos;
	int contNeg;
	int maxImpar;
	int noHayImpar;
	int sumaPar;
	int noHayPar;

	Inicializar(numeros, TAM);
	Cargar(numeros, TAM, MIN, MAX);
	contarPosNeg(numeros, TAM, &contPos, &contNeg);
	printf("Cantidad de positivos: %d\n", contPos);
	printf("Cantidad de negativos: %d\n", contNeg);
	noHayImpar = mayorImpar(numeros, TAM, &maxImpar);
	if(noHayImpar==1){
		printf("El mayor impar es: %d\n", maxImpar);
	}else{
		printf("No hay numero impar.\n");
	}
	noHayPar = sumaPares(numeros, TAM, &sumaPar);
	if(noHayPar==1){
		printf("La suma de los numeros pares es: %d\n", sumaPar);
	}else{
		printf("No hay numeros pares.\n");
	}
	MostrarTodo(numeros, TAM);
	MostrarPares(numeros, TAM);
	MostrarPosicionesImpares(numeros, TAM);
	NumerosRepetidos(numeros, TAM);
	ordenarCreciente(numeros, TAM);

	return 0;
}
