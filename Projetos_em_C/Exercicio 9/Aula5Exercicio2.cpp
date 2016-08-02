// MODIFIQUE O ALGORITMO APRESENTADO REDUZINDO UMA ITERAÇÃO POR PASSAGEM....
#include<stdio.h>
#include<stdlib.h>


void select_sort(int x[], int n);

int main(int argc, char*argv[])
{
	int v[] = {26,58,49,38,11,93,87,34};
	int i= 0;
	select_sort(v,8);
	for(i=0;i<8;i++)
	{
		printf("%d\t",v[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
void select_sort(int x[], int n)
{
	int i, indice,j,maior;
	for(i=0;i<n-1;i++)
	{
		indice = 1;
		maior = x[i];
		for(j=i+1;j<n;j++)
		{
			if(x[j] < maior)
			{
				maior = x[j];
				indice = j;
			}
		}
		x[indice] = x[i];
		x[i] = maior;
	}
}

