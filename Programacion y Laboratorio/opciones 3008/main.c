#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#include <math.h>

int pedirnumero();

int main(){

    int nota;

    nota=pedirnumero();

    return 0;
}
int pedirnumero()
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    printf("El numero es %d",numero);

    return pedirnumero();

}











/*int main()
{
    char opcion;
    do{


        printf("A_alta usuario\n");
        printf("B_baja usuario\n");
        printf("M_Modificacion usuario\n");
        printf("S_salir\n");
        printf("Seleccion:");
        fflush(stdin);
        scanf("%c",&opcion);
        opcion=toupper(opcion);

        switch(opcion)
        {
            case 'A':
                printf("Estoy dando de alta...\n");
                break;
            case 'B':
                printf("Estoy dando de baja...\n");
                break;
            case 'M':
                printf("Estoy modificando...\n");
                break;
        }
        system("pause");
        system("cls");

    }while(opcion!='S');

    return 0;
}*/
