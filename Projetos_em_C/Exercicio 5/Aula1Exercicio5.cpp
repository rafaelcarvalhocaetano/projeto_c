#include<stdio.h>
#include<stdlib.h>
#define L 2
#define C 2

int main()
{
	int a [L][C],b[L][C], s[L][C], i, j;
	
	printf("entre com os valores para a matriz A (2x2)");
	
	for(i=0;i<L;i++)
	for(j=0;j<L;j++)
	{
		printf("\n\nA[%d][%d]: ", i+1, j+1);
		scanf("%d", &a[i][j]);
	}
	printf("Entre com os valores para a matriz B (2x2)");
	
	
	for(i=0;i<L;i++)
	for(j=0;j<L;j++)
	{
		printf("\n\nB[%d][%d]:", i+1,j+1);
		scanf("%d", &b[i][j]);
	}
	printf("\n A matriz A \n\n\n");
	for(i=0;i<L;i++)
		{
		for(j=0;j<L;j++)
		printf("%d", a[i][j]);
		printf("\n");
		}

	printf("\nA matriz B\n\n");
	for(i=0;i<L;i++)
		{
		for(j=0;j<L;j++)
		printf("%d", b[i][j]);
		printf("\n\n");
		}
	printf("\n\nSomando....\n\n");

		for(i=0;i<L;i++)
		for(j=0;j<L;j++)
		s[i][j] = a[i][j] + b[i][j];
		
		printf("\n\nA soma entre as matrizes A + B\n\n\n");
		
	for(i=0;i<L;i++)
	{
		for(j=0;j<L;j++)
		printf("%d", s[i][j]);
		printf("\n\n\n");
	}
		system("pause>>log");
		return 1;
}
