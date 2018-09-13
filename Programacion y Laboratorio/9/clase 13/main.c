#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "FUNCIONE DE NOMBRES.h"
#define T 21

int main()
{/*
    char cadena1[10];
    char cadena2[50]={"hola a todos, como estan?"};

    strncpy(cadena1,cadena2,9);
    puts(cadena1);
    printf("%s",cadena1);
    return 0;*/

    char nombre[T];
    char apellido[T];
    char nombreCompleto[41];
    char buffer[1000];
    int i;

   /* printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>21)
    {
        printf("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strncpy(nombre, buffer, 21);

    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>21)
    {
        printf("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }
    strncpy(apellido, buffer, 21);

    strncpy(nombreCompleto, apellido,50);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);
    strlwr(nombreCompleto);//minusculas

    nombreCompleto[0]=toupper(nombreCompleto[0]);

    for(i=1;i<strlen(nombreCompleto);i++)
    {


        if(isspace(nombreCompleto[i]))
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
        }


    }
    puts(nombreCompleto);*/

    ingreseNombre(buffer , nombre, T);
    ingreseApellido(buffer , apellido, T);

    mostrarNombre( nombreCompleto,apellido, nombre, T);

    return 0;
}
