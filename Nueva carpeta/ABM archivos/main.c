#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    char nombre[50];
    char apellido[50];
    int legajo;
    float salario;
}eEmpleado;

int main()
{
    char opcion;
    int i=0;
    eEmpleado* Empleado;
    eEmpleado* list[5]={NULL};

    FILE* datos;

    do
    {
        printf("\n\n1.Alta\n2.Baja\n3.Modificaciones\n4.Lista\n5.Salir\n\n");
        printf("Ingrese opcion:");
        fflush(stdin);
        scanf("%c",&opcion);
    switch(opcion)
    {
    case '1':
        Empleado= (eEmpleado*) malloc(sizeof(eEmpleado));

        list[i]=Empleado;

        printf("\n\nEmpleado n°%d\n\n",i);

        printf("Nombre: ");
        fflush(stdin);
        gets(Empleado->nombre);
        printf("\nApellido: ");
        fflush(stdin);
        gets(Empleado->apellido);
        printf("\nLegajo: ");
        scanf("%d", Empleado->legajo);
        printf("\nSueldo: ");
        scanf("%f", Empleado->sueldo);
        i++;
    break;
    case '2':
        //printf("\n\n%s--%s--%d--%f",(list[0]).nombre,(list[0]).apellido,(list[0]).legajo,(list[0]).salario);
    break;
    case '3':
    break;
    case '4':
    break;
    default:
    break;
    }
    }while(opcion!='5');
    return 0;
}
