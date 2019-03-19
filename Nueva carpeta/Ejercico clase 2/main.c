#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    int numero ,i ,pares ,positivos ,negativos ,min ,max;
    char respuesta;

    max=INI_MAX;
    min=INI_MIN;
    negativos=0;
    i=0;
    pares=0;
    suma=0;

    do{

        printf("Ingrese numero: ");
        scanf("%d", &numero);

        while(numero==0)
        {
            printf("Reingrese numero: ");
            scanf("%d", &numero);
        }

    i++;

    if(numero%2==0)
    {
        pares++;
    }

    if(numero>0)
    {
        positivos=positivos+numero;
    }

    if(numero<0)
    {
        negativos=negativos+numero;
    }

    if(numero<min)
    {
        min=numero;

    }

    fflush(stdin);
    printf("desea continuar?");
    scanf("%c", &respuesta);

    }while(respuesta!='s');





    return 0;
}
