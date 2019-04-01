#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"

void cargarVector(int numero[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("Ingrese numero:");
        scanf("%d",&numero[i]);
        fflush(stdin);

    }
}

void cargarPantalla(int numeroEntero[] ,int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n",numeroEntero[i]);

    }
}

int buscarMaximo(int numeroEntero[] ,int tam)
{
    int maximo, i, flag;

    flag=0;

    for(i=0;i<tam;i++)
    {
        if(flag==0||numeroEntero[i]>maximo)
        {
            maximo=numeroEntero[i];
            flag++;

        }

    }

    return maximo;
}

int buscarMinimo(int numeroEntero[] ,int tam)
{
    int minimo, i, flag;

    flag=0;

    for(i=0;i<tam;i++)
    {
        if(flag==0||numeroEntero[i]<minimo)
        {
            minimo=numeroEntero[i];
            flag++;

        }

    }

    return minimo;
}

int valorIngresado(int numeroEntero[], int tam, int numeroBuscado)
{
    int indiceVector, i;

    indiceVector=-1;

    for(i=0;i<tam;i++)
    {
        if(numeroEntero[i]==numeroBuscado)
        {
            indiceVector=i+1;

        }
    }

    return indiceVector;
}
