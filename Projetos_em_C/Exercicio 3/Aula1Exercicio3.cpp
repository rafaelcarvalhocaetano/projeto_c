#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 3

float preco[MAX], quant[MAX], faturamento;
int i;

int main()
{
	printf("\nCalcula o faturamento de um armazem");
	for(i=0;i<MAX;i++)
	{
		printf("\n\nDigite o preco da mercadoria %i:", i+1);
		scanf("%f", &preco[i]);
		printf("\n\nDigite a quantidade da mercadoria %i:", i+1);
		scanf("%f",&quant[i]);
	}
faturamento = 0;
for(i=0;i<MAX;i++)
faturamento = faturamento + (preco[i] * quant[i]);

printf("\n\nO faturamento do mes foi R$ %.2f", faturamento);
printf("\n\nFim do Programa");
getch();
return 0;
}
