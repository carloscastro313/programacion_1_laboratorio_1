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
        if(datosMostrados[i].estado==OCUPADO)
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

    if(indice!=-1&&datosEmpleado[indice].estado==OCUPADO)
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

        printf("Esta seguro de la modificacion?(s/n)...");
        fflush(stdin);
        scanf("%c",&respuesta);
        if(respuesta=='s')
        {
            darBaja[indice].estado=buffer;

        }

    }else
    {
        printf("No existe empleado\n");

        system("pause");
    }

    do{


    }while(respuesta!='s'&&respuesta!='n');

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

void informeEmpleado(eEmpleado informes[], int tam)
{
    eEmpleado empleadoMaximo;

    empleadoMaximo=buscarMaximo(informes, tam);


    printf("El empleado con mayor sueldo: ");
    desplegarDatos(empleadoMaximo);
    printf("El cantidad de carlos: %d " ,buscarCarlos(informes, tam));

    system("pause");
}

eEmpleado buscarMaximo(eEmpleado numeroEntero[], int tam)
{
    int i, flag;
    eEmpleado empleadoMaximo;
    flag=0;

    for(i=0;i<tam;i++)
    {
        if(flag==0||numeroEntero[i].sueldoNeto>empleadoMaximo.sueldoNeto)
        {
            empleadoMaximo=numeroEntero[i];
            flag=1;

        }

    }

    return empleadoMaximo;
}
/*int buscarCarlos(eEmpleado numeroEntero[],eEmpleado Carlos[] ,int tam)
{
    int i, comp, cantidad, flag;
    flag=0;
    cantidad=0;
    for(i=0;i<tam;i++)
    {
        comp=stricmp(numeroEntero[i].nombre,"carlos");
        if(flag==0||(numeroEntero[i].sueldoBruto>=20000&&comp==0&&numeroEntero[i].estado==OCUPADO))
        {
            Carlos[cantidad]=numeroEntero[i];
            flag=1;
            cantidad++;
        }

    }

    return cantidad;
}*/

int buscarCarlos(eEmpleado numeroEntero[] ,int tam)
{
    int i,cantidad;

    for(i=0;i<tam;i++)
    {
        if(numeroEntero[i].sueldoBruto>=20000&&(stricmp(numeroEntero[i].nombre,"carlos"))==0&&numeroEntero[i].estado==OCUPADO)
        {
            cantidad++;

        }
    }

    return cantidad;
}
void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<6; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }
}
