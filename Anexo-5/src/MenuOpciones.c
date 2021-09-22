/*
 * MenuOpciones.c
 *
 *  Created on: 9 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "MenuOpciones.h"

int MenuOpciones(){
	int opcion;

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
	printf("\n");
	printf("Edades: ");
    for(int i=0; i<tam; i++){
        if(edades[i] > 0){
            MostrarIndividual(edades[i]);
        }

    }
}
int MostrarIndividual(int edad){
	printf("\n%d", edad);

	return edad;
}
float Calculos(int edades[], int tam, float* prom){

    int acumulador;
    int contador;
    float resultado;
    int i;

    acumulador = 0;
    contador = 0;

    for(i=0; i<tam; i++){
    	if(edades[i]>0){
    		acumulador += edades[i];
    		contador++;
    	}

    }
    *prom = (float)acumulador / contador;
    if(prom > 0){
    	resultado = 1;
    }else{
    	resultado = 0;
    }

    return resultado;
}
void Ordenar(int edades[], int tam){
	int aux;
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(edades[i]>edades[j]){
				aux = edades[i];
				edades[i] = edades[j];
				edades[j] = aux;
			}
		}
	}
}

