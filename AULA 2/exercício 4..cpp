/*O programa a seguir faz a leitura de dois vetores (denominados A e B) com 20 elementosinteiros. No vetor C, cada elemento é calculado como a 
subtração de um elemento do vetor A com um elemento correspondente do vetor B, ou seja, a operação de processamento é baseada na operação
C[I] = A[I] - B[I]. Ao final, os elementos do vetor C são apresentados.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	//declaração dos vetores....
	int A[20], B[20], C[20];
	int i;
	//leitura do vetor A...
	printf("\n\n\n\n\n*******INFORME OS VALORES DO VETOR A*************\n\n\n\n\n");
	for(i=0;i<20;i++){
		printf("A[%d]", i);
		scanf("%d", &A[i]);
	}
	//leitura do vetor B.......
	printf("\n\n\n\n\n**********INFORME O VALOR DO VETOR B**************\n\n\n\n\n");
	for(i=0;i<20;i++){
		printf("B[%d]",i);
		scanf("%d",&B[i]);
	}
	//calculo e impressao do vetor C.....
	printf("\n\n\n\n\n**********VALOR DO VETOR C***********\n\n\n\n\n");
	for(i=0;i<20;i++){
	C[i]=A[i]+B[i];
	printf("C[%d]=%d\n",i,C[i]);
	}
printf("\n\n\n\n\n");
system("pause");
}
