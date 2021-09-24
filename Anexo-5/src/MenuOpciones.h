/*
 * MenuOpciones.h
 *
 *  Created on: 9 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef MENUOPCIONES_H_
#define MENUOPCIONES_H_
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	int legajo;
    char nombre[25];
    int edad;
    int sueldo;
}datos;

int MenuOpciones();

void Inicializar(datos pers[], int tam);

void Cargar(datos pers[], int tam);

void MostrarTodos(datos pers[], int tam);

void MostrarIndividual(char elemNom, int elemEdad, int elemSue, int elemLeg);

void Calculos(datos pers[], int tam, float* prom);

void Ordenar(datos pers[], int tam);

#endif /* MENUOPCIONES_H_ */
