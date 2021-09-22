/*
 * MiBiblioteca.h
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef MIBIBLIOTECA_H_
#define MIBIBLIOTECA_H_
#include <stdio.h>

void CargarArraySecuencial(int numeros[], int tam);

void CargarArrayAleatoria(int numeros[], int tam);

void InicializarArray(int numeros[], int tam);

int Promedio(int numeros[], int tam);

int MenorNeg(int numeros[], int tam, int* menorNeg);

int sumaNeg(int menorN);

#endif /* MIBIBLIOTECA_H_ */
