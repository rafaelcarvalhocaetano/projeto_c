/*simulação de um dicionário de inglês para português, que armazena
50 palavras. Nesse caso, são utilizados 2 dois vetores de strings, sendo o primeiro para armazenar
as palavras em inglês e, o segundo, para armazenar a tradução das respectivas palavras para o
português. Em seguida, o usuário faz uma consulta por uma palavra em inglês que esteja
armazenada no vetor e o programa exibe a tradução para o português.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char ingles [50][30], portugues [50][30], palavras [30];
	int i;
	for(i=0;i<30;i++){
		printf("digite uma palavra em ingles:::\n");
		gets(ingles[i]);
		printf("\nDigite uma traducao para a palavra::\n");
		gets(portugues[i]);
	}
	printf("\n*****   Digite uma palavra em ingles para saber sua tradução  *******\n\n");
	gets(palavras);
	for(i=0;i<50;i++){
		printf("\nPalavra em protugues :");
		puts(portugues[i]);
	}
}
