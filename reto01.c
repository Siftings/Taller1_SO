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
	
    char *p; // Se declara un puntero a char
    char *q = NULL; // Se declara otro puntero a char y se inicializa en NULL

    printf("Adress of p = %s\n", p); // Se muestra la direccion de memoria actual de p

    strcpy(p, "Hello im the best in Operating Systems!!!"); // Se utiliza strcpy para copiar la cadena en p  (variable, valor)
    printf("%s\n", p); // Se imprime en consola el contenido de p con el especificador de formato %s para cadena de caracteres
    printf("About to copy **Goodbye** to q\n"); // Se escribe el siguiente paso a seguir con el puntero q
    strcpy(q, "Goodbye"); // Se copia "Goodbye" en q
    printf("string copied\n"); // Se imprime en consola que la cadena fue copiada
    printf("%s\n", q); // Se imprime el valor de q ("Goodbye")

    return 0;
}
