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

void cargarAlumnos(char nombre[][50], int nota1[], int nota2[], int nota3[], float promedio[])
{
    int i;

    for (i=0; i<T; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombre[i]);

        printf("Ingrese nota 1: ");
        scanf("%d",&nota1[i]);
        printf("Ingrese nota 2: ");
        scanf("%d",&nota2[i]);
        printf("Ingrese nota 3: ");
        scanf("%d",&nota3[i]);
        promedio[i]=calcularPromedio( nota1[i],nota2[i],nota3[i]);
    }
}
void cargarDatos(char nombre[][50], int nota1[], int nota2[], int nota3[], float promedio[])
{
    int i;

    printf("%20s %6s %6s %6s %8s", "nombre", "nota 1", "nota2", "nota3", "promedio\n");
    for (i=0; i<T; i++)
    {
        printf("%20s %6d %6d %6d %8.2f \n",nombre[i],nota1[i],nota2[i],nota3[i], promedio[i]);
    }
}
