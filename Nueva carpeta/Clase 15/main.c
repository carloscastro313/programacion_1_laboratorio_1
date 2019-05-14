#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    int* Pr;
    int* Pq;

    p=10;
    Pq=&p;
    Pr=Pq;

    printf("%p\n", Pq);
    printf("%p\n", Pr);
    printf("%d\n", *Pq);
    printf("%d\n", *Pr);


   /*int* x=NULL;
    int v=10;
    char* Py=NULL;
    char c;

    x=&v;
    Py=&c;
    printf("Ingrese letra: ");
    fflush(stdin);
    scanf("%c",Py);

    printf("Letra: %c\n",*Py);
    printf("Letra: %c\n",c);
    printf("valor: %i\n",*x);
    printf("Direcion de memoria: %p\n",&v);
    printf("Direcion de memoria: %p\n",&x);
    printf("Direcion de memoria: %p\n",x);*/
    return 0;
}
