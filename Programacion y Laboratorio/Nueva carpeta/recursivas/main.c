#include <stdio.h>
#include <stdlib.h>

/** \brief calcular el factorial de un numero
 *
 * \param int
 * \return int
 *
 */
int calcularfactorial(int);

int main()
{
    int numero;
    int factorial;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

   /* for(i=numero; i>=1; i--)
    {
        factorial=factorial*i;
    }*/
    factorial=calcularfactorial(numero);

    printf("El factorial es: %d", factorial);
    return 0;
}
int calcularfactorial(int numero)
{
    int factorial;

    if(numero==0)
    {
        factorial=1;
    }
    else
    {
        factorial=numero*calcularfactorial(numero-1);
    }

    return factorial;

}
