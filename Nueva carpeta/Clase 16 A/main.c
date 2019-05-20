#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3

typedef struct
{
    int numero;
    char letra;
}eDato;

int mostrar(eDato*, int);
int diegoPuto(eDato*, int);
int sortLetra(eDato*, int);


int main()
{
    eDato mostrarDatos[T];
    diegoPuto(mostrarDatos,T);
    sortLetra(mostrarDatos,T);
    mostrar(mostrarDatos,T);


    //printf("%d--%c\n", (*pDato).numero, (*pDato).letra);
    //printf("%d--%c\n", pDato->numero, pDato->letra);
    return 0;
}
int diegoPuto(eDato *pDato, int tam)
{
    int numeros[3]={1,2,3};
    int i;
    char hLetra[3]={'c','b','a'};

    for(i=0;i<tam;i++)
    {
        (pDato+i)->numero=numeros[i];
        (pDato+i)->letra=hLetra[i];
    }

    return 0;
}


int mostrar(eDato *pDato, int tam)
{
    int i;

     for(i=0;i<tam;i++)
    {
        printf("%d--%c\n", (pDato+i)->numero, (pDato+i)->letra);
        //printf("%d--%c\n", (*(pDato+i)).numero, (*(pDato+i)).letra);
    }
    return 0;
}

int sortLetra(eDato* pDato, int tam)
{
    eDato aux;
    int i,j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam ; j++)
        {

            if((pDato+i)->letra>(pDato+j)->letra)
            {
                aux=*(pDato+i);
                *(pDato+i)=*(pDato+j);
                *(pDato+j)=aux;

            }
        }
    }
    return 0;
}
