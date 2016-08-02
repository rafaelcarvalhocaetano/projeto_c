#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define FALSO 0
#define VERDADEIRO 1
#define N 10

int vet [N+1];
int i,k,achou;
int main()
{
	printf("\n\nMetodo de pesquisa sequencial\n\n");
	printf("\n\n\nforneca os elementos do vetor a ser pesquisado\n\n");
	
	for(i=1;i<=N;i++)
	{
		printf("\n\nvet[%d]=",i);
		scanf("%d",&vet[i]);
	}
	while (VERDADEIRO)
	{
		printf("\n\nChave a ser procurada (Digite -1 para terminar):");
		scanf("%d",&k);
		if (k==-1)
		
		break;
		achou = FALSO;
		i = 1;
		while (achou==FALSO && i<=N)
		{
			if(vet[i]==k)
			{
				printf("\n\nA chave %d esta na posicao %d do vetor\n\n",k,i);
				achou = VERDADEIRO;
			}
			else
			i++;
		}
		if (achou==FALSO)
		printf("\n\nA chave %d nao se encontra no vetor \n\n", k);
	}
	printf("\n\n\nFIM DO PROGRAMA");
	getch();
	return 0;
}
