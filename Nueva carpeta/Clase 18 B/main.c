#include <stdio.h>
#include <stdlib.h>


int main()
{

    FILE* miArchivo;
    //int* x= (int*)malloc(sizeof(int));
    //*x=4;
    int *y= (int*)malloc(sizeof(int)) ;

    /*miArchivo=fopen("misDatos.dat","wb");

    fwrite(x,sizeof(int),1,miArchivo);

    //fprintf(miArchivo,"%d",x);
    fclose(miArchivo);*/

    miArchivo=fopen("misDatos.dat","rb");

    fread(y,sizeof(int),1,miArchivo);

    fclose(miArchivo);

    printf("%d",*y);

    return 0;
}
