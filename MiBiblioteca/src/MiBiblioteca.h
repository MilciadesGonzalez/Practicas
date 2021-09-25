/*
 * MiBiblioteca.h
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef MIBIBLIOTECA_H_
#define MIBIBLIOTECA_H_
#include <stdio.h>
#include <string.h>

/// @fn int pedirEntero(char[])
/// @brief Recibe mensaje para mostrar al usuario pidiendo un numero.
/// @param msje
/// @return Retorna el numero que ingresa el usuario.
int pedirEntero(char msje[]);

/// @fn float pedirFlotante(char[])
/// @brief Recibe mensaje para mostrar al usuario pidiendo un numero con decimales.
/// @param msje
/// @return Retorna el numero que ingresa el usuario.
float pedirFlotante(char msje[]);

/// @fn char pedirCaracter(char[])
/// @brief Recibe mensaje para mostrar al usuario pidiendo un caracter.
/// @param msje
/// @return retorna el caracter.
char pedirCaracter(char msje[]);

/// @fn void pedirString(char[], char[], int)
/// @brief Recibe mensaje de solicitud cadena donde retornar dato obtenido y tamaño del array.
/// @param mensaje
/// @param cadena
/// @param tam
void pedirString(char mensaje[],char cadena[],int tam);

/// @fn int sumaEntero(int, int)
/// @brief Recibe 2 numeros por parametros y ejecuta la suma.
/// @param numeroUno
/// @param numeroDos
/// @return Retorna el resultado.
int sumaEntero(int numeroUno, int numeroDos);

/// @fn int restaEntero(int, int)
/// @brief Recibe 2 numeros por parametros y ejecuta la resta.
/// @param numeroUno
/// @param numeroDos
/// @return Retorna el resultado.
int restaEntero(int numeroUno, int numeroDos);

/// @fn int divisionEntero(int, int)
/// @brief Recibe 2 numeros por parametros y ejecuta la division.
/// @param numeroUno
/// @param numeroDos
/// @return Retorna el resultado.
int divisionEntero(int numeroUno, int numeroDos);

/// @fn int multiplicacionEntero(int, int)
/// @brief Recibe 2 numeros por parametros y ejecuta la multiplicacion.
/// @param numeroUno
/// @param numeroDos
/// @return Retorna el resultado.
int multiplicacionEntero(int numeroUno, int numeroDos);

/// @fn int factorialEntero(int)
/// @brief Recibe un numero y ejecuta el factorial.
/// @param numero
/// @return Retorna el resultado.
int factorialEntero(int numero);

/// @fn void mostrarEntero(char[], int)
/// @brief Recibe mensaje, un numero y lo muestra.
/// @param mensaje
/// @param numero
void mostrarEntero(char mensaje[], int numero);

/// @fn void CargarArrayEnteroSecuencial(int[], int, char)
/// @brief Recibe array, tamaño y mensaje solicitando los numeros. Ejecuta el cargado secuencial,
/// @param numeros
/// @param tam
/// @param mensaje
void CargarArrayEnteroSecuencial(int numeros[], int tam, char mensaje);

/// @fn void InicializarArrayEnCero(int[], int)
/// @brief Recibe array, tamaño y lo inicializa en 0.
/// @param numeros
/// @param tam
void InicializarArrayEnCero(int numeros[], int tam);

/// @fn void MostrarTodosElementosArrayEnteros(int[], int)
/// @brief Recibe array y tamaño. Lo recorre y muestra todos los elementos.
/// @param num
/// @param tam
void MostrarTodosElementosArrayEnteros(int num[], int tam);

/// @fn void validarIngresoArrayEntero(int[], int, int, int)
/// @brief Recibe array, tamaño, minimo y maximo para validarlo.
/// @param num
/// @param tam
/// @param min
/// @param max
void validarIngresoArrayEntero(int num[], int tam, int min, int max);

/// @fn void ordenarArrayCreciente(int[], int)
/// @brief Recibe array y tamaño. Ejecuta el ordenado creciente.
/// @param num
/// @param tam
void ordenarArrayCreciente(int num[], int tam);

/// @fn void MostrarNumerosParesArrayEntero(int[], int)
/// @brief Recibe array y tamaño. Muestra numeros pares dentro del array.
/// @param num
/// @param tam
void MostrarNumerosParesArrayEntero(int num[], int tam);

/// @fn void MostrarPosicionesImparesArrayEntero(int[], int)
/// @brief Recibe array y tamaño. Muestra elementos de indices impares del array.
/// @param num
/// @param tam
void MostrarPosicionesImparesArrayEntero(int num[], int tam);

/// @fn void NumerosRepetidosEnArray(int[], int)
/// @brief Recibe array y tamaño. Muestra numeros repetidos dentro del array.
/// @param num
/// @param tam
void NumerosRepetidosEnArray(int num[], int tam);

/// @fn int sumaParesArrayEntero(int[], int, int*)
/// @brief Recibe array, tamaño y direcion de una variable para escribir el resultado.
/// @param num
/// @param tam
/// @param suma
/// @return retorna bandera para validar.
int sumaParesArrayEntero(int num[], int tam, int* suma);

/// @fn int mayorImparArrayEntero(int[], int, int*)
/// @brief Recibe array, tamaño y direcion de una variable para escribir el resultado.
/// @param num
/// @param tam
/// @param impar
/// @return retorna bandera para validar.
int mayorImparArrayEntero(int num[], int tam, int* impar);

/// @fn void contarPosNegArrayEntero(int[], int, int*, int*)
/// @brief Recibe array, tamaño y direcion de contador positivo y negativo para devolver resultados.
/// @param num
/// @param tam
/// @param contPos
/// @param contNeg
void contarPosNegArrayEntero(int num[], int tam, int* contPos, int* contNeg);

#endif /* MIBIBLIOTECA_H_ */
