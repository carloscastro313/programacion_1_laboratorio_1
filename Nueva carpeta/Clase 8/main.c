   /* a. Todos los empleados con la descripcion de su sector.
    b. Por cada sector, todos los empleados que en el trabajan.
    c. El total de sueldos por sector.
    d. El sector con mas empleados.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Empleado.h"
#define T 100

char opciones(char[]);

int main()
{
    eEmpleado unEmpleado[T];

    char opcion;

    inicializarEmpleados(unEmpleado, T);

    eSector sectores[3] = {{1,"Contabilidad",100},{2,"Sistemas",200},{3,"RRHH", 150}};

    do
    {
        opcion=opciones("\n1.Alta\n2.Baja\n3.Buscar empleado\n4.Mostrar\n5.Mostrar por sector\n6.Informes\n7.Informes por sector\n8.Modificar\n9.Salir\nElija una opcion:");


        switch(opcion)
        {
            case '1':
                crearEmpleado(unEmpleado, sectores, T);

            break;
            case '2':
                bajaEmpleado(unEmpleado, T);

            break;
            case '3':
                mostrarEmpleado(unEmpleado, sectores, T);

            break;
            case '4':
                mostrarEmpleados(unEmpleado, sectores, T);

            break;
            case '5':
                mostrarSectores(unEmpleado, sectores, T);

            break;
            case '6':
                informeEmpleado(unEmpleado, sectores, T);

            break;
            case '7':
                informeSectores(unEmpleado, sectores, T);

            break;
            case '8':
                buscarModificarSueldo(unEmpleado, sectores, T);

            break;
            case '9':
                printf("Que tenga un buen dia!!!\n");
                system("pause");

            break;
            default:
                printf("no ingreso una opcion valida\n");
                system("pause");

            break;
        }
        system("cls");

    }while(opcion!='9');


    return 0;
}



