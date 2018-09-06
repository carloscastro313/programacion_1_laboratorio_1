#include <stdio.h>
#include <stdlib.h>

int miFuncion(int*);

int main()
{
    int miEntero=3;
    int estado;

    estado=miFuncion(&miEntero);
    printf("el nuevo valor es %d",miEntero);

    if(estado==1)
    {
        printf("El valor es mayor a 15");
    }else
    {
        printf("es menor o igual a 15");
    }
    return 0;
}

int miFuncion(int* pValor)
{
    int queDevuelve=0;
    int aux;
    aux=(*pValor);

    aux +=10;

    if(*pValor>15)
    {
        queDevuelve=1;
    }
    (*pValor)=aux;
    return queDevuelve;
}
