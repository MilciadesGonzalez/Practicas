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

#define TAMLISTAPRODUCTOS 10
#define TAMLISTATIPOS 4
#define TAMLISTANACIONALIDADES 3


int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	//int opcion2;
	//float precioMayor;

	eTipoProducto listaDeTipos[TAMLISTATIPOS] =
	{
			{1000,"IPHONE"},
			{1001,"MAC"},
			{1002,"IPAD"},
			{1003,"ACCESORIOS"},
	};
	eNacionalidadProducto listaDeNacionalidades[TAMLISTANACIONALIDADES] =
	{
			{1, "EEUU"},
			{2, "CHINA"},
			{3, "OTRO"}
	};
	eProducto listaDeProductos[TAMLISTAPRODUCTOS] =
	{
			{1,1,"Cargador",2,1003,15},
			{1,2,"Iphone X",1,1000,700},
			{1,3,"Mac Air",2,1002,700},
			{1,4,"Ipad Super",1,1000,500}
	};
	//Inicializar(listaProductos, TAM);
	do{
		opcion = MenuPrincipal();
		switch (opcion){
			case 1:
					if(CargarProducto(listaDeProductos,TAMLISTAPRODUCTOS ,listaDeTipos, TAMLISTATIPOS, listaDeNacionalidades, TAMLISTANACIONALIDADES)==0)
					{
						printf("Todas las posiciones estan ocupadas.");
					}
					printf("\n");
			break;
//			case 2:
//					if(bajaProducto(listaProductos, TAM)==1)
//					{
//						printf("\nEl producto ha sido eliminado.\n");
//						mostrarProductos(listaProductos, TAM);
//					}
//					else
//					{
//						printf("\nEl producto no existe.\n");
//					}
//					printf("\n");
//			break;
//			case 3:
//					opcion2 = subMenu();
//					if(modificacionProducto(listaProductos, TAM, opcion2)==1)
//					{
//						printf("\nEl producto ha sido modificado.\n");
//						mostrarProductos(listaProductos, TAM);
//					}
//					else
//					{
//						printf("\nNo se realizó ninguna modificacion.\n");
//					}
//					printf("\n");
//			break;
			case 4:
				mostrarProductoPorTipo(listaDeProductos, TAMLISTAPRODUCTOS, listaDeTipos, TAMLISTATIPOS);
					printf("\n");
			break;
//			case 5:
//					if(ordenarPorPrecio(listaProductos, TAM)==1)
//					{
//						mostrarProductos(listaProductos, TAM);
//					}
//					else
//					{
//						printf("Los productos ya estan ordenados por precio.\n");
//					}
//					printf("\n");
//			break;
//			case 6:
//					if(ordenarPorDescripcion(listaProductos, TAM)==1)
//					{
//						mostrarProductos(listaProductos, TAM);
//					}
//					else
//					{
//						printf("Los productos ya estan ordenados por descripcion.\n");
//					}
//					printf("\n");
//			break;
//			case 7:
//					if(productoMayorPrecio(listaProductos, TAM, &precioMayor)==1)
//					{
//						mostrarProductoPorPrecio(listaProductos, TAM, precioMayor);
//					}
//					else
//					{
//						printf("No hay productos cargados.\n");
//					}
//					printf("\n");
//			break;
//			case 8:
//					if(mostrarProductoPorPrecio(listaProductos, TAM, 700)==0)
//					{
//						printf("No hay productos con precio 700.\n");
//					}
//					printf("\n");
//			break;
//			case 9:
//					if(mostrarProductoPorTipo(listaProductos, TAM, listaDeTipos, 4)==0)
//					{
//						printf("Opcion invalida.");
//					}
//			break;
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
