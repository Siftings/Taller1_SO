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
	char *q = NULL;
	printf("Requesting space for **Goodbye** \n");
	q = (char*)malloc(strlen("Goodbye")+ 1);

	if(!q){
		perror("Failed to allocate space because");
		exit(1);
	}

	printf("About to copy **Goodbye** to q at address %s\n", q);
	strcpy(q, "Goodbye");
	printf("String copied\n");
	printf("%s\n", q);
	return 0;

}
