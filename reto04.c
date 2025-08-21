/*********************************************************************
*               Pontificia Universidad Javeriana
* Autor: Juan David Daza Caro
* Materia: Sistemas Operativos
* Docente: John Corredor
* Objetivo: Diseño de plantilla para los programas en C
*
* Descripcion: Modelo de plantila

*********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, i, *ptr, sum = 0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	ptr = (int*) calloc(n, sizeof(int));
	if(ptr == NULL){
		printf("Error! memory not allocated.");
		exit (0);
	}
	printf("Enter elements: ");
	for (i = 0; i < n; i++){
		scanf("%d", ptr + i);
		sum += *(ptr +i);
	}
	printf("Sum = %d", sum);
	free(ptr);

	return 0;


}
