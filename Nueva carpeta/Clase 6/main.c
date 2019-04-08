#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 10


int main()
{
    int len,  comparacion;
    char palabra[T], palabraDos[T];

    printf("Ingrese un nombre:");

    //fgets(palabra ,T ,stdin);
    //scanf("%[^\n]", palabra);
    gets(palabra);

    len=strlen(palabra);

    strcpy(palabraDos,"philipa");
    //strncpy(palabraDos,palabra,2);
    //comparacion=strcmp(palabra,"philipa");
    comparacion=stricmp(palabra,"philipa");
    strupr(palabra);
    strlwr(palabraDos);
    strcat(palabraDos, palabra);

    printf("%s\n", palabra);
    printf("%s\n", palabraDos);
    printf("%d\n", len);
    printf("%d\n", comparacion);

    return 0;
}
