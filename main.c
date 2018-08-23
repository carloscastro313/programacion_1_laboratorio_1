#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero;
    float numero;
    char letra;
    //int ingrese;

    //printf("El numero es: %d, y el otro numero es: %f\n",unNumero,numero);
    //printf("El caracter es: %c\n",letra);

    printf("Ingrese un numero: ");
    scanf("%i",&unNumero);
    printf("Ingrese un letra: ");
    //fflush(stdin);
    //setbuf(stdin,NULL);
    scanf("%c",&letra);
    printf("Ingrese un numero real: ");
    scanf("%f",&numero);

    printf("numero %d \n", unNumero);
    printf("real %f \n", numero);
    printf("Letra %c", letra);
    return 0;
}
