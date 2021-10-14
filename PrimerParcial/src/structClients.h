/*
 * structClients.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef STRUCTCLIENTS_H_
#define STRUCTCLIENTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int isEmpty;
	int idCliente;
	char nombreEmpresa[50];
	char cuit[15];
	char direccion[50];
	char localidad[50];
}eClientes;

void Inicializar(eClientes lista[], int tam);
int AltaCliente(eClientes lista[], int tam, int id);
int mostrarListaClientes(eClientes lista[], int tam);
void mostrarUnCliente(eClientes unCliente);
int modificarCliente(eClientes lista[], int tam, int opcion);
int bajaCliente(eClientes lista[], int tam);
void harcodearCliente(eClientes lista[], int id, char empresa[], char cuit[], char direccion[], char localidad[]);

#endif /* STRUCTCLIENTS_H_ */
