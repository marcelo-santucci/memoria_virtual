/*
Programa: memo.c 
Curso: Sistemas Operativos URL
Objetivo: Desplegar tanto el valor como la dirección de memoria de una variable
*/

#include <stdio.h>

//Variable entera
int varIntx = 7;    //Tiene un tamaño de 4 bytes

int main() {
    //Desplegar tanto el valor de la variable como su dirección en memoria
    printf("x tiene un valor de %d y su dirección en memoria es @ %p\n",varIntx,&varIntx);

    return 0;
}