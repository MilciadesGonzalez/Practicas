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
		printf("\nSelecione una opción: ");
		scanf("%d\n", &opcion);

	return opcion;
}
void Inicializar(int edades[], int sueldo[], int tam){

    for(int i=0; i<tam;i++){
        edades[i] = 0;
        sueldo[i] = 0;
    }
}
void Cargar(int edades[], int sueldo[], char nombres[][25], int tam){

    char rta;
    int edadIngresada;
    int posicion;
    int sueldoIngresado;


    do {
    	printf("Ingrese nombre: ");
    	//fflush(nombres[posicion-1][25]);
    	scanf("%[^\n]",&nombres[posicion-1][25]);
        printf("Ingrese edad: ");
        scanf("%d\n", &edadIngresada);
        printf("Ingrese sueldo: ");
        scanf("%d\n", &sueldoIngresado);
        printf("Ingrese la posición para guardar(1 al 5): ");
        scanf("%d\n", &posicion);


        for(int i=0; i<tam; i++){
            edades[posicion-1] = edadIngresada;
            sueldo[posicion-1] = sueldoIngresado;
        }
        printf("\nQuiere seguir ingresando? s/n ");
        fflush(stdin);
        scanf("%c\n", &rta);

	} while (rta == 's');
}
void MostrarTodos(int edades[], int sueldo[], int tam){
	printf("Edades: \t Sueldos:");
    for(int i=0; i<tam; i++){
        if(edades[i] > 0){
            MostrarIndividual(edades[i], sueldo[i]);
        }

    }
}
void MostrarIndividual(int elemEdad, int elemSueldo){
	printf("\n%d\t%d\n", elemEdad, elemSueldo);

}
void Calculos(int edades[], int sueldo[], int tam, float* prom, float* promS){

    int acumulador;
    float acumS;
    int contador;

    acumulador = 0;
    acumS = 0;
    contador = 0;

    for(int i=0; i<tam; i++){
    	if(edades[i]>0){
    		acumulador += edades[i];
    		acumS += sueldo[i];
    		contador++;
    	}
    }
    *prom = (float)acumulador / contador;
    *promS = (float)acumS / contador;
}
void Ordenar(int edades[], int sueldo[], int tam){
	int aux;
	int auxS;
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(edades[i]>edades[j]){
				aux = edades[i];
				edades[i] = edades[j];
				edades[j] = aux;

				auxS = sueldo[i];
				sueldo[i] = sueldo[j];
				sueldo[j] = auxS;
			}
		}
	}
}

