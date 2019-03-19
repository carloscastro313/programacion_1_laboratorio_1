#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    for(;;)
    {
        printf("%d\n", i);
        i--;

        if(i==2)
        {
            break;
        }

    }




    /*int i;
    for(i=10;i>0;i--)
    {
        printf("%d\n", i);
    }*/

    /*int i;
    for(i=0;i<10;i++)
    {
        printf("%d\n", i+1);
    }*/



    /*int i=0;

    while(i<10)
    {
        i++;//i=i+1;
        printf("%d\n", i);

    }*/
    printf("El valor de i es: %d", i);
    return 0;
}
