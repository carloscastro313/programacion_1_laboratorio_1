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

void crearEmpleado(eEmpleado empleadoIngresado[], eSector listaSector[], int tam)
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
        printf("Ingrese sector\n1.contabilidad\n2.sistemas\3.RRHH\nSelecion:");
        scanf("%d",&empleadoIngresado[i].idSector);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&empleadoIngresado[i].sexo);
        printf("Ingrese horas semanales: ");
        scanf("%d",&empleadoIngresado[i].horasTrabajadas);

        empleadoIngresado[i].sueldoBruto=4*(empleadoIngresado[i].horasTrabajadas*listaSector[empleadoIngresado[i].idSector].dineroHora);
        /*printf("Ingrese sueldo bruto: ");
        scanf("%f",&empleadoIngresado[i].sueldoBruto);*/

        empleadoIngresado[i].sueldoNeto=empleadoIngresado[i].sueldoBruto*0.85;
        empleadoIngresado[i].estado=OCUPADO;

        system("cls");

    }else
    {
        printf("No hay espacio disponible...");

    }

}

void mostrarEmpleados(eEmpleado datosMostrados[], eSector listaSectores[], int tam)
{
    int i;

    printf("legajo |Nombre  |Sexo  |Sector   |Horas   |Sueldo neto\n");

    for(i=0;i<tam;i++)
    {
        if(datosMostrados[i].estado==OCUPADO)
        {
           desplegarDatos(datosMostrados[i], listaSectores);
        }

    }
    system("pause");
}


void mostrarEmpleado(eEmpleado datosEmpleado[], eSector listaSectores[], int tam)
{
    int seleccion, indice;
    seleccion=pedirEntero("Ingrese legajo: ");
    indice=buscarUno(datosEmpleado, tam, seleccion);

    if(indice!=-1&&datosEmpleado[indice].estado==OCUPADO)
    {
        printf("legajo |Nombre  |Sexo  |Sector   |Horas   |Sueldo neto\n");
        desplegarDatos(datosEmpleado[indice], listaSectores);

    }else
    {
        printf("No existe empleado\n");
    }
    system("pause");
}

void desplegarDatos(eEmpleado datosMostrados, eSector listaSectores[])
{
    int i;
    char descripcion[20];

    for(i=0;i<3;i++)
    {
        if(datosMostrados.idSector==listaSectores[i].idSector)
        {
            strcpy(descripcion,listaSectores[i].descripcion);
            break;
        }
    }

    printf("%d      |%s  |%c     |%s  |%d  |%.2f\n", datosMostrados.legajo, datosMostrados.nombre, datosMostrados.sexo, descripcion, datosMostrados.horasTrabajadas, datosMostrados.sueldoNeto);

}

void buscarModificarSueldo(eEmpleado buscarSueldo[], eSector listaSectores[], int tam)
{
    int seleccion, indice;
    seleccion=pedirEntero("Ingrese legajo a modificar: ");
    indice=buscarUno(buscarSueldo, tam, seleccion);

    if(indice!=-1)
    {
        buscarSueldo[indice].sueldoNeto=modificarSueldo(buscarSueldo[indice], listaSectores);

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


float modificarSueldo(eEmpleado sueldoModificado, eSector listaSectores[])
{
    float buffer;
    char respuesta;
    desplegarDatos(sueldoModificado, listaSectores);
    printf("Actualiza cantidad de horas semanales: ");
    scanf("%d",&sueldoModificado.horasTrabajadas);
    buffer=4*(sueldoModificado.horasTrabajadas*listaSectores[sueldoModificado.idSector].dineroHora);

    do{
       printf("Esta seguro de la modificacion?(s/n)...");
       fflush(stdin);
       scanf("%c",&respuesta);

    }while(respuesta!='s'&&respuesta!='n');

    if(respuesta=='s')
    {
        sueldoModificado.sueldoBruto=buffer;
        sueldoModificado.sueldoNeto=buffer*0.85;
    }

    return sueldoModificado.sueldoNeto;
}

void informeEmpleado(eEmpleado informes[], eSector listaSectores[], int tam)
{
    eEmpleado empleadoMaximo;

    empleadoMaximo=buscarMaximo(informes, tam);


    printf("El empleado con mayor sueldo: ");
    desplegarDatos(empleadoMaximo, listaSectores);
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
        if(numeroEntero[i].estado==OCUPADO)
        {
            if(flag==0||numeroEntero[i].sueldoBruto>empleadoMaximo.sueldoBruto)
            {
                empleadoMaximo=numeroEntero[i];
                flag=1;

            }
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

    cantidad=0;

    for(i=0;i<tam;i++)
    {
        if(numeroEntero[i].estado==OCUPADO)
        {
            if(numeroEntero[i].sueldoBruto>=20000&&(stricmp(numeroEntero[i].nombre,"carlos"))==0)
            {
                cantidad++;

            }
        }
    }

    return cantidad;
}


