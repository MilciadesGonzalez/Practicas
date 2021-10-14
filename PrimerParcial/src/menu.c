/*
 * menu.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Milciades Gonzalez
 */
#include "menu.h"

int MenuPrincipal()
{
	int op;

	do{
    	printf("1. Alta de cliente.\n");
    	printf("2. Modificar datos de cliente.\n");
    	printf("3. Baja de cliente.\n");
    	printf("4. Crear pedido de recolección.\n");
    	printf("5. Procesar residuos.\n");
    	printf("6. Imprimir Clientes.\n");
    	printf("7. Imprimir Pedidos pendientes.\n");
    	printf("8. Imprimir Pedidos procesados.\n");
    	printf("9. Ingresar una localidad e indicar la cantidad de pedidos pendientes para dicha localidad.\n");
    	printf("10. Cantidad de kilos de polipropileno reciclado promedio por cliente. (kilos totales / cantidad de clientes).\n");
    	printf("11. Salir\n");
    	printf("\n");
    	op = getInt("Ingrese opcion: ");
    	printf("\n");
	}while(op==11);
	return op;
}
int subMenu()
{
	int op;

	printf("1. Modificar direccion.\n");
	printf("2. Modificar localidad.\n");
	printf("\n");
	op = getInt("Ingrese opcion: ");
	printf("\n");

	return op;
}

