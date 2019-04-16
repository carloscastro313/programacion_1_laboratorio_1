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
        opcion=opciones("\n1.Alta\n2.Baja\n3.Buscar empleado\n4.Mostrar\n5.Modificar\n6.Salir\nElija una opcion:");


        switch(opcion)
        {
            case '1':
                crearEmpleado(unEmpleado ,T);

            break;
            case '2':
                bajaEmpleado(unEmpleado, T);

            break;
            case '3':
                mostrarEmpleado(unEmpleado, T);

            break;
            case '4':
                mostrarEmpleados(unEmpleado ,T);

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



