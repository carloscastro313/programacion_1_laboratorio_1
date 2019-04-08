#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"

#define t 10

int main()
{
    int numero[t] ,maximo ,minimo ,valor ,indice;

    cargarVector(numero, t);
    ordenaVector(numero ,t);
    maximo=buscarMaximo(numero, t);
    minimo=buscarMinimo(numero ,t);

    printf("Buscar numero en array:");
    scanf("%d",&valor);
    indice=valorIngresado(numero, t, valor);

    printf("El maximo es %d\n",maximo);
    printf("El minimo es %d\n",minimo);

    if(indice!=-1)
    {
        printf("El numero %d esta en el array %d\n",valor ,indice);

    }else
    {
        printf("No se a encontrado el valor buscado\n");

    }

    cargarPantalla(numero, t);

    return 0;
}

