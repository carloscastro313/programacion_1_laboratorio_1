#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    int size;
    int i;
    Employee* aux;
    LinkedList* listaEmpleados = ll_newLinkedList();


    Employee* e1=(Employee*) malloc(sizeof(Employee));
    Employee* e2=(Employee*) malloc(sizeof(Employee));
    Employee* e3=(Employee*) malloc(sizeof(Employee));
    Employee* e4=(Employee*) malloc(sizeof(Employee));

    e1->id =1;
    strcpy(e1->nombre,"pedro");
    e1->sueldo=5000;
    e1->horasTrabajadas=10;

    e2->id =2;
    strcpy(e2->nombre,"maria");
    e2->sueldo=50000;
    e2->horasTrabajadas=15;

    e3->id =3;
    strcpy(e3->nombre,"jose");
    e3->sueldo=15000;
    e3->horasTrabajadas=7;

    e4->id =4;
    strcpy(e4->nombre,"jesus");
    e4->sueldo=6000;
    e4->horasTrabajadas=1000;

    printf("%d",ll_len(listaEmpleados));
    ll_add(listaEmpleados, e1);
    ll_add(listaEmpleados, e2);
    ll_add(listaEmpleados, e3);
    ll_add(listaEmpleados, e4);
    printf("%d",ll_len(listaEmpleados));



    for(i=0;i<ll_len(listaEmpleados);i++)
    {


        aux= (Employee*)  ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n",aux->id,aux->nombre,aux->sueldo,aux->horasTrabajadas);
    }

    printf("\n\nElimino\n\n");

    ll_remove(listaEmpleados,2);
    for(i=0;i<ll_len(listaEmpleados);i++)
    {


        aux= (Employee*)  ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n",aux->id,aux->nombre,aux->sueldo,aux->horasTrabajadas);
    }
    printf("\n\nLUEGO DE ORDENAR\n\n");

    ll_sort(listaEmpleados, employee_compareByName,1);

    for(i=0;i<ll_len(listaEmpleados);i++)
    {


        aux= (Employee*)  ll_get(listaEmpleados, i);

        printf("%d--%s--%d--%d\n",aux->id,aux->nombre,aux->sueldo,aux->horasTrabajadas);
    }
    /*do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);*/
    return 0;
}
