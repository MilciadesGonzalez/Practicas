/*
 * Biblioteca.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "Biblioteca.h"
#define LIBRE 0
#define OCUPADO 1

int MenuPrincipal()
{
	int op;

	printf("1. ALTA Producto.\n");
	printf("2. BAJA Producto.\n");
	printf("3. MODIFICACIÓN Producto.\n");
	printf("4. LISTADO Productos.\n");
	printf("5. LISTADO ordenado por precio.\n");
	printf("6. LISTADO ordenado por descripción.\n");
	printf("7. El/los  productos más caros.\n");
	printf("8. Los productos que cuestan 700.\n");
	printf("9. Precio promedio por tipo de producto.\n");
	printf("10. Salir\n");
	printf("\n");
	printf("Ingrese una opcion: ");
	scanf("%d", &op);
	printf("\n");

	return op;
}
void Inicializar(eProducto listaProductos[], int tam)
{
	for(int i=0; i<tam; i++)
	{
		listaProductos[i].estado = 0;
	}
}
int pedirEntero(char msje[])
{
	int num;

	printf("%s", msje);
	scanf("%d", &num);

	return num;
}
float pedirFlotante(char msje[])
{
	float num;

	printf("%s", msje);
	scanf("%f", &num);

	return num;
}
void getString(char mensaje[],char cadena[],int tam)
{
    char auxiliar[tam];
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", auxiliar);
    strcpy(cadena, auxiliar);

}
int CargarProducto(eProducto listaProductos[], int tam)
{
	int flag;
	flag = 0;
	for(int i=0; i<tam; i++)
	{
		if(listaProductos[i].estado==LIBRE)
		{
			listaProductos[i].idProducto = pedirEntero("Ingrese Id del producto: ");
			listaProductos[i].tipo = pedirEntero("Ingrese  el tipo(1.IPHONE 2.MAC 3.IPAD 4.ACCESORIOS): ");
			getString("Ingrese descripcion del producto: ", listaProductos[i].descripcion, 50);
			listaProductos[i].nacionalidad = pedirEntero("Ingrese nacionalidad del producto(1.EEUU 2.CHINA 3.OTRO): ");
			listaProductos[i].precio = pedirFlotante("Ingrese precio del producto: ");
			listaProductos[i].estado = 1;
			flag = 1;
			break;

		}
	}
	return flag;
}
void mostrarProductos(eProducto listaProducto[], int tam)
{
	printf("ID \t Tipo \t Descripcion \t Nacionalidad \t Precio\n");
	for(int i=0; i<tam; i++)
	{
		if(listaProducto[i].estado==OCUPADO)
		{
			mostrarUnProducto(listaProducto[i]);
		}
	}
}
void mostrarUnProducto(eProducto unProducto)
{
	printf("%d\t%4d\t%-20s%-4d\t%4.2f\n",unProducto.idProducto, unProducto.tipo, unProducto.descripcion, unProducto.nacionalidad, unProducto.precio);
}
int bajaProducto(eProducto listaProductos[], int tam)
{

	mostrarProductos(listaProductos, tam);
	printf("\n");

	int opcion;
	int flag;

	flag = 0;

	opcion = pedirEntero("Ingrese ID de producto a dar de baja: ");

	for(int i=0; i<tam; i++)
	{
		if(listaProductos[i].idProducto==opcion)
		{
			listaProductos[i].estado = 0;
			flag = 1;
			break;
		}

	}
	return flag;
}
int subMenu()
{
	int op;

	printf("1. Modificar tipo de producto.\n");
	printf("2. Modificar precio de producto.\n");
	printf("\n");
	printf("Ingrese opcion: ");
	scanf("%d", &op);
	printf("\n");

	return op;
}
int modificacionProducto(eProducto listaProductos[], int tam, int opcion)
{
	int flag;
	int idProd;

	mostrarProductos(listaProductos, tam);
	printf("\n");
	printf("Ingrese Id del producto a modificar: ");
	scanf("%d",&idProd);

	flag = 0;

	for(int i=0; i<tam; i++)
	{
		if(listaProductos[i].idProducto==idProd)
		{
			switch(opcion)
			{
				case 1:
					listaProductos[i].tipo = pedirEntero("Ingrese nuevo tipo del producto(1.IPHONE 2.MAC 3.IPAD 4.ACCESORIOS): ");
					flag = 1;
				break;
				case 2:
					listaProductos[i].precio = pedirFlotante("Ingrese nuevo precio del producto: ");
					flag = 1;
				break;
			}
		}
	}
	return flag;
}
int ordenarPorPrecio(eProducto listaProducto[], int tam)
{
	int flag;
	flag = 0;
	eProducto aux[tam];

	for(int i=0; i<tam-1; i++)
	{
		for(int j=i+1; j<tam; j++)
		{
			if(listaProducto[i].precio>listaProducto[j].precio)
			{
				aux[i] = listaProducto[i];
				listaProducto[i] = listaProducto[j];
				listaProducto[j] = aux[i];
				flag = 1;
			}
		}
	}
	return flag;
}
int ordenarPorDescripcion(eProducto listaProducto[], int tam)
{
	int flag;
	flag = 0;
	eProducto aux[tam];

	for(int i=0; i<tam-1; i++)
	{
		for(int j=i+1; j<tam; j++)
		{
			if(strcmp(listaProducto[i].descripcion, listaProducto[j].descripcion)>0)
			{
				aux[i] = listaProducto[i];
				listaProducto[i] = listaProducto[j];
				listaProducto[j] = aux[i];
				flag = 1;
			}
		}
	}
	return flag;
}
int productoMayorPrecio(eProducto listaProductos[], int tam, float* precioMayor)
{
	float maxPrecio;
	int flag;

	flag = 0;

	for(int i=0; i<tam; i++)
	{
		if(listaProductos[i].estado==OCUPADO)
		{
			if(flag==0 || maxPrecio<listaProductos[i].precio)
			{
				maxPrecio = listaProductos[i].precio;
				flag = 1;
			}
		}
	}
	*precioMayor = maxPrecio;
	return flag;
}
int mostrarProductoPorPrecio(eProducto listaProductos[], int tam, float precio)
{
	int flag;

	flag = 0;
	printf("ID \t Tipo \t Descripcion \t Nacionalidad \t Precio\n");
	for(int i=0; i<tam; i++)
	{
		if(listaProductos[i].estado==OCUPADO && listaProductos[i].precio==precio)
		{
			mostrarUnProducto(listaProductos[i]);
			flag = 1;
		}
	}
	return flag;
}
