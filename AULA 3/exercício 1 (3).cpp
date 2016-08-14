/*Criar um programa que leia três vetores (A, B e C) com 5 elementos inteiros cada. Construir um vetor D, sendo
esse a junção dos três outros vetores. Desta forma, D deve ter o triplo de elementos dos outros 3 vetores.
Apresentar os elementos do vetor D.*/

#include<stdio.h>
#include<stdlib.h>
//declaração do vetor ABC....
#define TAM_ABC 15
//declaração do vetor D....
#define TAM_D 15
main(){
	//declaração dos vetores....
	int A[TAM_ABC],B[TAM_ABC],C[TAM_ABC],D[TAM_D];
	int i;
	//leitura do vetor A...
	printf("\n*********INFORME OS DADOS DO VETOR A**************\n");
	for(i=0;i<TAM_ABC;i++){
		printf("A[%d]",i);
		scanf("%d", &A[i]);
	}
	//declaração do vetor B.....
	printf("\n**********INFORME OS DADOS DO VETOR B*************\n");
	for(i=0;i<TAM_ABC;i++){
		printf("B[%d]", i);
		scanf("%d",&B[i]);
	}
	//declaração do vetor C....
	printf("\n****************INFORME OS DADOS DO VETOR C*********\n");
	for(i=0;i<TAM_ABC;i++){
		printf("C[%d]", i);
		scanf("%d", &C[i]);
	}
	//criação do vetor D....
	for(i=0;i<TAM_ABC;i++){
	D[i]=A[i];
	D[i+5]=B[i];
	D[i+10]=C[i];
	}
	//impressao do vetor D...
	printf("\n*******VALORES DO VETOR D*******\n");
	for(i=0;i<TAM_D;i++){
		printf("D[%d]=%d", i, D[i]);
	}
printf("\n\n");
system("pause");
}
