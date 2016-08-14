/*	no programa é feita a leitura de um vetor de 12 elementos de valores reais e,
em seguida, o menor, o maior e a média dos valores lidos são apresentados na tela.*/
#include<stdio.h>
#include<stdlib.h>
#define TAM 12
main(){
	float numeros[TAM];
	int i;
	printf("\n******INFORME OS VALORES DOS VETORES*********\n");
	for(i=0;i<TAM;i++){
		printf("Valor[%d]::", i);
		scanf("%f", &numeros[i]);
	}
	//assume inicialmente que o primeiro elemento do vetor é o maior e menor valor...
	float menor = numeros[0];
	float maior = numeros[0];
	float soma = numeros[0];
	// começa pelo segundo elemento já que o primeiro foi considerado....
	for(i=0;i<TAM;i++){
		soma+=numeros[i];
		if(numeros[i]<menor){
			menor=numeros[i];
		}
	}
		if(numeros[i>maior]){
			maior=numeros[i];
		}
		
system("pause");
}
