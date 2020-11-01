#include <iostream>
#include <conio.h>

int main()
{
	
	int numeros[6];
	int i,j,aux,min;
	
	printf("Metodo de Ordenamiento por Seleccion\n");
	
	//Entrada a la N datos.
	printf("Introduzca los numeros a ordenar: \n");
		for(i=0;i<5;i++)
		{
			scanf("%i", &numeros[i]);
		}
	
	//Encontrar el mínimo de los números
		for(i=0;i<5;i++)
		{
			min = i;
				for(j=i+1; j<5; j++)
				{
					if (numeros[j] < numeros[min])
					{
						min = j;
					}
				}
				aux= numeros[i];
				numeros[i] = numeros[min];
				numeros[min] = aux;
		}
		
		printf("\n\nOrdenamiento de Seleccion:\n");
		for(i=0;i<5;i++)
		{
			printf("->%i \n", numeros[i]);
		}
		
		getch();
		return 0;
}
