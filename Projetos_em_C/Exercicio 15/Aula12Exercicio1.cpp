#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10

void operafila();
void inicializa();
void cheia();

int elementos[MAX], inicio = 0, fim=0, i=0;
int main(int argc, char*argv[])
{
	inicializa();
	operafila();
	cheia();
	return 0;
}
void operafila()
{
	int opc = 0;
	int a;
	do
	{
		system("cls");
		printf("1- Inclui elementos da fila\n");
		printf("2- Exclui elementos da fila\n");
		printf("3- Lista fila\n");
		printf("0- Sair da fila\n");
		scanf("%d", &opc);
		switch (opc)
		{
			case 1:
				if(cheia())
				{
					printf("\n\nNumero maximo de elementos atingidos\n");
					getch();
				}
				else
				{
					printf("\n\nDigite o %i elemento da fial: ", i+1);
					scanf("%d", &elementos[i]);
					i++;
					fim++;
				}
				break;
				
				case 2:
					elementos[inicio] = 0;
					inicio ++;
					if(inicio == fim)
						{
							inicio = 0;
							fim = 0;
						}
						break;
						
				case 3:
					system("cls");
					int a;
					if( vazio())
						{
							printf("\n\nA fila esta vazia!!!!\n\n\n\n\n\n");
							getch();
						}
						else
						{
							for(a=inicio;a<fim;a++)
							{
								printf("\n\n%d %c elemento: %2i\n", a+1, 167, elementos[a]);
							}
							getch();
						}
						break;
		}
	}
	while (opc != 0);
}
void inicializa()
{
	if (vazia())
	{
		inicio =0;
		fim =0;
	}
}
int vazia ()
{
	return inicio ==0 && fim == 0;
}
int cheia ()
{
	return (fim>=MAX);
}
