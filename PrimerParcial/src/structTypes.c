/*
 * structTypes.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */
#include "structTypes.h"

#define TRUE 0
#define FALSE 1
#define PENDIENTE 0
#define COMPLETADO 1

int ProcesarPedido(ePedidos listaP[], int tamP, eTiposPlasticos listaT[], int tamT)
{
	int flag;
	int idPed;
	float kgHdpe;
	float kgLdpe;
	float kgPp;
	float restaKg;
	flag = 0;
	kgHdpe = 0;
	kgLdpe = 0;
	kgPp = 0;

	for(int i=0; i<tamP; i++)
	{
		if(listaP[i].isEmpty==FALSE && listaP[i].estado==PENDIENTE)
		{
			mostrarListaPedidos(listaP, tamP);
			idPed = getInt("Ingrese ID del pedido: ");

			if(listaP[i].isEmpty==FALSE && listaP[i].idPedido==idPed)
			{
				restaKg = listaP[i].kilosTotales - (kgHdpe + kgLdpe + kgPp);
				printf("\nKgs sin reciclar restantes: %.2f\n", restaKg);
				kgHdpe = getFloat("Ingrese kgs HDPE reciclados: ");
				while (restaKg < 0)
				{
					restaKg = listaP[i].kilosTotales - (kgHdpe + kgLdpe + kgPp);
					printf("No puede superar los kilos totales.");
					kgHdpe = getFloat("Reingrese kgs HDPE reciclados: ");
				}
				restaKg = listaP[i].kilosTotales - (kgHdpe + kgLdpe + kgPp);
				printf("\nKgs sin reciclar restantes: %.2f\n", restaKg);
				kgLdpe = getFloat("Ingrese kgs LDPE reciclados: ");
				while (restaKg < 0)
				{
					restaKg = listaP[i].kilosTotales - (kgHdpe + kgLdpe + kgPp);
					printf("No puede superar los kilos totales.");
					kgLdpe = getFloat("Reingrese kgs LDPE reciclados: ");
				}
				restaKg = listaP[i].kilosTotales - (kgHdpe + kgLdpe + kgPp);
				printf("\nKgs sin reciclar restantes: %.2f\n", restaKg);
				kgPp = getFloat("Ingrese kgs PP reciclados: ");
				while (restaKg < 0)
				{
					restaKg = listaP[i].kilosTotales - (kgHdpe + kgLdpe + kgPp);
					printf("No puede superar los kilos totales.");
					kgPp = getFloat("Reingrese kgs PP reciclados: ");
				}
				//grabarTipoPlastico(listaT, tamT, kgHdpe, kgLdpe, kgPp);
				listaP[i].kgHdpe = kgHdpe;
				listaP[i].kgLdpe = kgLdpe;
				listaP[i].kgPp = kgPp;
				listaP[i].estado = COMPLETADO;
				validarPorDesc(listaP, tamP);
				flag = 1;
				break;
			}
		}
	}
	return flag;
}
void mostrarTipos(eTiposPlasticos lista[], int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("%4d %-15s\n",lista[i].idTipo, lista[i].descripcionTipo);
	}
}
int validarPorTipo(int tipo, eTiposPlasticos listaTipos[], int tam)
{
	int flag;
	flag = 0;
	for(int i=0; i<tam; i++)
	{
		if(tipo==listaTipos[i].idTipo)
		{
			flag = 1;
		}
	}
	return flag;
}
void grabarTipoPlastico(eTiposPlasticos listaT[], int tamT, float kgHdpe, float kgLdpe, float kgPp)
{
	for(int i=0; i<tamT; i++)
	{
//		listaT[i].kgHdpe = kgHdpe;
//		listaT[i].kgLdpe = kgLdpe;
//		listaT[i].kgPp = kgPp;
	}
}
int opcionTipoPlastico(eTiposPlasticos listaT[], int tamT)
{
	int op;
	int validTipo;
	mostrarTipos(listaT, tamT);
	op = getInt("Ingresar tipo de plastico: ");
	validTipo = validarPorTipo(op, listaT, tamT);
	while (validTipo == 0)
	{
		mostrarTipos(listaT, tamT);
		op = getInt("Tipo invalido. Reingrese tipo de plastico: ");
		validTipo = validarPorTipo(op, listaT, tamT);
	}
	return op;
}
