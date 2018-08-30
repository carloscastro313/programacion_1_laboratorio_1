#include <stdio.h>
#include <stdlib.h>

//void sumar(void);caso1
//void sumar(int n1, int n2);caso2
//int sumar(void)caso3;
int sumar(int ,int );
int main()
{
    int suma;
    int numerouno;
    int numerodos;

    printf("Ingrse el primer numero: ");
    scanf("%d",&numerouno);
    printf("Ingrse el segundo numero: ");
    scanf("%d",&numerodos);

    suma=sumar(numerouno,numerodos);

    printf("El resultado de la suma es: %d",suma);

    return 0;


}

/*void sumar(void)
{
    int numerouno;
    int numerodos;
    int suma;

    printf("Ingrse el primer numero: ");
    scanf("%d",&numerouno);
    printf("Ingrse el segundo numero: ");
    scanf("%d",&numerodos);

    suma=numerouno+numerodos;

    printf("El resultado de la suma es: %d",suma);
}*/


/*void sumar(int n1, int n2)
{
    int suma;

    suma=n1+n2;

    printf("El resultado de la suma es: %d",suma);
}*/
/*int sumar(void)
{
    int numerouno;
    int numerodos;
    int suma;

    printf("Ingrse el primer numero: ");
    scanf("%d",&numerouno);
    printf("Ingrse el segundo numero: ");
    scanf("%d",&numerodos);

    suma=numerouno+numerodos;
    return suma;
}*/


int sumar(int n1, int n2)
{

    int suma;

    suma=n1+n2;

    return suma;
}



