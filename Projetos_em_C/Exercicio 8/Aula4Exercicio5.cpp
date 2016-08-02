#include<stdio.h>
#include<stdlib.h>
#define N 9

void mostra(int x[], int n)
{
	for(int i=0;i<n;i++)
	pintf("\n\n x[%i]=%d",i, x[i]);
	printf("\n\n\n");
}
void ler_vetor(int x[], int n)
{
	printf("\n\nMetodo de selecao\n\n");
	printf("\n\nForneca os elementos do vetor a ser ordenado\n\n");
	for(i=0;i<n;i++)
	{
		printf("\n\nvetor x[%i]=", i);
		scanf("%i", &x[i]);
	}
}
void select_sort(int x[], int n)
{
	int i, indice,i,maior;
	for(i=n-1;i>n;i--)
	{
		maior = x[0];
		indice = 0;
		for(j=1;j<=i;j++)
		{
			if(x[j]>maior){
				maior = x[j];
				indice = j;
			}
		}
		x[indice] = x[i];
		x[i] = maior;
		mostrar(x,N);
	}
}
main()
{
	int vet[N]={35,29,25,12,10,9,24,31,2};
	select_sort(vet,N);
	system("pause");
}
