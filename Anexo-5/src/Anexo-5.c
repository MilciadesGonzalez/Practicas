/*
 ============================================================================
 Name        : Anexo-5.c
 Author      : Milciades Gonzalez
 Version     :
 ============================================================================
 */

#include <stdlib.h>
#include "MenuOpciones.h"
#define TAM 5

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	int edades[TAM];
	int sueldo[TAM];
	char nombres[TAM][25];
	float promedio;
	float promedioSueldo;


	do {
		opcion = MenuOpciones();

		switch (opcion) {
			case 1:
				Inicializar(edades, sueldo, TAM);
				printf("\nFuncion inicializada...\n");
				printf("\n");
			break;
			case 2:
				Cargar(edades, sueldo, nombres, TAM);
				printf("\n");
			break;
			case 3:
			    MostrarTodos(edades, sueldo,TAM);
				printf("\n");
				printf("\n");
			break;
			case 4:
				Calculos(edades, sueldo, TAM, &promedio, &promedioSueldo);
				printf("\nEl promedio de las edades es: %.2f y el promedio de sueldos es: %.2f", promedio, promedioSueldo);
				printf("\n");
				printf("\n");
			break;
			case 5:
				Ordenar(edades, sueldo,TAM);
				MostrarTodos(edades, sueldo,TAM);
				printf("\n");
				printf("\n");
			break;
			case 6:
			break;
			default:
				printf("\nOpción invalida.\n");
			break;
		}
	} while (opcion != 6);


	return 0;

}
