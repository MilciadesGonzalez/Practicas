/*
 ============================================================================
Milciades Gonzalez

Ejercicio 8-2: Listo
Ejercicio 9.1:

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
	int opcion2;
	float precioMayor;
	eProducto listaProductos[TAM] = {{1,10,"Cargador",2,4,15},{1,11,"Iphone X",1,1,700},{1,12,"Mac Air",2,3,700},
									{1,13,"Ipad Super",1,1,500},{1,14,"Funda",2,4,15}};
	//Inicializar(listaProductos, TAM);

	do{
		opcion = MenuPrincipal();

		switch (opcion){
			case 1:
					if(CargarProducto(listaProductos, TAM)==0)
					{
						printf("Todas las posiciones estan ocupadas.");
					}
					printf("\n");
			break;
			case 2:
					if(bajaProducto(listaProductos, TAM)==1)
					{
						printf("\nEl producto ha sido eliminado.\n");
						mostrarProductos(listaProductos, TAM);
					}
					else
					{
						printf("\nEl producto no existe.\n");
					}
					printf("\n");
			break;
			case 3:
					opcion2 = subMenu();
					if(modificacionProducto(listaProductos, TAM, opcion2)==1)
					{
						printf("\nEl producto ha sido modificado.\n");
						mostrarProductos(listaProductos, TAM);
					}
					else
					{
						printf("\nNo se realizó ninguna modificacion.\n");
					}
					printf("\n");
			break;
			case 4:
					mostrarProductos(listaProductos, TAM);
					printf("\n");
			break;
			case 5:
					if(ordenarPorPrecio(listaProductos, TAM)==1)
					{
						mostrarProductos(listaProductos, TAM);
					}
					else
					{
						printf("Los productos ya estan ordenados por precio.\n");
					}
					printf("\n");
			break;
			case 6:
					if(ordenarPorDescripcion(listaProductos, TAM)==1)
					{
						mostrarProductos(listaProductos, TAM);
					}
					else
					{
						printf("Los productos ya estan ordenados por descripcion.\n");
					}
					printf("\n");
			break;
			case 7:
					if(productoMayorPrecio(listaProductos, TAM, &precioMayor)==1)
					{
						mostrarProductoPorPrecio(listaProductos, TAM, precioMayor);
					}
					else
					{
						printf("No hay productos cargados.\n");
					}
					printf("\n");
			break;
			case 8:
					if(mostrarProductoPorPrecio(listaProductos, TAM, 700)==0)
					{
						printf("No hay productos con precio 700.\n");
					}
					printf("\n");
			break;
			case 9:
			break;
			case 10:
					printf("Gracias por utilizar la app.");
			break;
			default:
					printf("Opcion invalida.");
			break;
		}
	}while(opcion != 10);



	return EXIT_SUCCESS;
}

