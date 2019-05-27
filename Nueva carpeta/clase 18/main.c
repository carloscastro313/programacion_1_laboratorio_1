#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"

int main()
{
    eEmpleado* miEmpleado;
    miEmpleado = constructorFantasma();

    if(set_Legajo(miEmpleado, 1001)!=0)
    {
        strcpy(miEmpleado->nombre,"pedro");
        miEmpleado->sueldo=5000;
        printf("lalalala\n");
        printf("%d|%s|%.2f\n",get_legajo(miEmpleado) ,miEmpleado->nombre ,miEmpleado->sueldo);

    }else{
        printf("ERROR");

    }

    delete_empleado(miEmpleado);
    printf("%d|%s|%.2f\n",get_legajo(miEmpleado) ,miEmpleado->nombre ,miEmpleado->sueldo);

    return 0;
}

