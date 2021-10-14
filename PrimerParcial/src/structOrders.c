/*
 * structOrders.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */
#include "structOrders.h"
#define TRUE 0
#define FALSE 1

void InicializarP(ePedidos lista[], int tam)
{
	for(int i=0; i<tam; i++)
	{
		lista[i].isEmpty = 0;
	}
}
int mostrarListaPedidos(ePedidos lista[], int tam)
{
	int flag;
	flag = 0;
	printf("ID \t Estado de Pedido \t Kilos Totales\n");
	for(int i=0; i<tam; i++)
	{
		if(lista[i].isEmpty==FALSE)
		{
			validarPorDesc(lista, tam);
			mostrarUnPedido(lista[i]);
			flag = 1;
		}
	}
	return flag;
}
void mostrarUnPedido(ePedidos unPedido)
{
	printf("%-10d %-18s %10.2f\n",unPedido.idPedido,
								unPedido.descripcionEstado,
								unPedido.kilosTotales);
}
void validarPorDesc(ePedidos listaP[], int tam)
{
	for(int i=0; i<tam; i++)
	{
		if(listaP[i].estado==0)
		{
			strcpy(listaP[i].descripcionEstado, "PENDIENTE");
		}
		else if(listaP[i].estado==1)
		{
			strcpy(listaP[i].descripcionEstado, "COMPLETADO");
		}
	}
}
