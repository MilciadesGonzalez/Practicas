/*
 * input.h
 *
 *  Created on: 24 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef INPUT_H_
#define INPUT_H_

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ingresarEntero(char mensaje[]);

float ingresarFlotante(char mensaje[]);

void CargarArrayEnteroSecuencial(int numeros[], int tam, char mensaje);

void InicializarArrayEnCero(int numeros[], int tam);

void MostrarTodosElementosArrayEnteros(int num[], int tam);

void validarIngresoArrayEntero(int num[], int tam, int min, int max);

void ordenarArrayCreciente(int num[], int tam);

void MostrarNumerosParesArrayEntero(int num[], int tam);

void MostrarPosicionesImparesArrayEntero(int num[], int tam);

void NumerosRepetidosEnArray(int num[], int tam);

int sumaParesArrayEntero(int num[], int tam, int* suma);

int mayorImparArrayEntero(int num[], int tam, int* impar);

void contarPosNegArrayEntero(int num[], int tam, int* contPos, int* contNeg);

#endif /* INPUT_H_ */
