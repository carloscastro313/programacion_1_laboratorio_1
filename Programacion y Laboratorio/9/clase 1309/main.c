#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "input.h"
#define T 3



int main()
{
    char nombreCompleto[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];



    cargarAlumnos( nombreCompleto, nota1, nota2, nota3, promedio);
    cargarDatos(nombreCompleto, nota1, nota2, nota3, promedio);

    return 0;
}


