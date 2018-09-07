#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

void cargarvector(int vector[], int tam)
{
    char seguir;
    int posicion;
    do
    {
        printf("Ingrese un posicion");
        scanf("%d",&posicion);

        printf("\nIngrese un valor");
        scanf("%d",&vector[posicion-1]);

        printf("\n¿Desea continuar?");
        fflush(stdin);
        scanf("%c",&seguir);
    }while(seguir=='s');
}

void mostrarvector(int vector[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(vector[i]!=-1)
        {
           printf("%d\n",vector[i]);
        }
    }
}

void inicializarvector(int vector[], int tan)
{
    int i;
    for(i=0; i<tan; i++)
    {
        vector[i]=-1;
    }
}
int sumarvalores(int vector[], int tan)
{
    int acumulador=0;
    int i;

    for(i=0; i<tan; i++)
    {
        if(vector[i]!=-1)
        {
            acumulador=acumulador+vector[i];
        }
    }

    return acumulador;
}
