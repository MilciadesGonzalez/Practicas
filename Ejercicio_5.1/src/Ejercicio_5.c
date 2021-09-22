/*
 ============================================================================
Milciades Gonzalez
Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANT 5
void Inicializar(int numeros[], int tam);
void Mostrar(int numeros[], int tam);

int main(void) {
	setbuf(stdout,NULL);

	int numeros[CANT];
	int acum;
	acum = 0;
	Inicializar(numeros, CANT);

	for(int i=0; i<CANT; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
		acum = numeros[i] + acum;
	}
	Mostrar(numeros, CANT);

	printf("\nLa suma de los numeros ingresados es: %d", acum);

	return EXIT_SUCCESS;
}
void Inicializar(int numeros[], int tam){

	for(int i=0; i<tam; i++){
		numeros[i] = 0;
	}

}
void Mostrar(int numeros[], int tam){

	int resultado;

	for(int i=0; i<tam; i++){
		resultado = numeros[i];
		printf("\nNumero ingresado: %d", resultado);
	}
}
