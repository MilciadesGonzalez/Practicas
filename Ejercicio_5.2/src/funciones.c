#include "funciones.h"

void Inicializar(int num[], int tam){
	for(int i=0; i<tam; i++){
		num[i] = 0;
	}
}
void Cargar(int num[], int tam, int min, int max){
	for(int i=0; i<tam; i++){
		printf("Ingrese numero: ");
		scanf("%d", &num[i]);

		while(num[i]<min || num[i]>max){
			printf("Rango invalido. Reingrese numero: ");
			scanf("%d", &num[i]);
		}
	}
}
void contarPosNeg(int num[], int tam, int* contPos, int* contNeg){
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
int mayorImpar(int num[], int tam, int* impar){
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
int sumaPares(int num[], int tam, int* suma){
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
void MostrarTodo(int num[], int tam){
	printf("Los numeros ingresados son:\n");
	for(int i=0; i<tam; i++){
		printf("%d\n", num[i]);
	}
}
void MostrarPares(int num[], int tam){
	printf("Los numeros pares ingresados son:\n");
	for(int i=0; i<tam; i++){
		if(num[i]%2==0){
			printf("%d\n", num[i]);
		}
	}
}
void MostrarPosicionesImpares(int num[], int tam){
	printf("Los numeros en los indices impares son:\n");
	for(int i=0; i<tam; i++){
		if(i%2!=0){
			printf("%d\n", num[i]);
		}
	}
}
void NumerosRepetidos(int num[], int tam){
	printf("Los numeros repetidos son:\n");
	for(int i=0; i<tam-1; i++){
		for(int j=i+1; j<tam; j++){
			if(num[i]==num[j]){
				printf("%d\n", num[i]);
			}
		}
	}
}
void ordenarCreciente(int num[], int tam){
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
		printf("%d\n", num[i]);
	}
}
