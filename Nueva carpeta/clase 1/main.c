#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int otroNumero;
    int resultado;

    printf("Ingrese numero:");
    scanf("%d",&numero);

    system("cls");

    printf("Ingrese numero:");
    scanf("%d",&otroNumero);

    system("cls");

    resultado=numero+otroNumero;

    printf("resultado: %d", resultado);

    system("pause");

    return 0;
}
