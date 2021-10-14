/*
 * structOrders.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef STRUCTORDERS_H_
#define STRUCTORDERS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "structClients.h"

typedef struct{
	int isEmpty;
	int idPedido;
	int estado;
	char descripcionEstado[50];
	float kilosTotales;
	float kgHdpe;
	float kgLdpe;
	float kgPp;
	int idCliente;
	int tipo;
}ePedidos;

void InicializarP(ePedidos lista[], int tam);
int mostrarListaPedidos(ePedidos lista[], int tam);
void mostrarUnPedido(ePedidos unPedido);
void validarPorDesc(ePedidos listaP[], int tam);

#endif /* STRUCTORDERS_H_ */
