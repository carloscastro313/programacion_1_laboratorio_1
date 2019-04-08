#include <stdio.h>
#include <stdlib.h>
#define T 10


int main()
{
    char palabra[T];

    printf("Ingrese un nombre:");

    fgets(palabra ,T ,stdin);
    //scanf("%[^\n]", palabra);
    //gets(palabra);

    printf("%s", palabra);


    return 0;
}
