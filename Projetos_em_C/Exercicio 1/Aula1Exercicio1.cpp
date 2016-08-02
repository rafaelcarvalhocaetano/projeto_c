#include<stdio.h>
#include<stdlib.h>

int main()
{
	float salario, aumento, atual;
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("\nDigite o salario :");
		scanf("%f", &salario);
		aumento= salario * 0.10;
		atual = aumento + salario;
		printf("\n\n\t%.2f\t%.2f\t%.2f", salario, aumento, atual);
	}
	system("pause");
}
