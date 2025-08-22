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
	char *q = NULL; // se declara un puntero a char con NULL 
	printf("Requesting space for **Goodbye** \n"); // Se explica que se esta haciendo a continuacion
	q = (char*)malloc(strlen("Goodbye")+ 1); // se solicita espacio en memoria con la cantidad de bits que ocupa la cadena "Goodbye" mas 1 bit del caracter nulo (para ser un string)

	if(!q){ // si no se pudo asignar memoria se sale del programa y se imprime un mensaje de error
		perror("Failed to allocate space because"); // mensaje de error
		exit(1); // exit 1 indicando al sistema operativo error 
	}

	printf("About to copy **Goodbye** to q at address %s\n", q); // indica la accion a seguir
	strcpy(q, "Goodbye"); // Copia goodbye en q 
	printf("String copied\n"); // mensaje de confirmacion
	printf("%s\n", q); // muestra el contenido de q = "Goodbye"
	
	
	return 0; // termina el programa
}
