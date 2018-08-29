#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int n1;
	int n2;
	int multiplicacion;
	int potencia;
	
	do{
		printf("Ingrese un numero:");
		scanf("%d",&n1);			
	}while(n1<0);
	system("cls");
	do{
		printf("Ingrese un numero:");
		scanf("%d",&n2);			
	}while(n2<0);	
	
	multiplicacion=n1*n2;
	printf("La multiplicacion: %d\n",multiplicacion);
	
	potencia=pow(n1,2);
	printf("Potencia: %d",potencia);
	
	return 0;
}
