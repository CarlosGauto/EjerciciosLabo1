/*
 ============================================================================
 Name        : Eje.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int swap(int* num1, int* num2);

int main(void) {
	int a = 5;
	int b = 10;

	printf("a = %d ----- b = %d\n", a, b);

	swap(&a,&b);
	printf("a = %d ----- b = %d\n", a, b);


	return EXIT_SUCCESS;
}
int swap(int* num1, int* num2){
	int aux;
	int retorno;

	aux = *num1;
	*num1 = *num2;
	*num2 = aux;

	return retorno;
}
