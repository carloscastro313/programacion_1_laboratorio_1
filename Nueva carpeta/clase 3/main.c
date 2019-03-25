#include <stdio.h>
#include <stdlib.h>


//prototipo o firma

//tipo_de_dato identificador([parametro]);

int pedirNumeros();
int sumarNumeros(int ,int);
void resultado(int);

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    numeroUno=pedirNumeros();
    numeroDos=pedirNumeros();

    suma=sumarNumeros(numeroUno ,numeroDos);

    resultado(suma);

    return 0;
       }



int sumarNumeros(int unNumero ,int otroNumero)
{
    int resultado;

    resultado=unNumero+otroNumero;

    return resultado;
}

int pedirNumeros()
{
    int numero;

    printf("Ingrese numero: ");
    scanf("%d",&numero);

    return numero;
}
void resultado(int result)
{
    printf("La suma es: %d",result);
}
