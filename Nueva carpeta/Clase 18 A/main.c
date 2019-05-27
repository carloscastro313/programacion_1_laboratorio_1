#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* archivo;
    char nombre[50]={"Carlos Castro"};
    archivo=fopen("misDatos2.txt","w");
    if(archivo!=NULL)
    {
        fprintf(archivo,"%s\npero a nisman los mandaron a suicidar",nombre);
        fclose(archivo);
    }else
    {
        printf("ERROR");
    }

    char buffer[50];
    archivo=fopen("misDatos2.txt","r");
    while(!feof(archivo))
    {
        fgets(buffer,50,archivo);
        printf("%s",buffer);
    }
    fclose(archivo);

    return 0;
}
