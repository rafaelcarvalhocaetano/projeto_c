#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10

void operafile();
int elementos[MAX], inicio=0,fim=0,i=0;
int main(int argc, char * argv[])
{
	inicio = 0;
	fim = 0;
	operafile ();
	return 0;
}
void operafila()
{
	int opc = 0;
	int a;
	do
	{
		system("cls");
		printf("1- Inclui elemento na fila\n");
		printf("2- Exclui elemento da fila\n");
		printf("3- Lista fila\n");
		printf("0- Sair da fila\n");
		scanf("%d", &opc);
		
		switch (opc)
		{
			case 1: //insere elementos na fila...
			if (i > MAX)
			{
				printf("\n\nNumero maximo de elementos atingidos\n\n");
				getch();
			}
			else
			{
				printf("\n\nDigite %i elemento da fila: ", i+1);
				scanf("%d", &elementos[i]);
				i++;
				fim++;
			}
			break;
			
			case 2:   //Exclui elemento da fila, deslocamento os demais
			for(i=inicio;i<fim;i++)
			
			elementos[i] = elementos [i+1];
			fim --;
			break;
			
			case 3:  // lista fila...
			for(a = inicio;a < fim -1; a++)
			{
				printf("%i elemento: %2i \n\n", a+1, elementos[a]);
			}
			getch();
			break;
		}
	}
	while(opc != 0);
}
