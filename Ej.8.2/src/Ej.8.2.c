/*
 ============================================================================
Milciades Gonzalez

Ejercicio 8-2:
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
idProducto (numerico)
descripcion (alfanumérico)
nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
precio (numérico decimal)
Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
LISTADO Productos.
LISTADO ordenado por precio.
LISTADO ordenado por descripción.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

#define TAM 5
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4


int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	eProducto listaProductos[TAM];
	Inicializar(listaProductos, TAM);

	do{
		opcion = MenuPrincipal();

		switch (opcion){
			case 1:
					CargarProducto(listaProductos, TAM);
					printf("\n");
			break;
			case 2:
					bajaProducto(listaProductos, TAM);
					printf("\n");
			break;
			case 3:
					modificacionProducto(listaProductos, TAM);
					printf("\n");
			break;
			case 4:
					mostrarProductos(listaProductos, TAM);
					printf("\n");
			break;
			case 5:
					ordenadoPrecio(listaProductos, TAM);
					mostrarProductos(listaProductos, TAM);
					printf("\n");
			break;
			case 6:
					ordenadoDescripcion(listaProductos, TAM);
					mostrarProductos(listaProductos, TAM);
					printf("\n");
			break;
			case 7:
					printf("Gracias por utilizar la app.");
			break;
			default:
					printf("Opcion invalida.");
			break;
		}
	}while(opcion != 7);



	return EXIT_SUCCESS;
}

