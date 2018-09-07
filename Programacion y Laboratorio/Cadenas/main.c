#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20]="alberto";
    char otroNombre[20]="Anibal";
    int cantidad;
    int compara;

    /*strcpy(nombre,otroNombre);*/

    /*printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);*/

    //printf("%s",nombre);
    //compara=stricmp(nombre, otroNombre);
    compara=strcmp(nombre, otroNombre);
    if(compara==0)
    {
        printf("\nson iguales");
    }else
    {
        if(compara>0)
        {
            printf("%s esta despues que %s",nombre,otroNombre);
        }else
        {
            printf("%s esta despues que %s",otroNombre,nombre);
        }

    }
    printf("\ncompara: %d",compara);
    /*cantidad=strlen(nombre);

    printf("\nLa cantidad de caracteres es %d",cantidad);*/

    return 0;
}
