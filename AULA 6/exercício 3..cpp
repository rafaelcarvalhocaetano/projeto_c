/*vetor de strings de tamanho 30 para armazenar os alunos de
uma determinada turma. Suponha que o usuário deseja fazer uma busca por um nome neste vetor.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char alunos [30][60], nome[60];
	int i;
	for(i=0;i<30;i++){
		printf("\nDigite um nome de um aluno:");
		gets(alunos[i]);
	}
	printf("\ndigite o nome do aluno a ser procurado:");
	gets(nome);
	for(i=0;i<30;i++){
		if(strcmp(alunos [i], nome)==0){
			printf("\nO nome foi encontrado....");
		}
	}
system("pause");
}
