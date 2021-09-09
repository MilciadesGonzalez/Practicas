/*
 ============================================================================
 Name        : Anexo-5.c
 Author      : Milciades Gonzalez
 Version     :
 ============================================================================
 */

#include <stdlib.h>
#include "MenuOpciones.h"

int main(void) {
	setbuf(stdout,NULL);

	int opcion;

	do {
		opcion = MenuOpciones();

		switch (opcion) {
			case 1:
				printf("\nUd. ha seleccionado lo opción 1-Inicializar\n");
			break;
			case 2:
				printf("\nUd. ha seleccionado lo opción 2-Cargar\n");
			break;
			case 3:
				printf("\nUd. ha seleccionado lo opción 3-Mostrar\n");
			break;
			case 4:
				printf("\nUd. ha seleccionado lo opción 4-Calcular Promedio\n");
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
