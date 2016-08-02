#include<stdio.h>
#include<stdlib.h>

void select_sort(char x[], int n);
void imprimevetor(char v[], int n);

int main(int argc, char* argv[])
{
	char v[] = "DACB";
	int i =0;
	imprimevetor(v,4);
	printf("\n\n");
	select_sort(v,4);
	printf("\n\n\n");
	imprimevetor(v,4);
	system("pause");
	return 0;
}
void select_sort(char x[], int n)
{
	int i,indice,j,maior;
	for(i=n-1;i>0;i--)
	{
		maior = x[0];
		indice = 0;
		for(j=1;j<=i;j++)
		{
			if (x[j]>maior)
			{
				maior = x[j];
				indice = j;
			}
		}
		x [indice] = x[i];
		x[i] = maior;
		imprimevetor(x,n);
	}
}
void imprimevetor(char v[], int n)
{
	int i = 0;
	for(i=0;i<4;i++)
	{
		printf("\n\n%c\t", v[i]);
	}
	printf("\n\n\n");
}
