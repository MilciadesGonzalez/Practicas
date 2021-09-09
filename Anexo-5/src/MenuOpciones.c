/*
 * MenuOpciones.c
 *
 *  Created on: 9 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "MenuOpciones.h"

int MenuOpciones(){
	int opcion;

		//printf("1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-Salir\n");
		printf("1-Inicializar\n");
		printf("2-Cargar\n");
		printf("3-Mostrar\n");
		printf("4-Calcular Promedio\n");
		printf("5-Ordenar\n");
		printf("6-Salir\n");
		printf("Selecione una opción: ");
		scanf("%d", &opcion);

	return opcion;
}

