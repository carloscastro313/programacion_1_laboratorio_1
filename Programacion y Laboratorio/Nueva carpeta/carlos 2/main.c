#include <stdio.h>
#include <stdlib.h>

void calcular(int*);//declaracion de prototipo("*"puntero)

int main()
{
    int x=5;
    calcular(&x);//"&"para indicar direccion de memoria
    printf("X=%d", x);
    return 0;
}

void calcular(int* p)//se utiliza para ingresar dirrecion en memoria
{
    *p=10;//"*p"cambia el valor en la direccion de memoria indicado
}
