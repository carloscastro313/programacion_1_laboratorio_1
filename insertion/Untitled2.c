#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#define A 3


int main()
{

    eAlumno listaAlumnos[A];//vector de estructura+
    int i;

    cargarListado(listaAlumnos ,A);
        for(i=0; i<A; i++)
    {
        mostrarAlumno(listaAlumnos[i]);
    }



    return 0;
}

