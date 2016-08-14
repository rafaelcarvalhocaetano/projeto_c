/*O programa solicita que o usuário digite os nomes de 10 alunos e os armazena em um
vetor. Em seguida, os nomes presentes no vetor são exibidos na tela.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char alunos [10][60];
	int i;
	for(i=0;i<10;i++){
		printf("\n***Digite um nome de um aluno:::");
		gets(alunos[i]);
	}
	printf("\n***ALUNO DA TURMA::\n");
	for(i=0;i<10;i++){
		puts(alunos[i]);
	}
	system("pause");
}
