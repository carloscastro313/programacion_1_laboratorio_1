#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"
#define T 1000

int main()
{
    ePelicula arrayPeliculas[T];
    eFecha arrayFecha[T];
    eActores arrayActores[10] = {{1,"Scarlett Johansson","Argentina"},{2,"Robert  Downey Jr","EEUU"},{3,"Mark Ruffalo","Canada"},{4,"Chris Evans","EEUU"},{5,"Chris Hemsworth","Argentina"},{6,"Samuel Jackson","EEUU"},{7,"Gwyneth Paltrow","Canada"},{8,"Paul Rudd","Argentina"},{9,"Bradley Cooper","EEUU"},{10,"Josh Brolin","Canada"}};;
    eGenero arrayGeneros[5] = {{1,"Accion"},{2,"Comedia"},{3,"Drama"},{4,"Romance"},{5,"Terror"}};;
    int flag=1;
    char opcion;

    initEmployees(arrayPeliculas, T);
    hardcodearDatosEmpleados(arrayPeliculas,    arrayFecha, T);
    do{
        opcion=opciones("1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\nSeleccion:");


        switch(opcion)
        {
            case'1':
                flag=crearEmpleado(arrayPeliculas, arrayFecha, T, flag);

            break;
            case'2':
                modificarEmpleado(arrayPeliculas, arrayFecha, T, flag);

            break;
            case'3':
                flag=bajaEmpleado(arrayPeliculas, T, flag);

            break;
            case'4':
                mostrarEmpleados(arrayPeliculas, arrayFecha, arrayActores, arrayGeneros, T, flag);

            break;
            case'5':
                printf("Que tenga un buen dia...\n");
                system("pause");

            break;
            default:
                printf("Opcion Invalida...\n");
                system("pause");

            break;
        }

        system("cls");

    }while(opcion!='5');

    return 0;
}
