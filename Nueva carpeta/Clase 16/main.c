#include <stdio.h>
#include <stdlib.h>
#define P 5
int main()
{
    int numero[P];
    int opcion;
    int flag;
    int numeroBuscar;
    int i;
    int *Pnumero;

    Pnumero=numero;

    for(i=0;i<P;i++)
    {
        *(Pnumero+i)=0;

    }

    do{
        printf("PRACTICA CARLOS CASTRO\n");
        printf("\n\n1.Alta\n2.Baja\n3.Modificacion\n4.Mostrar\n5.Salir\n\n\nSelecion: ");
        scanf("%d",&opcion);
        system("cls");
        flag=0;
        switch(opcion)
        {
        case 1:
            for(i=0;i<P;i++)
            {
                if(*(Pnumero+i)==0)
                {
                    break;

                }
            }
            printf("Ingrese numero:");
            scanf("%d",(Pnumero+i));
            while(*(Pnumero+i)<=0)
            {
                printf("Ingrese numero:");
                scanf("%d",(Pnumero+i));
            }
            break;
        case 2:
            for(i=0;i<P;i++)
            {
                if(*(Pnumero+i)>0)
                {
                    printf("%d>%d\n", i+1,*(Pnumero+i));

                }
            }
            printf("Ingrese ID numero:");
            scanf("%d",&numeroBuscar);
            for(i=0;i<P;i++)
            {
                if(i==numeroBuscar-1)
                {
                    *(Pnumero+i)=0;
                    flag=-1;
                }
            }
            if(flag==0)
            {
                printf("No existe numero");
                system("pause");
            }
            break;
        case 3:
            for(i=0;i<P;i++)
            {
                if(*(Pnumero+i)>0)
                {
                    printf("%d>%d\n", i+1,*(Pnumero+i));

                }
            }
            printf("Ingrese ID numero:");
            scanf("%d",&numeroBuscar);
            for(i=0;i<P;i++)
            {
                if(i==numeroBuscar-1)
                {
                    printf("Ingrese renumero:");
                    scanf("%d",(Pnumero+i));
                    while(*(Pnumero+i)<=0)
                    {
                        printf("Ingrese renumero:");
                        scanf("%d",(Pnumero+i));
                    }

                    flag=-1;
                }
            }
            if(flag==0)
            {
                printf("No existe numero");
                system("pause");
            }
            break;
        case 4:
            for(i=0;i<P;i++)
            {
                if(*(Pnumero+i)>0)
                {
                    printf("%d\n",*(Pnumero+i));

                }
            }
            system("pause");
            break;
        case 5:
            printf("CHAU");
            system("pause");
            break;
        default:
            printf("ERROR");
            system("pause");
            break;
        }

        system("cls");

    }while(opcion!=5);


    return 0;
}
