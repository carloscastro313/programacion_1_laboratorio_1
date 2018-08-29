#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int suma=0;
	int numero;
	int promedio=0;
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Ingrese numero:");
		scanf("%d",&numero);
		
		suma=suma+numero;
		
	}
	
	promedio=suma/i;
	printf("%d",promedio);
	
	return 0;
}
