#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


eEmpleado* constructorFantasma()
{
    eEmpleado* unEmpleado;
    unEmpleado=(eEmpleado*)malloc(sizeof(eEmpleado));
    return unEmpleado;
}

int set_Legajo(eEmpleado* this, int legajo)
{
    int valido=0;
    if(this!=NULL&& legajo>1000)
    {
        this->legajo=legajo;
        valido=1;
    }
    return valido;
}
int get_legajo(eEmpleado* this)
{
    int legajo=0;

    if(this!=NULL)
    {
        legajo=this->legajo;

    }

    return legajo;
}
void delete_empleado(eEmpleado* miEmpleado)
{
    if(miEmpleado!=NULL)
    {
        free(miEmpleado);
    }
}
