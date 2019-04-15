#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Empleado.h"
#define LIBRE 0
#define OCUPADO 1

void inicializarEmpleados(eEmpleado datosInicializados[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        datosInicializados[i].estado=LIBRE;

    }
}

int buscarLibre(eEmpleado vectorLibre[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(vectorLibre[i].estado==0)
        {
            break;

        }

    }
    return i;
}

void crearEmpleado(eEmpleado empleadoIngresado[], int i)
{

        printf("Ingrese legajo: ");
        scanf("%d",&empleadoIngresado[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(empleadoIngresado[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&empleadoIngresado[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f",&empleadoIngresado[i].sueldoBruto);

        empleadoIngresado[i].sueldoNeto=empleadoIngresado[i].sueldoBruto*0.85;
        empleadoIngresado[i].estado=OCUPADO;
        system("cls");

}

void mostrarEmpleados(eEmpleado datosMostrados[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(datosMostrados[i].estado==1)
        {
            printf("%d--%s--%c--%.2f\n", datosMostrados[i].legajo ,datosMostrados[i].nombre ,datosMostrados[i].sexo ,datosMostrados[i].sueldoNeto);

        }

    }
    system("pause");
}


void mostrarEmpleado(eEmpleado datosEmpleado[], int indice)
{
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
int buscarUno(eEmpleado datoBuscado[], int tam, int legajo)
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

}

int borrarUno(eEmpleado datoBorrado[], int tam, int legajo)
{
    int flag, i;

    flag=0;

    for(i=0;i<tam;i++)
    {
        if(legajo==datoBorrado[i].legajo)
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

}
