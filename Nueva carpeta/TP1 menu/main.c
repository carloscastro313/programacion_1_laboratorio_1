#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"

#include "calculo.h"

int main()
{
    int opcion ,flagA ,flagB ,flagCalculo ,factorialA ,factorailB;
    float resultadoSuma, resultadoResta, ResultadoMultiplicacion, resultadoDivision,numeroUno ,numeroDos;

    flagA=0;
    flagB=0;
    flagCalculo=0;
    numeroUno=0;
    numeroDos=0;

    do
    {
        if(flagA==0)
        {
            printf("1.Ingresar 1er operando (A=X)");
        }else
        {
            printf("1.Ingresar 1er operando (A=%.2f)",numeroUno);
        }
        if(flagB==0)
        {
            printf("\n2.Ingresar 2do operando (B=y)");
        }else
        {
            printf("\n2.Ingresar 2do operando (B=%.2f)",numeroDos);
        }
        if(flagCalculo==0)
        {
            printf("\n3.Calcular");
        }else
        {
            printf("\n3.Calcular  OK!!!!");
        }


        printf("\n4.Informar resultados\n5.salir\nElija una opcion");
        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:
                numeroUno=pedirEntero("Numero A:");
                flagA=1;
                if(flagA==1)
                {
                    flagCalculo=0;
                }
                break;
            case 2:
                numeroDos=pedirEntero("Numero B:");
                flagB=1;
                if(flagB==1)
                {
                    flagCalculo=0;
                }

                break;
            case 3:
                resultadoSuma=calculoSuma(numeroUno ,numeroDos);
                resultadoResta=calculoResta(numeroUno ,numeroDos);
                ResultadoMultiplicacion=calculaMultiplicacion(numeroUno ,numeroDos);
                if(numeroDos!=0)
                {
                    resultadoDivision=calculoDivision(numeroUno ,numeroDos);

                }
                if(!(numeroDos<0 || numeroUno<0))
                {
                    factorialA=factorial(numeroUno);
                    factorailB=factorial(numeroDos);

                }
                flagCalculo++;

                break;
            case 4:
                printf("El resultado de %.2f + %.2f es: %.2f\n",numeroUno ,numeroDos ,resultadoSuma);
                printf("El resultado de %.2f - %.2f es: %.2f\n",numeroUno ,numeroDos ,resultadoResta);
                printf("El resultado de %.2f * %.2f es: %.2f\n",numeroUno ,numeroDos ,ResultadoMultiplicacion);
                if(numeroDos!=0)
                {
                    printf("El resultado de %.2f / %.2f es: %.2f\n",numeroUno ,numeroDos ,resultadoDivision);
                }else
                {
                    printf("No es posible dividir por cero\n");
                }
                if(numeroDos<0 || numeroUno<0)
                {
                    printf("No existen los factoriales negativos\n");
                }else
                {
                    printf("El factorial de %.0f es: %d y El factorial de %.0f es: %d",numeroUno ,factorialA ,numeroDos ,factorailB);

                }
                system("pause");

                break;
            case 5:
                printf("Que tenga un buen dia!!!");
                system("pause");

                break;
            default:
                printf("no ingreso una opcion valida\n");

                break;
        }
        system("cls");

    }while(opcion!=5);


    return 0;
}
