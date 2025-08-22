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
	int *ptr; // crea un puntero a int, sin inicializar
	ptr = malloc(15*sizeof(*ptr)); // Un puntero de int ocupa 64 bits, * 15 =  960 bits de espacio allocated

	if (ptr != NULL){ // si se pudo asignar memoria
		*(ptr + 5) = 480; // se asigna el valor 480 a la posicion 5
		printf("%d\n",*(ptr+5)); // se imprime el valor de la posicion 5
	}


	return 0; // termina el programa

}

