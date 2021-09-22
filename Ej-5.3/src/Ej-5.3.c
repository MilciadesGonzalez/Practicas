/*
 ============================================================================
Milciades Gonzalez.
Ejercicio 5.3
Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
(Según la recta numérica de los reales, hasta llegar a cero).
Utilizar funciones y vectores.

 ============================================================================
 */

#include <stdlib.h>
#include "MiBiblioteca.h"

#define TAM 10

int main(void) {
	setbuf(stdout,NULL);

	int numeros[TAM];
	float promedioPos;
	int menorNeg;
	int hayNeg;
	int sumaAnteNeg;

	InicializarArray(numeros, TAM);

	CargarArrayAleatoria(numeros, TAM);

	promedioPos = Promedio(numeros, TAM);
	printf("\nEl promedio de los positivos es: %.2f\n", promedioPos);
	hayNeg = MenorNeg(numeros, TAM, &menorNeg);
	sumaAnteNeg = sumaNeg(menorNeg);
	if(hayNeg==1){
		printf("El menor negativo es: %d\n", menorNeg);
		printf("La suma de sus antecesores es: %d\n", sumaAnteNeg);
	}else{
		printf("No hay numeros negativos.");
	}



	return 0;
}
