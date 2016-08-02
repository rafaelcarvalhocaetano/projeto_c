#include<stdio.h>
#include<stdlib.h>
#define N 10

void mostra (int x[], int n)
{
	for(int i=0;i<n;i++)
	printf("\nx[%i]=%d", i, x[i]);
	
	printf("\n\n\n");
}
void ler_vetor(int x[],int n)
{
	printf("Metodo de selecao");
	printf("\n\nForneca os elementos do vetor a ser ordenado");
	for(int i=0;i<n;i++)
	{
		printf("\nvetor x[%i]=",i);
		scanf("%i", &x[i]);
	}
}
void select_sort(int x[], int n)
{
	int i,j,menor, k, troca=0;
		for(i=0;i<(n-1);i++)
		{
			menor = i;
			for(j=(n+1);j<n;j++)
			{
				if(x[j]<x[menor])
				menor = j;
			}
			if(i!=menor)
			{
				troca++;
				k = x[i];
				x[i]= x[menor];
				x[menor] = k;
			}
			system("cls");
			printf("\n___Interacao %d", i+1);
			mostra(x,n);
			system("pause");
		}
		printf("Total de Trocas [%d]\n",troca );
		system("pause");
}
main()
{
	int vet[N]= {1,35,25,2,33,24,78,55,32,3};
	select_sort(vet,N);
}

