
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20]="alberto";
    char otroNombre[20]="Anibal";
    int cantidad;
    int compara;
    int i;
    i=0;

    while(nombre[i]!='\0')
    {
        //if(tolower(nombre[i]=='a'))

            printf("%c",nombre[i]);

        i++;
    }
    printf("%d",i);
    /*for(i=0; i<strlen(nombre); i++)
    {
        if(tolower(nombre[i]=='a'))
        {
            printf("%c",nombre[i]);
        }

    }*/

    /*strcat(otroNombre," ");
    strcat(otroNombre,nombre);
    strupr(otroNombre);
    printf("%s",otroNombre);*/
    return 0;
}
