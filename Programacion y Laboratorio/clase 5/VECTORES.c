#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miVector[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero");
        scanf("%d",&miVector[i]);
    }
    for(i=0;i<5; i++)
    {
        if(miVector[i]%2==0)
        {
        printf("%d\n", miVector[i]);
        }
    }


    //miVector[2]=158;
    //printf("%d", &miVector[2]);
    //printf("%d",sizeof(double));

    return 0;
}
