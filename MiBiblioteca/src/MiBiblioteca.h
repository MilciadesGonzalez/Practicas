/*
 * MiBiblioteca.h
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef MIBIBLIOTECA_H_
#define MIBIBLIOTECA_H_
#include <stdio.h>

/// \fn int MenuOpciones(int, int, int)
/// \brief Muestra menu de opciones principales, solicita ingresar opcion.
/// \param opcion
/// \param op1
/// \param op2
/// \return Retorna opcion ingresada.
int MenuPrincipal(int opcion, int op1, int op2);

/// \fn int IngresoNumero1(int)
/// \brief Solicita el ingreso del primer operando.
/// \param num1
/// \return Retorna el numero ingresado.
int IngresarNumero(int numero);

/// \fn void MenuCalculos(int, int)
/// \brief Recibe los 2 operando y los muestra en el menu interno de la opcion 3 del menu principal.
/// \param op1
/// \param op2
void MenuCalculos(int op1, int op2);

/// \fn void Calculos(int, int, int*, int*, float*, int*, int*, int*)
/// \brief Recibe los 2 operando y genera los todos los calculos, los guarda mediante pasaje de valor por referencia.
/// \param op1
/// \param op2
/// \param suma
/// \param resta
/// \param div
/// \param mult
/// \param fact1
/// \param fact2
void Calcular(int op1, int op2, int* suma, int* resta, float* div, int* mult, int* fact1, int* fact2);

/// \fn void Mostrar(int, int, int, int, float, int, int, int)
/// \brief Recibe los 2 operando y los muestra en el menu interno de la opcion 4 del menu principal.
/// \param op1
/// \param op2
/// \param suma
/// \param resta
/// \param div
/// \param mult
/// \param fact1
/// \param fact2
void MostrarResultados(int op1, int op2, int suma, int resta, float div, int mult, int fact1, int fact2);

/// \fn void ordenarArrayCreciente(int[], int)
/// \brief Recibe array de enteros, tamaño del mismo y los ordena de forma creciente.
/// \param num
/// \param tam
void ordenarArrayCreciente(int num[], int tam);

/// \fn void ordenarArrayDecreciente(int[], int)
/// \brief Recibe array de enteros, tamaño del mismo y los ordena de forma decreciente.
/// \param num
/// \param tam
void ordenarArrayDecreciente(int num[], int tam);

/// \fn void CargarArraySecuencial(int[], int)
/// \brief Recibe array de enteros, tamaño del mismo. Ejecuta la carga secuencial.
/// \param numeros
/// \param tam
void CargarArraySecuencial(int numeros[], int tam);

/// \fn void CargarArrayAleatoria(int[], int)
/// \brief Recibe array de enteros, tamaño del mismo. Ejecuta la carga de manera aleatoria.
/// \param numeros
/// \param tam
void CargarArrayAleatoria(int numeros[], int tam);

/// \fn void CargarArraySepararPosNeg(int[], int, int[], int[])
/// \brief Recibe array de enteros, tamaño del mismo. Ejecuta la carga secuencial y separa positivos en array al igual que negativos.
/// \param numeros
/// \param tam
/// \param positivos
/// \param negativos
void CargarArraySepararPosNeg(int numeros[], int tam, int positivos[], int negativos[]);

/// \fn void MostrarElemArray(int[], int)
/// \brief Recibe array, el tamaño del mismo y muestra todos los elementos llamando funcion mostrar individual.
/// \param num
/// \param tam
void MostrarElemArray(int num[], int tam);

/// \fn int MostrarIndividual(int)
/// \brief Recibe entero y muestra el numero.
/// \param num
/// \return retorna el numero.
int MostrarIndividual(int num);

/// \fn void InicializarArray(int[], int)
/// \brief Recibe array, tamaño del mismo e inicializa todos los elementos en 0.
/// \param numeros
/// \param tam
void InicializarArray(int numeros[], int tam);

#endif /* MIBIBLIOTECA_H_ */
