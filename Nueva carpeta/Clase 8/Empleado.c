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

char opciones(char mensaje[])
{
    char opcionSelecionada;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&opcionSelecionada);
    system("cls");

    return opcionSelecionada;
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

void crearEmpleado(eEmpleado empleadoIngresado[], int tam)
{
    int i;
    i=buscarLibre(empleadoIngresado, tam);
    if(i!=-1)
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

    }else
    {
        printf("No hay espacio disponible...");

    }

}

void mostrarEmpleados(eEmpleado datosMostrados[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(datosMostrados[i].estado==1)
        {
           desplegarDatos(datosMostrados[i]);
        }

    }
    system("pause");
}


void mostrarEmpleado(eEmpleado datosEmpleado[], int tam)
{
    int seleccion, indice;
    seleccion=pedirEntero("Ingrese legajo: ");
    indice=buscarUno(datosEmpleado, tam, seleccion);

    if(indice!=-1)
    {
        desplegarDatos(datosEmpleado[indice]);

    }else
    {
        printf("No existe empleado\n");
    }
    system("pause");
}

void desplegarDatos(eEmpleado datosMostrados)
{
    printf("%d--%s--%c--%.2f\n", datosMostrados.legajo ,datosMostrados.nombre ,datosMostrados.sexo ,datosMostrados.sueldoNeto);

}

void buscarModificarSueldo(eEmpleado buscarSueldo[], int tam)
{
    int seleccion, indice;
    seleccion=pedirEntero("Ingrese legajo a modificar: ");
    indice=buscarUno(buscarSueldo, tam, seleccion);

    if(indice!=-1)
    {
        buscarSueldo[indice].sueldoNeto=modificarSueldo(buscarSueldo[indice]);

    }else
    {
        printf("No existe empleado\n");

        system("pause");
    }
}
void bajaEmpleado(eEmpleado darBaja[], int tam)
{
    int seleccion, indice, buffer;
    char respuesta;

    seleccion=pedirEntero("Ingrese legajo a modificar: ");
    indice=buscarUno(darBaja, tam, seleccion);

    if(indice!=-1)
    {
        buffer=LIBRE;

    }else
    {
        printf("No existe empleado\n");

        system("pause");
    }

    do{
       printf("Esta seguro de la modificacion?(s/n)...");
       fflush(stdin);
       scanf("%c",&respuesta);

    }while(respuesta!='s'&&respuesta!='n');

    if(respuesta=='s')
    {
        darBaja[indice].estado=buffer;

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
    int indice, i;

    indice=-1;

    for(i=0;i<tam;i++)
    {
        if(legajo==datoBuscado[i].legajo)
        {
            indice=i;
            break;
        }
    }

    return indice;
}


float modificarSueldo(eEmpleado sueldoModificado)
{
    float buffer;
    char respuesta;
    desplegarDatos(sueldoModificado);
    printf("Actualiza valor del sueldo bruto: ");
    scanf("%f",&sueldoModificado.sueldoBruto);
    buffer=sueldoModificado.sueldoBruto*0.85;

    do{
       printf("Esta seguro de la modificacion?(s/n)...");
       fflush(stdin);
       scanf("%c",&respuesta);

    }while(respuesta!='s'&&respuesta!='n');

    if(respuesta=='s')
    {
        sueldoModificado.sueldoNeto=buffer;
    }

    return sueldoModificado.sueldoNeto;
}
