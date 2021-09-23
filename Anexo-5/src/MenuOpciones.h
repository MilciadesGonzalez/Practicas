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

int MenuOpciones();

void Inicializar(int edades[], int sueldo[], int tam);

void Cargar(int edades[], int sueldo[], char nombres[][20], int tam);

void MostrarTodos(int edades[], int sueldo[], int tam);

void MostrarIndividual(int edad, int sueldo);

void Calculos(int edades[], int sueldo[], int tam, float* prom, float* promS);

void Ordenar(int edades[], int sueldo[], int tam);

#endif /* MENUOPCIONES_H_ */
