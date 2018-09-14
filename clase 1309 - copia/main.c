#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "input.h"
#define T 3



int main()
{
    char nombreCompleto[T][50];
    char sexo[T];
    char opcion;
    int legajo[T];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];

    inicializarvector(nombreCompleto, sexo, legajo, nota1, nota2, nota3, promedio);
    do{
        printf("1.Datos ingresados\n2.Informe de datos\n3.Informe detallado de promedios\n4.informe detallado de alumnos\n5.salir\nSeleccion: ");
        fflush(stdin);
        scanf("%c",&opcion);
        system("cls");

        switch(opcion)
        {
            case '1':
                if(T<4)
                {
                    seleccionDatos(nombreCompleto, sexo, legajo, nota1, nota2, nota3, promedio);
                }else
                {
                    printf("ya se llego al limite de datos");
                }

                break;

            case '2':
                cargarDatos(nombreCompleto, sexo, legajo, nota1, nota2, nota3, promedio);

                break;
            case '3':


            case '5':
                printf("Que tenga un buen dia...");
                system("pause");

                break;

            default:
                printf("ERROR\n");
                system("pause");

                break;
        }
        system("cls");

    }while(opcion!='5');


    return 0;
}


