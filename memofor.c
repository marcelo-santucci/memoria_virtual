/*
Programa: memofor.c 
Curso: Sistemas Operativos URL
Objetivo: Desplegar tanto el valor como la dirección de memoria de una variable
          durante la iteración de un ciclo.
*/

#include <stdio.h>

//Variable entera
int varIntx = -1;

int main() {
    for (int i=0; i<4; i++) {
        varIntx=i;
        //Desplegar tanto el valor de la variable como su dirección en memoria
        printf("x tiene un valor de %d y su dirección en memoria es @ %p\n",varIntx,&varIntx);
    }

    return 0;
}