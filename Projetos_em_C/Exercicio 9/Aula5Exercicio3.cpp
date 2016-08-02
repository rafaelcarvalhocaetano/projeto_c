/*EM UMA CLASSE DE 20 ALUNOS, APRESNETE AS NOTAS DELES EM ORDEM DECRESCENTE E,
AO LADO DA NOTA, SE O ALUNO ESTÁ APROVADO OU REPROVADO, CONSIDERANDO QUE PARA
ESTAR APROVADO, DEVE OBTER UMA NOTA MAIOR OU IGUAL A 6 E REPROVADO, MANOR DO QUE 6.
*/

#include<stdio.h>
#include<stdlib.h>

void select_sort(int x[], int n);

int main(int argc,char*argv[])
{
	int v[] = {5,4,3,9,10,7,5,8,8,9,10,1,0,5,8,9,1,8,6,5};
	int i =0;
	select_sort(v,20);
	for(i=0;i<20;i++)
	{
		printf("%2d - ", v[i]);
		if(v[i]>=6)
		printf("Aprovado\n\n");
		else
		printf("\n\nReprovado\n\n");
	}
	printf("\n\n");
	return 0;
}
void select_sort(int x[], int n)
{
	int i,indice,j,maior;
	for(i=0;i<n-1;i++)
	{
		indice = i;
		maior = x[i];
		for(j=i+1;j<n;j++)
		{
			if(x[j]>maior)
			{
				maior = x[j];
				indice = j;
			}
		}
		x[indice] = x[i];
		x[i] = maior;
	}
}
