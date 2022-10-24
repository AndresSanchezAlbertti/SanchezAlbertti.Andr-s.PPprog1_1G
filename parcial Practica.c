/*
 ============================================================================
 Name        : parcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
}eVacuna;
int aplicarDescuento(int precio);
int reemplazarCaracteres(char array[], char carUno, char carDos);
int ordenarEstructuraTipoEfectividad(eVacuna x, tam);
int main(void) {
	int precio = 100;
	char nombre[10] = "Banana";
	aplicarDescuento(precio);
	printf("%d", precio);
	reemplazarCaracteres(nombre, 'a', 'e');

	return EXIT_SUCCESS;
}


int aplicarDescuento(int precio){
	int precioTotal;

	precioTotal = precio - (precio * 5)/100;
	return precioTotal;
}

int reemplazarCaracteres(char cadena[], char carUno, char carDos){
	int cantidad = 0;
	if(cadena != NULL ){
		for(int i= 0; i < sizeof(cadena); i++ ){
			if(strcmp(cadena[i], carUno)>0){
				cadena[i] = carDos;
				cantidad++;
			}
		}
	}
	return cantidad;
}
int ordenarEstructuraTipoEfectividad(eVacuna x,tam){
	int todoOk = 0;

	for(int i = 0; i<tam; i++){
		for(int j = i+1; j<tam; j++){
			if(x[i].tipo > x.tipo[j])||
					(x[i].tipo == x[j].tipo)&& (x[i].tipo < x[j].tipo){


			}
		}
	}
}
