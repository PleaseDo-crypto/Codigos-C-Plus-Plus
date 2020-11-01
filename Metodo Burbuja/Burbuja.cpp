#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int vector[6];
	int i, j, temp;
	
	//Entrada de Datos
	printf("Ingrese los numeros a ordenar\n");
	
	
		for(i=0; i<5; i++)
		{
			//cout<<i+1;//Imprime la posición de i + 1 (1,2,3,4,5,...n)
			cin>>vector[i];
			
		}
	
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{				//Comparaciones
			if(vector[j]<vector[i])
			{
				temp=vector[j];
				vector[j]=vector[i];
				vector[i]=vector[j];
				vector[i]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		cout<<vector[i]<<" ";
	}
	
	return 0;
}
