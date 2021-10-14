/*
 * Biblioteca.h
 *
 *  Created on: 24 sep. 2021
 *      Author: Milciades Gonzalez
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int estado;				//ok
	int idProducto;			//ok
	char descripcion[50];	//ok
	int nacionalidad;		//ok
	int tipo;				//ok
	float precio;
}eProducto;

typedef struct{
	int idTipoProducto;
	char descripcionTipo[50];
}eTipoProducto;

typedef struct{
	int idNacProducto;
	char descripcionNac[50];
}eNacionalidadProducto;


int MenuPrincipal();
void Inicializar(eProducto listaProductos[], int tam);
int pedirEntero(char msje[]);
int CargarProducto(eProducto[],int,eTipoProducto[],int,eNacionalidadProducto[],int);
float pedirFlotante(char msje[]);
void getString(char mensaje[],char cadena[],int tam);
void mostrarUnProducto(eProducto unProducto);
void mostrarProductos(eProducto listaProducto[], int tam);
int bajaProducto(eProducto listaProductos[], int tam);
int modificacionProducto(eProducto listaProductos[], int tam, int opcion);
int ordenarPorPrecio(eProducto listaProducto[], int tam);
int ordenarPorDescripcion(eProducto listaProducto[], int tam);
int subMenu();
int productoMayorPrecio(eProducto listaProductos[], int tam, float* precioMayor);
int mostrarProductoPorPrecio(eProducto listaProductos[], int tam, float precio);
int validarPorTipo(int tipo, eTipoProducto listaTipos[], int tam);
int validarEntero(char entero[]);
int mostrarProductoPorTipo(eProducto listaProductos[], int tamListaProductos, eTipoProducto listaTipos[], int tamListaTipos);
void mostrarTipos(eTipoProducto lista[], int tam);
void mostrarNacionalidades(eNacionalidadProducto lista[], int tam);
int validarPorNac(int tipo, eNacionalidadProducto lista[], int tam);


#endif /* BIBLIOTECA_H_ */
