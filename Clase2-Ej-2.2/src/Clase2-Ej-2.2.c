/*
 ============================================================================
Ejercicio 2-2:

Ingresar 10 números enteros, distintos de cero. Mostrar:
Cantidad de pares e impares.
El menor número ingresado.
De los pares el mayor número ingresado.
Suma de los positivos.
Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define cantidad 10

int main(void) {
	setbuf(stdout,NULL);

	    int numero;
	    int contPares;
	    int contImpares;
	    int menor;
	    int mayorPar;
	    int acumPositivos;
	    int acumNegativos;
	    int prodNegativos;
	    int contNegativos;

	    contPares = 0;
	    contImpares = 0;
	    acumPositivos = 0;
	    acumNegativos = 0;
	    contNegativos = 0;
	    menor = 0;
	    mayorPar = 0;

	    for(int i = 0; i<cantidad; i++){
	        printf("\n Ingrese un numero: ");
	        scanf("%d", &numero);

	        while(numero==0){
	            printf("\n Numero incorrecto. Reingrese un numero: ");
	            scanf("%d", &numero);
	        }
	        if(numero%2 == 0){
	            contPares++;
	            if(mayorPar < numero){
	                mayorPar = numero;
	            }
	        }else{
	            contImpares++;
	        }
	        if(numero < menor){
	            menor = numero;
	        }
	        if(numero > 0){
	            acumPositivos += numero;
	        }else{
	            acumNegativos += numero;
	            contNegativos++;
	        }
	    }
	    prodNegativos = acumNegativos*contNegativos;

	    printf("\n Cantidad de numeros pares: %d", contPares);
	    printf("\n Cantidad de numeros impares: %d", contImpares);
	    printf("\n Menor numero ingresado: %d", menor);
	    printf("\n Mayor numero par ingresado: %d", mayorPar);
	    printf("\n La suma de los numeros positivos es: %d", acumPositivos);
	    printf("\n El producto de los numeros negativos es: %d", prodNegativos);

	return EXIT_SUCCESS;
}
