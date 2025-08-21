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
    char *q = NULL; // Se declara un puntero a char y se inicializa en NULL

    printf("Adress of p = %s\n", p); // Se imprime la dirección de p

    strcpy(p, "Hello im the best in Operating Systems!!!");
    printf("%s\n", p);
    printf("About to copy **Goodbye** to q\n");
    strcpy(q, "Goodbye");
    printf("string copied\n");
    printf("%s\n", q);

    return 0;
}
