#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 21

int main()
{
    char nombre[T];
    char apellido[T];

    printf("Ingrese nombre: ");
    gets(nombre);

    printf("Ingrese apellido: ");
    gets(apellido);

    printf("%s , %s/",apellido,nombre);

    system("pause");

    return 0;

}
