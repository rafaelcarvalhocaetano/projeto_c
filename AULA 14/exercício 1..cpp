//Inicialização de estruturas e estruturas aninhadas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Data{
	int dia, mes, ano;
};
struct Endereco{
	char rua[100];
	char numero[10];
	char bairro [30];
};
struct Pessoa{
	char nome [80];
	struct Endereco endereco;
	struct Data dataNasc;
};
main(){
	struct Pessoa umaPessoa;
	printf("Nome:");
	gets(umaPessoa.nome);
	printf("rua:");
	gets(umaPessoa.endereco.rua);
	printf("Numero:");
	gets(umaPessoa.endereco.numero);
	printf("Bairro:");
	gets(umaPessoa.endereco.bairro);
	printf("Dia:");
	scanf("%d", &umaPessoa.dataNasc.dia);
	printf("Mes:");
	scanf("%d", &umaPessoa.dataNasc.mes);
	printf("Ano:");
	scanf("%d", &umaPessoa.dataNasc.ano);
	printf("\n***DADOS DE UMA PESSOA***\n");
	printf("Nome:");
	puts(umaPessoa.nome);
	printf("Endereco: %s, ",umaPessoa.endereco.rua);
	printf("%s -", umaPessoa.endereco.numero);
	printf("%s\n", umaPessoa.endereco.bairro);
	printf("Data de Nascimento: %d/", umaPessoa.dataNasc.dia);
	printf("%d/", umaPessoa.dataNasc.mes);
	printf("%d\n\n", umaPessoa.dataNasc.ano);
	system("pause");
}
