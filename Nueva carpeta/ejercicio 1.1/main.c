#include <stdio.h>
#include <stdlib.h>

int PedirNota();
float sacarPromedio(int suma, int Cantidad);
int aprobarMateria(int notaMinima ,int nota);
void ejercicioUno();

int main()
{
    ejercicioUno();

    return 0;
}
int PedirNota()
{
    int numeroIngresado;
    do{
        printf("Ingrese numero entre 0 y 10: ");
        scanf("%d",&numeroIngresado);

    }while(!(numeroIngresado>=0&&numeroIngresado<=10));

    return numeroIngresado;
}
float sacarPromedio(int suma, int Cantidad)
{
    float retorno;
    retorno=(float)suma/Cantidad;
    return retorno;
}
int aprobarMateria(int notaMinima ,int nota)
{
    int flag;

    if(nota>notaMinima){
        flag=1;

    }else{
        flag=0;

    }

    return flag;
}

void ejercicioUno()
{
    int suma ,sumaAprobados ,sumaDesaprobado ,datoRecibido ,i ,notaMinima ,aprobacion ,aprobados ,desaprobados;
    float promedioAprobados ,promedioDesaprobado;

    sumaAprobados=0;
    sumaDesaprobado=0;
    suma=0;
    aprobados=0;
    desaprobados=0;

    printf("Ingrese nota minima: ");
    scanf("%d",&notaMinima);

    for(i=0;i<5;i++){
        datoRecibido=PedirNota();
        suma=suma+datoRecibido;

        aprobacion=aprobarMateria(notaMinima ,datoRecibido);

        if(aprobacion==1)
        {
            sumaAprobados=sumaAprobados+datoRecibido;
            aprobados++;
        }else
        {
            sumaDesaprobado=sumaDesaprobado+datoRecibido;
            desaprobados++;
        }

    }

    promedioAprobados=sacarPromedio(sumaAprobados ,aprobados);
    promedioDesaprobado=sacarPromedio(sumaDesaprobado ,desaprobados);

    printf("La cantidad de aprobados es: %d\n",aprobados);
    printf("El promedio de aprobados es: %.2f\n",promedioAprobados);
    printf("El promedio de desaprobadoses: %.2f",promedioDesaprobado);

}
