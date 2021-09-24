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
		printf("\nSelecione una opcion: ");
		scanf("%d", &opcion);
		printf("\n");

	return opcion;
}
    void Inicializar(datos pers[], int tam){
    for(int i=0; i<tam;i++){
        pers[i].edad = 0;
        pers[i].sueldo = 0;
        strcpy(pers[i].nombre,"");
    }
}
void Cargar(datos pers[], int tam){

    char rta;
    int edadIngresada;
    int posicion;
    char nombre[20];
    int sueldo;
    int legajo;


    do {
        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%s",&nombre);
        printf("Ingrese edad: ");
        scanf("%d", &edadIngresada);
        printf("Ingrese sueldo: ");
        scanf("%d", &sueldo);
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);
        printf("Ingrese la posición para guardar(1 al 5): ");
        scanf("%d", &posicion);


        for(int i=0; i<tam; i++){
        	strcpy(pers[posicion-1].nombre,nombre);
            pers[posicion-1].edad = edadIngresada;
            pers[posicion-1].sueldo = sueldo;
            pers[posicion-1].legajo = legajo;
        }
        printf("\nQuiere seguir ingresando? s/n ");
        fflush(stdin);
        scanf("%c", &rta);

	} while (rta == 's');
}
void MostrarTodos(datos pers[], int tam){
	printf("Nombre:\tEdad:\tSueldo:\tLegajo:");
    for(int i=0; i<tam; i++){
        if(pers[i].edad > 0){
            printf("\n%s \t %d \t %d \t %d", pers[i].nombre,pers[i].edad,pers[i].sueldo,pers[i].legajo);
        }

    }
}
void MostrarIndividual(char elemNom, int elemEdad, int elemSue, int elemLeg){
	printf("\n%c", elemNom);
	printf("\n%d", elemEdad);
	printf("\n%d", elemSue);
	printf("\n%d", elemLeg);
}
void Calculos(datos pers[], int tam, float* prom){
    int acumulador;
    int contador;

    acumulador = 0;
    contador = 0;

    for(int i=0; i<tam; i++){
    	if(pers[i].edad>0){
    		acumulador += pers[i].edad;
    		contador++;
    	}
    }
    *prom = (float)acumulador / contador;
}
void Ordenar(datos pers[], int tam){
	datos aux;
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(pers[i].edad>pers[j].edad){
				aux = pers[i];
				pers[i] = pers[j];
				pers[j] = aux;
			}
		}
	}
}


