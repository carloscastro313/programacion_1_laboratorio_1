#include <stdio.h>
#include <stdlib.h>
#define T 4
void insertion(int[], int);
int main()
{
    int vector[T]={4,3,1,2};
    int i;

    insertion(vector, T);

    for(i=0;i<T;i++)
    {
        printf("%d",vector[i]);
    }
    return 0;
}

void insertion(int vector[], int len)
{
    int i;
    int j;
    int temp;

    for(i=0;i<len;i++)
    {
        temp=vector[i];
        j=i-1;
        while(j>=0 && temp<vector[j])
        {
            vector[j+1]=vector[j];
            j--;
        }
        vector[j+1]=temp;
    }

}
