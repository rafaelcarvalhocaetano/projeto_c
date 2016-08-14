// o programa le um vetor de 5 notas e o armazena-os....
#include<stdio.h>
#include<stdlib.h>
main(){
	//declaração do vetor...
	float notas[5];
	int i;
	// le os dados do vetor
	for(i=0;i<5;i++){
		printf("Digite a nota do aluno:", i);
		scanf("%.2f",&notas[i]);
	}
//calcula a soma das notas e apresenta cada nota  na tela...
float soma=0;
for(i=0;i<5;i++){
	soma=soma+notas[i];
	printf("Nota %d=%.1f\n\n",i,notas[i]);
}
//calcula e apresenta a média das notas...
float media=soma/5;
printf("Media das notas=%.1f\n", media);
system("pause");
}
