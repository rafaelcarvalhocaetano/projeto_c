#include<stdio.h>
#include<stdlib.h>
#define T 3

int main()
{
	float salario[T], aumento[T], atual[T];
	int i;
	
	for(i=0;i<T;i++)
	{
		printf("\n\tDigite o salario :");
		scanf("%f", &salario[i]);
		
		aumento [i] = salario [i] * 0.10;
		atual [i] = aumento [i] + salario [i]; 
	}
	printf("\n\tSalario\tAumento\tAtualizado\n\n");
	printf("----------------------------------------");
	
	for(i=0;i<T;i++)
	printf("\n\n\t%.2f\n\t%.2f\n\t%.2f", salario[i], aumento[i], atual[i]);
printf("\n");
system("pause");			
}
