#include <stdio.h>
#include <stdlib.h>

/** \brief permite el ingreso de un numero entero
 *
 * \param texto[] char mensaje que se mostrara
 * \param min int minimo del rango de validacion
 * \param max int el maximo del rango de validacion
 * \return int el numero validado
 *
 */
int pedirEntero(char texto[],int min,int max)
{
    int numero;

    printf("%s",texto);
    scanf("%d",&numero);
    while(numero<min||numero>max)
    {
        printf("%s",texto);
        scanf("%d",&numero);
    }

    return numero;
}
