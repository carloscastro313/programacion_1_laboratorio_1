#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"

#define t 5

int main()
{
    int numero[t] ,maximo ,minimo ,valor ,indice;

    cargarVector(numero, t);
    maximo=buscarMaximo(numero, t);
    minimo=buscarMinimo(numero ,t);

    printf("Buscar numero en array:");
    scanf("%d",&valor);
    indice=valorIngresado(numero, t, valor);

    printf("El maximo es %d\n",maximo);
    printf("El minimo es %d\n",minimo);
    printf("El numero %d esta en el array %d\n",valor ,indice);

    cargarPantalla(numero, t);

    return 0;
}

