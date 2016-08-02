#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 2

int n;
float vet [MAX];
void cria (void)
{
	n=0;
}
void push (float v)
{
	if (n==MAX)
	{
		printf("\n\nCAPACIDADE DA PILHA ESTOURADO\n\n");
		exit (1);
	}
	vet[n]=v;
	n++;
}
float pop ()
{
	float v;
	if (vazia())
	{
		printf("\n\nPILHA VAZIA\n\n");
		exit(1);
	}
	v=vet[n-1];
	n--;
	return v;
}
void ptpilha ()
{
	int a;
	system("cls");
	for(a=n; a>=0; a--)
	printf("\n\nitem %3.2f\n\n", vet[a]);
	getch();
}
int vazia ()
{
	return (n==0);
}
void libera (p)
{
	n=0;
}
main ()
{
	int a;
	char op;
	float n1=0, n2=0, tt;
	cria ();
	printf("\n\nDIGITE A EXPRESSÃO A SER CALCULADA\n formato (numero) (operador)(numero)");
	scanf("%f %c %f", &n1, &op, &n2);
	push (n1);
	push (n2);
	n1=pop();
	n2=pop();
	
	
	if(op == '+')
	tt=n2+n1;
	if(op== '-')
	tt = n2-n1;
	if(op == '*')
	tt = n2*n1;
	if(op == '/')
	tt = n2/n1;
	if(op == $)
	tt = pow (n2, n1);
	
	printf("\n\n%f\n\n", tt);
	system("pause");
}
