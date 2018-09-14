#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#define A 3

void mostrarAlumno(eAlumno alumnoParametro)
{
    printf("%d %s %f %s",alumnoParametro.legajo,alumnoParametro.nombre,alumnoParametro.promedio,alumnoParametro.direccion);
}

eAlumno cargarAlumno(eAlumno cargarAlumno)
{
    printf("ingrese legajo:");
    scanf("%d",&cargarAlumno.legajo);

    printf("ingrese nombre:");
    fflush(stdin);
    gets(cargarAlumno.nombre);

    printf("ingrese promedio:");
    scanf("%f",&cargarAlumno.promedio);

    printf("ingrese direccion:");
    fflush(stdin);
    gets(cargarAlumno.direccion);

    return cargarAlumno;
}
void cargarListado(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i]=cargarAlumno(listado[i]);
    }

}
