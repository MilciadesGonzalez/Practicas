/*
 * nexo.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef NEXO_H_
#define NEXO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "structOrders.h"
#include "structClients.h"
#include "structTypes.h"
#include "inputs.h"

typedef struct{
	int id;
	int contador;
	int acumulador;
}eAuxPedido;

typedef struct{
	int id;
	char descripcion[50];
	int contador;
	int acumulador;
}eAuxLocalidad;

int CrearPedido(eClientes listaC[], int tamC, ePedidos listaP[], int tamP, int idPed);
int imprimirListaclientes(eClientes listaC[], int tamC, ePedidos listaP[], int tamP);
int imprimirListaPedisdosPendientes(eClientes listaC[], int tamC, ePedidos listaP[], int tamP);
void InicializarAuxPed(ePedidos lista[], int tam, eAuxPedido* auxPed);
void contarCliente(ePedidos lista[], int tam, eAuxPedido aux[]);
int validarArray(eClientes listaC[], int tamC, ePedidos listaP[], int tamP, int idCli);
int imprimirPedidosProcesados(ePedidos listaP[], int tamP, eClientes listaC[], int tamC, eTiposPlasticos listaT[], int tamT);
int pedidosPorLocalidad(eClientes listaC[], int tamC, ePedidos listaP[], int tamP);
void InicializarAuxLoc(ePedidos lista[], int tamP, eAuxLocalidad* auxPed);
void contarLocalidad(eClientes lista[], int tamC, eAuxLocalidad* aux, ePedidos listaP[], int tamP);
void pedirLocalidad(eAuxLocalidad aux[], int tam);

#endif /* NEXO_H_ */
