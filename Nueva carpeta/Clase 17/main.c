#include <stdio.h>
#include <stdlib.h>
#define T 5

int cargaDinamica(int*, int);

int main()
{
    int* pNumero;
    int* aux;
    int contador,opcion;

    contador=0;
    pNumero= (int*) malloc(sizeof(int)*T);
    aux=pNumero

    cargaDinamica(pNumeros, T);
    system("pause");
    system("cls");

        /*if(pNumero!=NULL)
        {
            for(i=0;i<T;i++)
            {
                printf("Ingrese numero: \n");
                scanf("%d",*(pNumero+i));
            }
            for(i=0;i<5;i++)
            {
                printf("%d\n",*(pNumero+i));
            }

        }*/
    do
    {

        printf("Desea agregar mas valores?");
        scanf("%d",&opcion);
        if(opcion==1)
        {
            aux= (int*) realloc(aux,sizeof(int)*T*contador);

        }

    }while(opcion!=0&&flag!=0);
    /*do
    {
        pNumero= (int*) realloc(pNumero,sizeof(int)*(T*contador));

        if(pNumero!=NULL)
        {
            for(i=5;i<10;i++)
            {
                *(pNumero+i)=*(pNumero+i-5);
            }
            for(i=0;i<5;i++)
            {
                *(pNumero+i)=i+6;
            }
            for(i=0;i<10;i++)
            {
                printf("%d\n",*(pNumero+i));
            }

        }
    }while(opcion!=0);*/

    /*int b;
    int* pNumero;
    pNumero = (int*) malloc(sizeof(int));
    *pNumero=32;
    printf("Heap--pNumero %d\n",pNumero);
    printf("Stack--&pNumero %p\n",&pNumero);

    if(pNumero!=NULL)
    {
        printf("Valor--*pNumero: %d\n", *pNumero);
        printf("luego de hacer un free...\n");
        free(pNumero);
        printf("Heap--pNumero %d\n",pNumero);
        printf("Stack--&pNumero %p\n",&pNumero);
        printf("Valor--*pNumero: %d\n", *pNumero);
    }*/

    return 0;
}
int cargaDinamica(int* pNumeros,int tam)
{
    int i;

    if(pNumero!=NULL)
    {
        for(i=0;i<T;i++)
        {
            printf("Ingrese numero: \n");
            scanf("%d",*(pNumero+i));
        }
        for(i=0;i<5;i++)
        {
            printf("%d\n",*(pNumero+i));
        }

    }else
    {
        printf("No hay memoria disponible")
    }


}
