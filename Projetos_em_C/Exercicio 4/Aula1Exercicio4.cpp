#include<stdio.h>
#include<stdlib.h>
#define DIM 1000

int main()
{
	int n[DIM], i=0, q;
	
	do
	{
		if(i==0)
		{
			printf("\n\n\tEste programa armazena na tela %d numero naturais", DIM);
			printf("Entre com a quantidade de numeros a armazenas ate %d:", DIM);
		}
		
		else
		printf("Lembre-se a quantidade deve ser maior que 0 e menor ou igual a %d", DIM);
		scanf("%d", &q);
		i++;
	}
	while (!(q > 0 && q<=DIM));
	printf("\n\nArmazenando.....\n\n\n");
	for(i=0;i<q;i++)
	n[i] = i;
	printf("\n\nMostrando os numeros armazenados..");
	
	for(i=0;i<q,i++)
	printf("%d", n[i]);
	
	system("pause>>log");
	return 1;
}
