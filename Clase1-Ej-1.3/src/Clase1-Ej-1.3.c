/*
 ============================================================================
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

		int num1;
	    int num2;
	    int num3;
	    int medio;

	    printf("\n Ingrese un numero: ");
	    scanf("%d", &num1);

	    printf("\n Ingrese otro numero: ");
	    scanf("%d", &num2);

	    printf("\n Ingrese otro numero: ");
	    scanf("%d", &num3);

	    if(num1 == num2 || num1 == num3 || num2 == num3){
	        printf("No existe numero del medio.");
	    }else if(num1 > num2 && num1 < num3){
	        medio = num1;
	    }else if(num1 < num2 && num1 > num3){
	        medio = num1;
	    }else if(num2 > num1 && num2 < num3){
	        medio = num2;
	    }else if(num2 < num1 && num2 > num3){
	        medio = num2;
	    }else{
	        medio = num3;
	    }
	    printf("El numero del medio es: %d", medio);

	return EXIT_SUCCESS;
}
