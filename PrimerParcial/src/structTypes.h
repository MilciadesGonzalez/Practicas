/*
 * structTypes.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef STRUCTTYPES_H_
#define STRUCTTYPES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "structOrders.h"
#include "inputs.h"

typedef struct{
	int isEmpty;
	int idTipo;
	char descripcionTipo[50];
}eTiposPlasticos;

int ProcesarPedido(ePedidos listaP[], int tamP, eTiposPlasticos listaT[], int tamT);
void mostrarTipos(eTiposPlasticos lista[], int tam);
int validarPorTipo(int tipo, eTiposPlasticos listaTipos[], int tam);
void grabarTipoPlastico(eTiposPlasticos listaT[], int tamT, float kgHdpe, float kgLdpe, float kgPp);
int opcionTipoPlastico(eTiposPlasticos listaT[], int tamT);


#endif /* STRUCTTYPES_H_ */
