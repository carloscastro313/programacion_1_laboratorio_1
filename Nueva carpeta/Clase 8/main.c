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
    int indice, seleccion, posicion;

    //inicializarEmpleados(unEmpleado, T);

    do
    {

        printf("\n1.Cargar empleado\n2.Mostrar empleados\n3.Buscar empleado\n4.Dar de baja\n5.salir\nElija una opcion:");
        fflush(stdin);
        scanf("%c",&opcion);

        system("cls");

        switch(opcion)
        {
            case '1':

                indice=buscarLibre(unEmpleado, T);
                if(indice!=-1)
                {
                    crearEmpleado(unEmpleado ,indice);

                }else
                {
                    printf("No hay espacio disponible...");

                }

                break;
            case '2':

                mostrarEmpleados(unEmpleado ,T);

                break;
            case '3':

                seleccion=pedirEntero("Ingrese legajo: ");
                posicion=buscarUno(datosEmpleado, tam, seleccion);
                mostrarEmpleado(unEmpleado ,posicion);

                break;
            case '4':
                seleccion=pedirEntero("Ingrese legajo: ");
                posicion=borrarUno(datosEmpleado, tam, seleccion);

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



