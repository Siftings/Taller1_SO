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
#include <string.h>
#include <stdlib.h>

int main(){
	int *ptr;
	ptr = malloc(15*sizeof(*ptr)); // Un puntero de int ocupa 4 bits, * 15 =  15 bits de espacio allocated
	
	if (ptr != NULL){
		*(ptr + 5) = 480;
		printf("%d\n",*(ptr+5));
	}


	return 0;



}

