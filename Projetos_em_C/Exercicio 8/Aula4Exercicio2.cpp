#include<stdio.h>
#include<stdlib.h>
#define DIM 1000
int main()
{
	int n[DIM],i=0,q;
	
	do
	{
		if(i==0)
		{
			printf("\n\nEste programa armazena na tela ate %d numeros reais", DIM);
			printf("\n\nEnter com a quantidade de numeros a armazenas ate %d",DIM);
		}
		
		else
		printf("\n\nLembre-se a quantidade de numeros nao pode ser manor que 0 ou igual a %d",DIM);
		scanf("%d",&q);
		i++;
	}
	while
	(!(q >0 && q<=DIM));
	
	printf("\n\nARMAZENANDO O NUMEROS........\n\n");
	
	for(i=0;i<q;i++)
	n[i]=i;
	
	
	printf("\n\nMostrando os numeros armazenados\n\n");
	
	for(i=0;i<q;i++)
	printf("%d", n[i]);
	
	
	
	system("pause>>log");
	return 1;
}
