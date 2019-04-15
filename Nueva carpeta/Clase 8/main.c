#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Empleado.h"
#define T 2


int main()
{
    eEmpleado unEmpleado[T];
    char opcion;

    flagA=0;
    flagB=0;
    flagCalculo=0;
    numeroA=0;
    numeroB=0;

    inicializarEmpleados(unEmpleado, T);

    do
    {

        printf("\n1.Cargar empleado\n2.Mostrar empleados\n3.Buscar empleado\n4.Dar de baja\n5.salir\nElija una opcion:");
        fflush(stdin);
        scanf("%c",&opcion);

        system("cls");

        switch(opcion)
        {
            case '1':
                crearEmpleado(unEmpleado ,T);
                break;
            case '2':
                 mostrarEmpleado(unEmpleado ,T);
                break;
            case '3':
                seleccionarEmpleado(unEmpleado ,T);
                break;
            case '4':

                break;
            case '5':
                printf("Que tenga un buen dia!!!\n");
                system("pause");

                break;
            default:
                printf("no ingreso una opcion valida\n");
                system("pause");

                break;
        }
        system("cls");

    }while(opcion!='5');


    return 0;
}



