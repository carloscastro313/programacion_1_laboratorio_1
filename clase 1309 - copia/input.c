#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "input.h"
#define T 3






float calcularPromedio(int nota1, int nota2, int nota3)
{
    float promedio;
    promedio=(float)(nota1+nota2+nota3)/T;

    return promedio;
}

void cargarAlumnos(char nombre[][50],char sexo[], int legajo[], int nota1[], int nota2[], int nota3[],int numeroAlumno, float promedio[])
{

    printf("Ingrese su nombre completo: ");
    fflush(stdin);
    gets(nombre[numeroAlumno]);


    printf("Ingrese el sexo del alumno: ");
    fflush(stdin);
    scanf("%c",&sexo[numeroAlumno]);
    sexo[numeroAlumno]=toupper(sexo[numeroAlumno]);

    while(sexo[numeroAlumno]!='F'&&sexo[numeroAlumno]!='M')
    {
        printf("Ingrese el sexo del alumno: ");
        fflush(stdin);
        scanf("%c",&sexo[numeroAlumno]);
        sexo[numeroAlumno]=toupper(sexo[numeroAlumno]);
    }

    printf("Ingrese legajo: ");
    scanf("%d",&legajo[numeroAlumno]);

    printf("Ingrese nota 1: ");
    scanf("%d",&nota1[numeroAlumno]);
    printf("Ingrese nota 2: ");
    scanf("%d",&nota2[numeroAlumno]);
    printf("Ingrese nota 3: ");
    scanf("%d",&nota3[numeroAlumno]);
    promedio[numeroAlumno]=calcularPromedio( nota1[numeroAlumno],nota2[numeroAlumno],nota3[numeroAlumno]);

}
void cargarDatos(char nombre[][50], char sexo[], int legajo[], int nota1[], int nota2[], int nota3[], float promedio[])
{
    int i;

    printf("%20s %6s %6s %6s %6s %6s %8s", "nombre", "sexo", "legajo", "nota 1", "nota2", "nota3", "promedio\n");
    for (i=0; i<T; i++)
    {
        printf("%20s %6c %6d %6d %6d %6d %8.2f \n",nombre[i], sexo[i], legajo[i], nota1[i], nota2[i], nota3[i], promedio[i]);
    }
    system("pause");
}
void inicializarvector(char nombre[][50], char sexo[],int legajo[], int nota1[], int nota2[], int nota3[], float promedio[])
{
    int i;
    for(i=0; i<T; i++)
    {
        strcpy(nombre[i], "NULL");
        legajo[i]=-1;
        nota1[i]=-1;
        nota2[i]=-1;
        nota3[i]=-1;
        sexo[i]='N';

    }
}
void modificacionDatos(char nombre[][50],char sexo[], int legajo[], int nota1[], int nota2[], int nota3[], float promedio[])
{
    int ingreseLegajo;
    int i;

    printf("%20s %6s %6s %6s \n", "opcion", "sexo", "nombre", "legajo");
    for (i=0; i<T; i++)
    {
            printf("%20d %6s %6c %6d\n", i,nombre[i], sexo[i], legajo[i]);
    }
    printf("Seleccion: ");
    scanf("%d",&ingreseLegajo);

    while(isdigit(ingreseLegajo)!=0&&(ingreseLegajo>T||ingreseLegajo<0))
    {
        printf("LEGAJO INEXISTENTE, REINGRESAR...\n");

        printf("%20s %6s %6s %6s \n", "opcion", "sexo", "nombre", "legajo");
        for (i=0; i<T; i++)
        {
                printf("%20d %6s %6c %6d\n", i,nombre[i], sexo[i], legajo[i]);
        }
        printf("Seleccion: ");
        scanf("%d",&ingreseLegajo);
    }
    cargarAlumnos( nombre, sexo, legajo, nota1, nota2, nota3, ingreseLegajo, promedio);
}







