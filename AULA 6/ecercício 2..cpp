/*O programa solicita a usuário os nomes de 20 candidatos que irão prestar um concurso e os armazena em um vetor de strings.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char candidatos [20][60];
	int i;
	for(i=0;i<20;i++){
		printf("\nDigite um nome de um candidato:");
		gets(candidatos[i]);
	}
	printf("\nCandidato com o nome comece com a letra A:\n");
	for(i=0;i<20;i++){
		if(candidatos[i][0]='A'){
			puts(candidatos [i]);
		}
	}
system("pause");
}

