/*
 * MiBiblioteca.c
 *
 *  Created on: 7 sep. 2021
 *      Author: Milciades Gonzalez
 */
#include "MiBiblioteca.h"

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
char pedirCaracter(char msje[])
{
	char texto;

	printf("%s", msje);
	scanf("%c", &texto);

	return texto;
}
void pedirString(char mensaje[],char cadena[],int tam)
{
    char auxiliar[tam];
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", auxiliar);
    strcpy(cadena, auxiliar);

}
int sumaEntero(int numeroUno, int numeroDos){
	int resultado;

	resultado = numeroUno + numeroDos;

	return resultado;
}
int restaEntero(int numeroUno, int numeroDos){
	int resultado;

	resultado = numeroUno - numeroDos;

	return resultado;
}
int divisionEntero(int numeroUno, int numeroDos){
	int resultado;

	resultado = numeroUno / numeroDos;

	return resultado;
}
int multiplicacionEntero(int numeroUno, int numeroDos){
	int resultado;

	resultado = numeroUno * numeroDos;

	return resultado;
}
int factorialEntero(int numero){
	int resultado;

	resultado = 1;

	for(int i=1; i<=numero; i++)
	{
		resultado = resultado * i;
	}

	return resultado;
}
void mostrarEntero(char mensaje[], int numero){
	printf("%s %d\n",mensaje, numero);
}
void CargarArrayEnteroSecuencial(int numeros[], int tam, char mensaje){
	for(int i=0; i<tam; i++){
	    printf(mensaje);
	    scanf("%d", &numeros[i]);
	}
}
void InicializarArrayEnCero(int numeros[], int tam){
	for(int i=0; i<tam; i++){
		numeros[i] = 0;
	}
}
void MostrarTodosElementosArrayEnteros(int num[], int tam){
	for(int i=0; i<tam; i++){
		printf("%d\n", num[i]);
	}
}
void validarIngresoArrayEntero(int num[], int tam, int min, int max){
	for(int i=0; i<tam; i++){
		while(num[i]<min || num[i]>max){
			printf("Rango invalido. Reingrese numero: ");
			scanf("%d", &num[i]);
		}
	}
}
void ordenarArrayCreciente(int num[], int tam){
	int aux;
	printf("Orden creciente:\n");
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(num[i]>num[j]){
				aux = num[i];
				num[j] = num[i];
				num[j] = aux;
			}
		}
	}
}
void MostrarNumerosParesArrayEntero(int num[], int tam){
	printf("Los numeros pares ingresados son:\n");
	for(int i=0; i<tam; i++){
		if(num[i]%2==0){
			printf("%d\n", num[i]);
		}
	}
}
void MostrarPosicionesImparesArrayEntero(int num[], int tam){
	printf("Los numeros en los indices impares son:\n");
	for(int i=0; i<tam; i++){
		if(i%2!=0){
			printf("%d\n", num[i]);
		}
	}
}
void NumerosRepetidosEnArray(int num[], int tam){
	printf("Los numeros repetidos son:\n");
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(num[i]==num[j]){
				printf("%d\n", num[i]);
			}
		}
	}
}
int sumaParesArrayEntero(int num[], int tam, int* suma){
	int sumaPar = 0;
	int flag;
	for(int i=0; i<tam; i++){
		if(num[i]%2==0){
			sumaPar += num[i];
			flag = 1;
		}else{
			flag = 0;
		}
	}
	*suma = sumaPar;
	return flag;
}
int mayorImparArrayEntero(int num[], int tam, int* impar){
	int flag = 0;
	int nImpar;
	for(int i=0; i<tam; i++){
		if(num[i]%2!=0){
			if(flag==0 || nImpar<num[i]){
				nImpar = num[i];
				flag = 1;
			}
		}
	}
	*impar = nImpar;
	return flag;
}
void contarPosNegArrayEntero(int num[], int tam, int* contPos, int* contNeg){
	int positivos = 0;
	int negativos = 0;
	for(int i=0; i<tam; i++){
		if(num[i]>0){
			positivos++;
		}else if(num[i]<0){
			negativos++;
		}
	}
	*contPos = positivos;
	*contNeg = negativos;
}
