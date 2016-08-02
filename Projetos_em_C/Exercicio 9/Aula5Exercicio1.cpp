/* MODIFICAR O ALGORITMO APRESENTADO INVERTENDO A ORDEM DA SAÍDA, ISTO É, 
A SAÍDA ORIGINAL É 11,26,34,38,49,58,87,93
E APÓS A MODIFICAÇÃO DEVERÁ SER EM ORDEM DECRESCENTE....
*/

#include<stdio.h>
#include<stdlib.h>

void select_sort(int x[], int n);

int main(int argc, char * argv[])
{
	int v[] = {58,26,93,11,38,49,87,34};
	int i = 0;
	select_sort(v,8);
	for(i=0;i<8;i++)
	{
		printf("%d\t",v[i]);
	}
	printf("\n\n");
	return 0;
}
void select_sort(int x[], int n)
{
	int i, indice, j, maior;
	for(i=n-1;i>0;i--)
	{
		maior = x[0];
		indice = 0;
		for(j=1;j<=i;j++)
		{
			if(x[j]>maior)
			{
				maior = x[i];
				indice = j;
			}
		}
		x[indice] = x[i];
		x[i] = maior;
	}
}
