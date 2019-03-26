#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"

int pedirEntero(char texto[])
{
    int numero;

    printf("%s",texto);
    scanf("%d",&numero);

    system("cls");

    return numero;
}
