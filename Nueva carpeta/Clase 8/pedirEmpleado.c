#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pedirEmpleado.h"

/*void seleccionarEmpleado(eEmpleado datosEmpleado[], int tam)
{
    int seleccion, posicion;

    seleccion=pedirEntero("Ingrese legajo: ");
    posicion=buscarLegajo(datosEmpleado, tam, seleccion);


    if(posicion!=-1)
    {
        printf("%d--%s--%c--%.2f\n", datosEmpleado[posicion].legajo ,datosEmpleado[posicion].nombre ,datosEmpleado[posicion].sexo ,datosEmpleado[posicion].sueldoNeto);

    }else
    {
        printf("No existe empleado");
    }

}

int pedirEntero(char texto[])
{
    int numero;

    printf("%s",texto);
    scanf("%d",&numero);

    system("cls");

    return numero;
}
int buscarLegajo(eEmpleado datoBuscado[], int tam, int legajo)
{
    int flag, i;

    flag=0;

    for(i=0;i<tam;i++)
    {
        if(legajo==datoBuscado[i].legajo)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        i=-1;
    }

    return i;

}*/
