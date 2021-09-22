#include <stdio.h>

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// \fn void Inicializar(int[], int)
/// \brief Inicializa todos los indices del array en 0;
/// \param num
/// \param tam
void Inicializar(int num[], int tam);

/// \fn void Cargar(int[], int, int, int)
/// \brief Recibe array y tamaño. Procede con la carga secuencial con ingreso del usuario.
/// \param num
/// \param tam
/// \param min
/// \param max
void Cargar(int num[], int tam, int min, int max);

/// \fn void contarPosNeg(int[], int, int*, int*)
/// \brief Recibe array, tamaño. Cuenta los numeros positivos y negativos. Los retorna por referencia.
/// \param num
/// \param tam
/// \param contPos
/// \param contNeg
void contarPosNeg(int num[], int tam, int* contPos, int* contNeg);

/// \fn int mayorImpar(int[], int, int*)
/// \brief Recibe array y tamaño. Buscar mayor impar y lo retorna por referencia.
/// \param num
/// \param tam
/// \param maxImpar
/// \return Retorna flag para informar si encontro o no numero impar.
int mayorImpar(int num[], int tam, int* maxImpar);

/// \fn int sumaPares(int[], int, int*)
/// \brief Recibe array y tamaño. suma los numeros pares y lo retorna por referencia.
/// \param num
/// \param tam
/// \param suma
/// \return Retorna flag para informar si encontro o no numeros pares.
int sumaPares(int num[], int tam, int* suma);

/// \fn void MostrarTodo(int[], int)
/// \brief Recibe array y tamaño. Recorre y muestra todos los elementos.
/// \param num
/// \param tam
void MostrarTodo(int num[], int tam);

/// \fn void MostrarPares(int[], int)
/// \brief Recibe array y tamaño. Recorre y muestra todos los numeros pares.
/// \param num
/// \param tam
void MostrarPares(int num[], int tam);

/// \fn void MostrarPosicionesImpares(int[], int)
/// \brief Recibe array y tamaño. Recorre y muestra todos los elementos de los indices impares.
/// \param num
/// \param tam
void MostrarPosicionesImpares(int num[], int tam);

void NumerosRepetidos(int num[], int tam);

void ordenarCreciente(int num[], int tam);

#endif /* FUNCIONES_H_ */
