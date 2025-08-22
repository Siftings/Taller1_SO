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
	int n, i, *ptr, sum = 0; // crea 2 variables int, un puntero a int y otra variable incializada en 0
	printf("Enter number of elements: "); // pide al usuario ingresar el numero de elementos
	scanf("%d", &n); // se toma y se guarda el valor por medio del metodo scanf
	ptr = (int*) calloc(n, sizeof(int)); // se asigna memoria para n elementos de tipo int
	if(ptr == NULL){ // si no se pudo asignar memoria
		printf("Error! memory not allocated."); // se lanza un mensaje de error
		exit (0); // sale del programa, pero con exit (0) no indicando un error del programa sino del usuario
	}
	printf("Enter elements: "); // pide al usuario ingresar los n elementos
	for (i = 0; i < n; i++){
		scanf("%d", ptr + i); // se guarda el valor en la memoria que se asigno, aumentando ptr en enteros "salta" a los siguientes bloques de memoria de 8 bytes
		sum += *(ptr +i); // se acumula la suma de los elementos en la variable sum 
	}
	printf("Sum = %d", sum); // se imprime la suma total
	free(ptr); // se libera la memoria asignada

	return 0; // termina el programa


}
