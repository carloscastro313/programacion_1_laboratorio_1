#include <stdio.h>
#include <stdlib.h>
#include "Array.h"
#define T 5

int main()
{
    int miVector[T];
    int suma;
    char opcion;

    inicializarvector(miVector, T);

    do
    {
    printf("1.cargar\n2.sumar\n3.mostrar\n4.salir\nIngrese opcion: ");
    scanf("%c",&opcion);
    system("cls");
    switch(opcion)
    {
        case '1':
            cargarvector(miVector, T);
            break;
        case '2':
            suma=sumarvalores(miVector, T);
            break;
        case '3':
            mostrarvector(miVector, T);
            printf("\nLa suma es %d",suma);
            system("pause");
            break;
    }
    system("cls");

    }while(opcion!='4');


    return 0;
}

