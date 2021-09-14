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
void Inicializar(int edades[], int tam){

    for(int i=0; i<tam;i++){
        edades[i] = 0;
    }
}
void Cargar(int edades[], int tam){

    char rta;
    int edadIngresada;
    int posicion;

    do {
        printf("\nIngrese edad(maximo 5): ");
        scanf("%d", &edadIngresada);
        printf("Ingrese la posición(1 al 5): ");
        scanf("%d", &posicion);

        for(int i=0; i<tam; i++){
            edades[posicion-1] = edadIngresada;
        }
        printf("\nQuiere seguir ingresando? s/n ");
        fflush(stdin);
        scanf("%c", &rta);
        printf("\n");

	} while (rta == 's');
}
void MostrarTodos(int edades[], int tam){

    for(int i=0; i<tam; i++){
        if(edades[i] > 0){
            printf("\nEdad ingresada: %d", edades[i]);
            printf("\n");
        }

    }
}
void MostrarIndividual(int edades[], int tam){

    int posicion;
    char rta;

    do {
        printf("\nIngrese posición(1 al 5) para visualizar la edad: ");
        scanf("%d", &posicion);

        printf("\nLa edad ingresada fue: %d", edades[posicion-1]);
        printf("\n");

        printf("\nQuire visualizar otra posición? s/n.");
        fflush(stdin);
        scanf("%c", &rta);
        printf("\n");

    } while(rta == 's');
}
float Calculos(int edades[], int tam){

    int acumulador;
    float resultado;
    int i;

    //acumulador = 0;

    for(i=0; i<tam; i++){
        acumulador += edades[i];
    }
    resultado = (float)acumulador / i;

    printf("\nEl promedio de las edades es: %2.f", resultado);
    printf("\n");

    return resultado;
}

