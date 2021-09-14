/*
 * MenuOpciones.h
 *
 *  Created on: 9 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef MENUOPCIONES_H_
#define MENUOPCIONES_H_
#include <stdio.h>

int MenuOpciones();

void Inicializar(int edades[], int tam);

void Cargar(int edades[], int tam);

void MostrarTodos(int edades[], int tam);

void MostrarIndividual(int edades[], int tam);

float Calculos(int edades[], int tam);

#endif /* MENUOPCIONES_H_ */
