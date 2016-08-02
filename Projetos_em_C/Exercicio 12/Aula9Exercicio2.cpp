#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define C 80
#define L 100

int pesquisasequencial(char[], char[], int);

int main()
{
	char nomes [C][L], nome [C];
	int i=0,indice;
	
	printf("\n\nEntre com algum nome, tecle apenas enter sem digitar para sair");
	
	for(;;)
	{
		printf("\nNome %d: ",i+1);
		fflush(stdin);
		gets(nomes[i]);
		if(!nomes[i][0])
		break;
		i++;
	}
	printf("\n\nEntre com um nome a buscar:");
	fflush(stdin);
	gets(nome);
	indice = pesquisasequencial(nomes,nome,i);
	if(indice==i)
	printf("\n%s nao localizado\n\n");
	else
	printf("\n\n %s esta na posicao %d da matriz\n\n\n", nome, indice);
	system("pause");
}
int pesquisasequencial(char nomes[L][C], char nome[], int i)
{
	int j;
	for(j=0;j<i;j++)
	
	if(strcmp(nomes[j], nome)==0)
	break;
	return j;
}
