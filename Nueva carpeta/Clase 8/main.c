#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Empleado.h"
#define T 2

char opciones(char[]);

int main()
{
    eEmpleado unEmpleado[T];
    char opcion;

    inicializarEmpleados(unEmpleado, T);

    do
    {
        opcion=opciones("\n1.Alta\n2.Mostrar\n3.Buscar empleado\n4.Baja\n5.Modificar\n6.Salir\nElija una opcion:");


        switch(opcion)
        {
            case '1':
                crearEmpleado(unEmpleado ,T);

            break;
            case '2':
                mostrarEmpleados(unEmpleado ,T);

            break;
            case '3':
                mostrarEmpleado(unEmpleado, T);

            break;
            case '4':
               // seleccion=pedirEntero("Ingrese legajo: ");
               // posicion=borrarUno(unEmpleado, T, seleccion);

            break;
            case '5':
                buscarModificarSueldo(unEmpleado, T);

            break;
            case '6':
                printf("Que tenga un buen dia!!!\n");
                system("pause");

            break;
            default:
                printf("no ingreso una opcion valida\n");
                system("pause");

            break;
        }
        system("cls");

    }while(opcion!='6');


    return 0;
}


char opciones(char mensaje[])
{
    char opcionSelecionada;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&opcionSelecionada);
    system("cls");

    return opcionSelecionada;
}
