#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 10

int vet[N+1];
int aux, j,i;
int cont =0;

int main()

{
	printf("\n\nMetodo de ordenação por INSERCAO");
	printf("\n\n\nForneca os elementos do vetor a ser ordenado\n\n\n");
	for(i-0;i<=N;i++)
	{
		printf("\n\nvet[%d]=",i);
		scanf("%d",&vet[i]);
	}
	for(j=2;j<=N;j++)
	{
		aux = vet[j];
		vet[0] = aux;
		i = j-1;
		while (aux<vet[i])
		{
			vet[i+1] = vet [i];
			i--;
			++cont;
		}
		vet[i+1] = aux;
		++cont;
	}
	printf("\n\nVetor ordenado pelo metodo de INSERCAO\n\n");
	for(i=0;i<=N;i++)
	printf("vet [%d]=%d\n",i,vet [i]);
	printf("\n\n Numero de comparacoes na INSERCAO: %d", cont);
	printf("\n\n\n\nFim do Programa");
	getch();
	return 0;
}
