#include<stdio.h>
#include<stdlib.h>

int const MAXTAM = 1000;
int Pilha [MAXTAM];
int Topo;

void Pilha_Construtor()
{
	Topo = -1;
}

bool Pilha_Vazia()
{
	if (Topo==-1)
	return true;
	else
	return false;
}

bool Pilha_Cheia()
{
	if(Topo==MAXTAM-1)
	return true;
	else
	return false;
}


int Pilha_Tamanho()
{
	return Topo+1;
}



bool Pilha_Push(int valor)

{ //igual a inserir..
	if (Pilha_Cheia())
	{
		return false;
	}
	else
	{
	Topo ++;
	Pilha[Topo] = valor;
	}
}


bool Pilha_Pop(int &valor)

{ //desempilhar..
	if(Pilha_Vazia())
	{
		return false;
	}
	else
	{
		valor=Pilha[Topo];
		Topo--;
		return true;
	}
}


bool Pilha_Consulta(int &valor)
{
	if(Pilha_Vazia())
	{
		return false;
	}
	else
	{
		valor=Pilha[Topo];
		return true;
	}
}





int main(){
	
	
	int Valor;
	
	Pilha_Construtor();
	Pilha_Push(5);
	Pilha_Push(7);
	Pilha_Push(9);
	Pilha_Push(1);
	Pilha_Push(2);
	
	
	printf("\n\n Quant. itens da pilha: %d\n\n\n", Pilha_Tamanho());
	while(Pilha_Pop(Valor))
	{
		printf("\n %d \n", Valor); // imprime o valor..
	}
	printf("\n\n Quant. itens da pilha: %d\n\n\n", Pilha_Tamanho());
	
	
	system("pause");
	return 0;
}
