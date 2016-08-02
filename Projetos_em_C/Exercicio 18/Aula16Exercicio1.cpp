#include<stdio.h>
#include<stdlib.h>

struct pasta{
	int idade;
	char nome[40];
	float peso, altura;
	struct pasta *proximo;
};
