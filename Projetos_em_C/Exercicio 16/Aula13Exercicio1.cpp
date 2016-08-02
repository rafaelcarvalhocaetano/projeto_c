#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int n;
char vet [MAX];
void cria (void)
{
	n = 0; //inicializa com zero elementos...
}
void push ( char v)
{
	if (n == MAX)
	{
		//capacidade esgotada
		printf("\n\nCAPACIDADE DA PILHA ESTOUROU. \n\n");
		exit(1); // aborta programa....
	}
	//insere elementos na próxima posição livre...
	vet [n] = v;
	n++;
}
char pop ()
{
	char v;
	int (vazia());
	{
		printf("\n\nPILHA VAZIA..\n\n");
		exit(1);  //aborta programa....
	}
	//retira elementos do topo
	v = vet [n-1];
	n--;
	return v;
}
int vazia ()
{
	return (n == 0);
}
void libera ()
{
	int a=0;
	n = 0;
	for(a=0; a<MAX; a++)  //limpa a pilha
	{
		pop ();
	}
}
main ()
{
	int a=0;
	char exp[50], car, tcar;
	system("cls");
	gets (exp);
	while (1)
	{
		if (exp [a] == '\0') break;
		car = exp [a];
		if (car == '(' || car == '[' || car =='{') push (car);
		if(car==')' || car==']' || car=='}')
		{
			tcar = pop (car);
			if (! (car==')' && tcar == '(' || car==']' && tcar== '[' || car=='}' && tcar=='{'))
			push(car);
		}
		a++;
	}
	if(vazia())
	printf("\n\nEXPRESSÃO VALIDA !!!!");
	else
	printf("\n\nEXPRESSÃO INVALIDA !!!!");
	system("pause");
}
