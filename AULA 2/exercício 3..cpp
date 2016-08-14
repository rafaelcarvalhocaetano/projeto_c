/*O programa a seguir armazena 10 elementos reais em um vetor e, depois, apresenta seus valores na tela.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	//declaração do vetor de 10 elementos....
	float vetor[10];
	int i;
	//leitura dos dados do vetor....
	printf("**********INFORME OS VALORES DO VETOR***********\n");
	for(i=0;i<10;i++){
		printf("[%d]",i);
		scanf("%.2f", vetor[i]);
	}
//Apresentar os dados do vetor...
printf("\n\n\n*************DADOS DO VETOR**************\n\n\n");
for(i=0;i<10;i++){
	printf("%.2f\n", &vetor[i]);
}
system("pause");
}
