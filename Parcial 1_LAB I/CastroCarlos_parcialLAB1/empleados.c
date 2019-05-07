#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "empleados.h"
#define TRUE 0
#define FALSE 1

char opciones(char mensaje[])
{
    char opcion;

    printf(mensaje);
    fflush(stdin);
    scanf("%c",&opcion);
    system("cls");

    return opcion;
}


void initEmployees(ePelicula list[], int len)
{
    int i;

    for(i=0; i<len; i++)
    {
        list[i].isEmpty=TRUE;

    }
}

int crearEmpleado(ePelicula list[], eFecha listFecha[], int len, int flag)
{
    int i;

    i=buscarLibre(list, len);
    if(i!=-1)
    {
        list[i].id=i+1000;
        list[i].id=i+1000;

        ingresoPalabra(list[i].name, "Ingrese titulo: ");

        printf("Ingrese la fecha de estreno: \n");
        listFecha[i].dia=ingresoNumero("\nDia: ");
        while(listFecha[i].dia<0||listFecha[i].dia>31)
        {
            listFecha[i].dia=ingresoNumero("\nReingrese Dia: ");
        }

        listFecha[i].mes=ingresoNumero("\nMes: ");
        while(listFecha[i].mes<0||listFecha[i].mes>12)
        {
            listFecha[i].mes=ingresoNumero("\nReingrese mes: ");

        }

        listFecha[i].anio=ingresoNumero("\nAnio: ");
        while(listFecha[i].anio<0)
        {
            listFecha[i].anio=ingresoNumero("\nReingrese nAnio: ");

        }
        printf("\nGeneros de pelicula\n\n1.Accion\n2.Comedia\n3.Drama\n4.Romance\n5.Terror\n");
        list[i].idGenero=ingresoNumero("Ingrese genero: ");
        while(list[i].idGenero<0||list[i].idGenero>5)
        {
            list[i].idGenero=ingresoNumero("Reingrese genero: ");

        }

        list[i].idActor=ingresoNumero("Ingrese ID del actor: ");
        while(list[i].idActor<0||list[i].idActor>10)
        {
            list[i].idActor=ingresoNumero("Reingrese ID del actor: ");

        }
        list[i].isEmpty=FALSE;

        flag=flag+1;

    }

    return flag;
}

int buscarLibre(ePelicula list[], int len)
{
    int i;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty==0)
        {
            break;

        }

    }
    return i;
}
void hardcodearDatosEmpleados(ePelicula list[], eFecha listFecha[], int tam)
{
    int i;
    char nombres[][50]= {"Avengers EndGame","Thor","Cellular","Men in Black 4","IronMan","IronMan","13  Going on 30","Lucy","Nace una estrella","¿Dime con cuantos?","Guardianes de la galaxia","A perfect murder","La isla","Que paso ayer","Home Alone 3","Deadpool","Sherlock Holmes","Men in Black 3","Avengers infinity war","Grandes esperanzas","SWAT","XxX"};
    int idActores[22]= {2,5,4,5,2,3,1,9,4,9,7,1,9,1,10,2,10,10,7,6,6};
    int sector[22]= {1,1,1,1,1,4,1,4,4,1,3,3,2,2,1,1,1,1,4,1,1};
    int dia[22]= {20,10,2,10,5,7,9,8,4,20,6,3,5,6,7,5,2,6,8,20,11};
    int mes[22]= {4,6,5,7,9,5,2,3,4,5,8,10,2,10,12,6,5,4,12,2,5};
    int anio[21]= {2019,2013,2004,2019,2012,2004,2014,2018,2010,2014,1995,2005,2013,1997,2015,2011,2010,2017,1995,1998,1992};

    for(i=0; i<21; i++)
    {
        list[i].id =1000+i;
        listFecha[i].id =1000+i;
        list[i].idActor = idActores[i];
        list[i].idGenero = sector[i];
        strcpy(list[i].name, nombres[i]);
        listFecha[i].mes = mes[i];
        listFecha[i].anio = anio[i];
        listFecha[i].dia = dia[i];
        list[i].isEmpty = FALSE;


    }
}
void modificarEmpleado(ePelicula list[], eFecha listFecha[], int len, int flag)
{
    int id, indice;
    char opcion;

    if(flag!=0)
    {
        id=ingresoNumero("Ingrese id: ");

        indice=findEmployeeById(list, len, id);

        if(indice!=-1)
        {
            opcion=opciones("Que desea cambiar?\n\n\n1.Titulo\n2.Fecha de estreno\n3.Actor\nSeleccion:");
            opcionesCambio(list, listFecha, indice, opcion);

        }
        else
        {
            printf("No se encontro ID\n");

        }
    }
    else
    {
        printf("No hay datos ingresados\n");

    }
    system("pause");
}

int findEmployeeById(ePelicula list[], int len, int id)
{
    int indice, i;

    indice=-1;

    for(i=0; i<len; i++)
    {
        if(id==list[i].id)
        {
            indice=i;
            break;

        }
    }

    return indice;
}


void opcionesCambio(ePelicula list[], eFecha listFecha[], int indice, char opcion)
{
    switch(opcion)
    {
    case'1':
        ingresoPalabra(list[indice].name, "Ingrese nuevo Titulo: ");

        break;
    case'2':
        listFecha[indice].dia=ingresoNumero("\nDia: ");
        while(listFecha[indice].dia<0||listFecha[indice].dia>31)
        {
            listFecha[indice].dia=ingresoNumero("\nReingrese Dia: ");
        }

        listFecha[indice].mes=ingresoNumero("\nMes: ");
        while(listFecha[indice].mes<0||listFecha[indice].mes>12)
        {
            listFecha[indice].mes=ingresoNumero("\nReingrese mes: ");

        }

        listFecha[indice].anio=ingresoNumero("\nAnio: ");
        while(listFecha[indice].anio<0)
        {
            listFecha[indice].anio=ingresoNumero("\nReingrese nAnio: ");

        }

        break;
    case'3':
        list[indice].idActor=ingresoNumero("Ingrese ID del actor: ");
        while(list[indice].idActor<0||list[indice].idActor>10)
        {
            list[indice].idActor=ingresoNumero("Reingrese ID del actor: ");

        }

        break;
    default:
        printf("Opcion Invalida...\n");
        system("pause");

        break;
    }

}

void ingresoPalabra(char buffer[],char mensaje[])
{
    printf(mensaje);
    fflush(stdin);
    gets(buffer);

    correctorPalabras(buffer);

}
void correctorPalabras(char buffer[])
{
    strlwr(buffer);
    buffer[0]=toupper(buffer[0]);
}

int ingresoNumero(char mensaje[])
{
    int bufferN;
    printf(mensaje);
    scanf("%d",&bufferN);

    return bufferN;
}

int bajaEmpleado(ePelicula list[], int len, int flag)
{
    int id, r;

    if(flag!=0)
    {
        id=ingresoNumero("Ingrese id: ");
        r=removePelicula(list, len, id);
        flag=flag+r;
    }
    else
    {
        printf("No hay datos ingresados\n");
        system("pause");
    }

    return flag;
}

int removePelicula(ePelicula list[], int len, int id)
{
    int i, loEncontro;
    char respuesta;

    loEncontro=0;

    for(i=0; i<len; i++)
    {
        if(id == list[i].id)
        {
            printf("esta seguro de eliminar a %s de la lista?(s/n)", list[i].name);
            fflush(stdin);
            scanf("%c",&respuesta);

            if(respuesta=='s')
            {
                list[i].isEmpty=TRUE;
                loEncontro = -1;
            }


            break;
        }

    }

    if(loEncontro==0)
    {
        printf("No se encontro ID\n");
        system("pause");

    }
    return loEncontro;
}
void mostrarEmpleados(ePelicula list[], eFecha listFecha[], eActores listActores[],  eGenero listGeneros[], int len, int flag)
{

    if(flag!=0)
    {
        //ordenaVector(list, listFecha, len);
        cargarDatos(list, listFecha, listActores, listGeneros, len);
        cargarDatosActores(listActores);
        system("pause");

    }
    else
    {
        printf("No hay datos ingresados\n");
        system("pause");

    }

}


void ordenaVector(ePelicula list[], eFecha listFecha[], int len)
{
    int i,j,k;
    i=0;
    k=i;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len ; j++)
        {
            if(list[j].isEmpty==FALSE)
            {

                if(listFecha[j].anio<=listFecha[k].anio)
                {
                    if(listFecha[j].mes<=listFecha[k].mes)
                    {
                        if(listFecha[j].dia<listFecha[k].dia)
                        {
                            k=j;
                            ordenamiento(list, listFecha, i, k);
                        }
                    }

                }


            }

        }
    }

}

void ordenamiento(ePelicula list[], eFecha listFecha[], int j, int i)
{

    ePelicula auxP;
    eFecha auxF;

    auxP.id=list[i].id;
    list[i].id=list[j].id;
    list[j].id=auxP.id;

    auxP.idGenero=list[i].idGenero;
    list[i].idGenero=list[j].idGenero;
    list[j].idGenero=auxP.idGenero;

    auxP.idActor=list[i].idActor;
    list[i].idActor=list[j].idActor;
    list[j].idActor=auxP.idActor;

    strcpy(auxP.name,list[i].name);
    strcpy(list[i].name,list[j].name);
    strcpy(list[j].name,auxP.name);

    auxF.id=listFecha[i].id;
    listFecha[i].id=listFecha[j].id;
    listFecha[j].id=auxF.id;

    auxF.dia=listFecha[i].dia;
    listFecha[i].dia=listFecha[j].dia;
    listFecha[j].dia=auxF.dia;

    auxF.mes=listFecha[i].mes;
    listFecha[i].mes=listFecha[j].mes;
    listFecha[j].mes=auxF.mes;

    auxF.mes=listFecha[i].mes;
    listFecha[i].mes=listFecha[j].mes;
    listFecha[j].mes=auxF.mes;
}

void cargarDatos(ePelicula list[], eFecha listFecha[], eActores listActores[], eGenero listGenero[], int len)
{
    int i;

    printf("ID   |Titulo                   |Fecha de estreno|Actor               |Genero\n");

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty==FALSE)
        {
            desplegarDatos(list[i], listFecha[i], listActores, listGenero);

        }
    }


}

void desplegarDatos(ePelicula list, eFecha listFecha, eActores listActores[], eGenero listGenero[])
{
    int i;
    char actor[51], genero[51];

    for(i=0; i<10; i++)
    {
        if(list.idActor==listActores[i].id)
        {
            strcpy(actor,listActores[i].actorName);
            break;

        }
    }

    for(i=0; i<5; i++)
    {
        if(list.idGenero==listGenero[i].id)
        {
            strcpy(genero,listGenero[i].genero);
            break;

        }
    }

    printf("%3d |%25s |%2d/%2d/%7d |%20s |%8s\n", list.id, list.name, listFecha.dia, listFecha.mes, listFecha.anio, actor, genero);

}

void cargarDatosActores(eActores listActores[])
{
    int i;
    char actor[51], pais[20];

    printf("\nID |Actor                   |Pais\n");


    for(i=0; i<10; i++)
    {
        strcpy(actor,listActores[i].actorName);
        strcpy(pais,listActores[i].origen);
        printf("%2d |%25s |%20s\n", listActores[i].id, actor, pais);
    }


}
