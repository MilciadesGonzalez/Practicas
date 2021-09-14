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


	do {
		opcion = MenuOpciones();

		switch (opcion) {
			case 1:
				Inicializar(edades, TAM);
				printf("\nFuncion inicializada...\n");
				printf("\n");
			break;
			case 2:
				Cargar(edades, TAM);
				printf("\n");
			break;
			case 3:
			    MostrarTodos(edades, TAM);
			    MostrarIndividual(edades, TAM);
				printf("\n");
			break;
			case 4:
				Calculos(edades, TAM);
			break;
			case 5:
				printf("\nUd. ha seleccionado lo opción 5-Ordenar\n");
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
