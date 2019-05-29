#include <stdio.h>
#include <stdlib.h>
#define T 10

typedef struct
{
    int legajo;
    char nombre[50];
    float sueldo;
}eEmpleado;

int main()
{
    eEmpleado* list[T];
    eEmpleado* P;


    FILE* archivo;

    archivo=fopen("MOCK_DATA.csv","w");

    fscanf("archivo","%[^,],%[^,],%[^,],%[^\n]",)

    return 0;
}
