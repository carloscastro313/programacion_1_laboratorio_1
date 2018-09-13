#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "FUNCIONE DE NOMBRES.h"



void ingreseNombre(char buffer[],char nombre[], int tar)
{
    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>21)
    {
        printf("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }
    strncpy(nombre, buffer, 21);
}
void ingreseApellido(char buffer[],char apellido[], int tar)
{
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
}
void mostrarNombre( char nombreCompleto[], char apellido, char nombre, int tar)
{
    int i;

    strncpy(nombreCompleto*, apellido,50);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto*, nombre);
    strlwr(nombreCompleto);//minusculas

    nombreCompleto[0]=toupper(nombreCompleto[0]);

    for(i=1;i<strlen(nombreCompleto);i++)
    {


        if(isspace(nombreCompleto[i]))
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
        }


    }
    puts(nombreCompleto);
}
