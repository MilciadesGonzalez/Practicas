#ifndef NEXO_H_
#define NEXO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pedidos.h"
#include "clientes.h"
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

/// @fn int CrearPedido(eClientes[], int, ePedidos[], int, int)
/// @brief Recibe lista de clientes y pedidos, tama�o de ambos y id automatico para el pedidoa cargar.
/// @param listaC
/// @param tamC
/// @param listaP
/// @param tamP
/// @param idPed
/// @return Retorna 1 si se ejecut� correctamente o 0 en caso contrario.
int CrearPedido(eClientes listaC[], int tamC, ePedidos listaP[], int tamP, int idPed);
/// @fn int validarArray(eClientes[], int, int)
/// @brief Recibe lista de clientes, tama�o y id de cliente a validar.
/// @param listaC
/// @param tamC
/// @param idCli
/// @return Retorna 1 si se ejecut� correctamente o 0 en caso contrario.
int validarArray(eClientes listaC[], int tamC, int idCli);
/// @fn int imprimirClientesConPedidos(eClientes[], int, ePedidos[], int)
/// @brief Recibe lista de clientes y pedidos, tama�o de ambos. Imprime lista de clientes con la cantidad de pedidos pendientes.
/// @param listaC
/// @param tamC
/// @param listaP
/// @param tamP
/// @return Retorna 1 si se ejecut� correctamente o 0 en caso contrario.
int imprimirClientesConPedidos(eClientes listaC[], int tamC, ePedidos listaP[], int tamP);
/// @fn void InicializarAuxPed(ePedidos[], int, eAuxPedido*)
/// @brief Recibe lista de pedidos, tama�o y lista auxiliar. Inicializa contador y acumulador en 0.
/// @param lista
/// @param tam
/// @param auxPed
void InicializarAuxPed(ePedidos lista[], int tam, eAuxPedido* auxPed);
/// @fn void recorrer(ePedidos[], int, eAuxPedido[])
/// @brief Recibe lista de pedidos, tama�o y auxiliar y la recorre.
/// @param lista
/// @param tam
/// @param aux
void recorrer(ePedidos lista[], int tam, eAuxPedido aux[]);
/// @fn void contar(ePedidos, int, eAuxPedido[])
/// @brief Recibe un pedido, tama�o de la lista de pedidos y auxiliar. Compara e incrementa contador.
/// @param unPedido
/// @param tam
/// @param aux
void contar(ePedidos unPedido, int tam, eAuxPedido aux[]);
/// @fn int imprimirListaPedisdosPendientes(eClientes[], int, ePedidos[], int)
/// @brief Recibe lista de clientes y pedidos, tama�o de ambos. Imprime lista de pedidos pendientes.
/// @param listaC
/// @param tamC
/// @param listaP
/// @param tamP
/// @return Retorna 1 si se ejecut� correctamente o 0 en caso contrario.
int imprimirListaPedisdosPendientes(eClientes listaC[], int tamC, ePedidos listaP[], int tamP);
/// @fn int imprimirPedidosProcesados(ePedidos[], int, eClientes[], int)
/// @brief Recibe lista de clientes y pedidos, tama�o de ambos. Imprime lista de pedidos procesados.
/// @param listaP
/// @param tamP
/// @param listaC
/// @param tamC
/// @return Retorna 1 si se ejecut� correctamente o 0 en caso contrario.
int imprimirPedidosProcesados(ePedidos listaP[], int tamP, eClientes listaC[], int tamC);
/// @fn int pedidosPorLocalidad(eClientes[], int, ePedidos[], int)
/// @brief Recibe lista de clientes y pedidos, tama�o de ambos. Recorre y muestra cantidad de pedidos por localidad.
/// @param listaC
/// @param tamC
/// @param listaP
/// @param tamP
/// @return Retorna 1 si se ejecut� correctamente o 0 en caso contrario.
int pedidosPorLocalidad(eClientes listaC[], int tamC, ePedidos listaP[], int tamP);
/// @fn void InicializarAuxLoc(ePedidos[], int, eAuxLocalidad*)
/// @brief Recibe lista auxiliar de localidades, lista de pedidos y tama�o. Recorre y inicializa contador y acumulador en 0.
/// @param lista
/// @param tamP
/// @param auxPed
void InicializarAuxLoc(ePedidos lista[], int tamP, eAuxLocalidad* auxPed);
/// @fn void contarLocalidad(eClientes[], int, eAuxLocalidad*, ePedidos[], int)
/// @brief Recibe lista de clientes, lista de pedidos y auxiliar, tama�o de ambas listas. Compara y cuenta en caso de ser iguales.
/// @param lista
/// @param tamC
/// @param aux
/// @param listaP
/// @param tamP
void contarLocalidad(eClientes lista[], int tamC, eAuxLocalidad* aux, ePedidos listaP[], int tamP);
/// @fn void pedirLocalidad(eAuxLocalidad[], int)
/// @brief Recibe auxiliar de localidades, tama�o y solicita ingresar una localidad.
/// @param aux
/// @param tam
void pedirLocalidad(eAuxLocalidad aux[], int tam);
/// @fn void recorrerPed(ePedidos[], int, eAuxPedido[])
/// @brief Recibe lista de pedidos, tama�o y auxuliar. Recorre y cuenta auxiliar.
/// @param lista
/// @param tam
/// @param aux
void recorrerPed(ePedidos lista[], int tam, eAuxPedido aux[]);
/// @fn void contarCli(ePedidos, int, eAuxPedido[])
/// @brief Recibe un elemento de lista de pedidos, tama�o y auxiliar. Cuenta y acumula.
/// @param unPedido
/// @param tam
/// @param aux
void contarCli(ePedidos unPedido, int tam, eAuxPedido aux[]);
/// @fn int promedios(eClientes[], int, ePedidos[], int)
/// @brief Recibe lista de clientes y pedidos, tama�o de ambos. Muestra datos de la lista de clientes con promedios de material reciclado PP.
/// @param listaC
/// @param tamC
/// @param listaP
/// @param tamP
/// @return Retorna 1 si se ejecut� correctamente o 0 en caso contrario.
int promedios(eClientes listaC[], int tamC, ePedidos listaP[], int tamP);


#endif /* NEXO_H_ */
