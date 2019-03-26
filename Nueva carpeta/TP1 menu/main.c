#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"
#include "recursividad.h"
#include "calculo.h"

int main()
{
    int opcion ,flagDivision ,flagA ,flagB;
    float resultadoSuma, resultadoResta, ResultadoMultiplicacion, resultadoDivision,numeroUno ,numeroDos;
    char seguir='s';

    flagA=0;
    flagB=0;
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
        printf("\n3.Calcular\n4.Informar resultados\n5.salir\nElija una opcion");
        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:
                numeroUno=pedirEntero("Numero A:");
                flagA++;
                break;
            case 2:
                numeroDos=pedirEntero("Numero B:");
                flagB++;
                break;
            case 3:
                resultadoSuma=calculoSuma(numeroUno ,numeroDos);
                resultadoResta=calculoResta(numeroUno ,numeroDos);
                ResultadoMultiplicacion=calculaMultiplicacion(numeroUno ,numeroDos);
                if(numeroDos==0)
                {
                    flagDivision++;
                }else{
                    resultadoDivision=calculoDivision(numeroUno ,numeroDos);
                }
                break;
            case 4:
                printf("Estoy saliendo del programa\n");
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
    }while(seguir!='n');


    return 0;
}
