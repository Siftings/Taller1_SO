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
	int *ptr, i, n1, n2; // crea un puntero a int, y 3 variables int
	printf("Enter size: "); // pide al usuario ingresar el tamaño
	scanf("%d", &n1); // lee la entrada del usuario
	ptr = (int*) malloc(n1 * sizeof(int)); // asigna memoria para n1 elementos de tipo int
	printf("Addresses of previously allocated memory:"); // imprime las direcciones de la memoria previamente asignada
	for (i = 0; i <n1; i++)
		printf("\n\n p = %p\n", ptr+i); // imprime la dirección de cada elemento
	printf("\n Enter the new size: "); // pide ingresar un nuevo tamaño 
	scanf("%d", &n2); // almacena el numero en n2
	ptr = realloc(ptr, n2 * sizeof(int));  // realoca la memoria, puede aumentar el tamaño y reducirlo y perder la informacion que no entre en ese tamaño
	printf("Addresses of newly allocated memory: "); // muestra las direcciones de la nueva memoria asignada)
	for (i = 0; i < n2; i++)
		printf("\n\n p = %p\n", ptr+i);

	free(ptr); // libera la memoria asignada

	return 0; // termina el programa
}

