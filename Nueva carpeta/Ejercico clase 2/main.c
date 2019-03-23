#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    int numero ,i ,pares ,suma ,positivos ,negativos ,min ,max ,numeroMenorPositivo ,numeroMenorNegativo ,numeroEntre ,flag;
    float promedio ,promedioNegativos;
    char respuesta;

    flag=0;
    positivos=0;
    negativos=0;
    numeroMenorPositivo=0;
    numeroMenorNegativo=0;
    i=0;
    pares=0;
    numeroEntre=0;
    suma=0;

    do{

        printf("Ingrese numero: ");
        scanf("%d", &numero);

        while(numero==0)
        {

            printf("Reingrese numero: ");
            scanf("%d", &numero);

        }

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
    if(flag==0)
    {
        max=numero;
        min=numero;
        flag++;
    }else
    {
        if(numero<min)
        {
            min=numero;

            if(numero>0)
            {
                numeroMenorPositivo=numero;
            }else
            {
                if(numero<0)
                {
                    numeroMenorNegativo=numero;
                }
            }

        }

        if(numero>max)
        {
            max=numero;

        }

    }


    if(numero>=-10&&numero<=50)
    {

        numeroEntre++;

    }

    suma=suma+numero;
    i++;

    fflush(stdin);

    printf("desea continuar?");
    scanf("%c", &respuesta);
    system("cls");
    }while(respuesta!='n');

    promedio=(float)suma/i;
    promedioNegativos=(float)negativos/i;

    system("cls");

    printf("La cantidad de numero ingresado es: %d\n" ,i);
    printf("La cantidad de pares: %d\n" ,pares);
    printf("La suma de los positivos: %d\n" ,positivos);
    printf("Promedio de los negativos: %f\n" ,promedioNegativos);
    printf("Maximos: %d\n",max);
    printf("Minimos: %d\n",min);
    printf("El positivos mas chico: %d\n" ,numeroMenorPositivo);
    printf("Negativos mas grande: %d\n" ,numeroMenorNegativo);
    printf("Cantidad de numero entre -10 y 50: %d\n" ,numeroEntre);
    printf("promedio total: %f\n" ,promedio);



    return 0;
}
