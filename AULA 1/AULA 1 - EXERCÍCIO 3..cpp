//o programa calcula o valor de um produto e apresenta o seu icms...
#include<stdio.h>
#include<stdlib.h>
// constante para definir...
#define ICMS 0.18
main(){
	float preco;
	//le o pre�o do produto....
	printf("Qual o valor do produto:");
	scanf("%f",&preco);
	//calcula o valor do icms...
	float valorICMS=preco*ICMS;
	//apresenta o valor...
	printf("ICMS=%.2f\n\n", valorICMS);
	system("pause");
}
