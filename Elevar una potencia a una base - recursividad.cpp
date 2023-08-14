#include <iostream>
#include <stdio.h>

int potencia(int base, int exponente);

int potencia(int base, int exponente){
	if(exponente == 0){
		return 1;
	} 
	else{
		return base * potencia(base, exponente - 1);
	}
}

int main(){
	int base, exponente;
	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &exponente);

	int resultado = potencia(base, exponente);
	printf("El resultado es: %d\n", resultado);

	return 0;
}

