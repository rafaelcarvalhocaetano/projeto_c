/*Criar um programa que leia 8 elementos inteiros em um vetor A. Construir um vetor B do mesmo tipo e tamanho com os elementos do vetor A multiplicados por 3. O elemento B[0] recebe o elemento A[0] * 3, o elemento
B[1] recebe o elemento A[1] * 3 e assim por diante, até a posição 7 do vetor. Apresentar os elementos do vetor B.*/
#include <stdio.h>
#include<stdlib.h>
main(){
	int A[8], B[8];
	int i;
	//leitura do vetor A...
	printf("******INFORME OS DADOS DO VETOR A**********");
	for(i=0;i<8;i++){
		printf("A[%d]",i);
		scanf("%d",&A[i]);
	}
//calculo do vetor B....
	for(i=0;i<8;i++){
	B[i]=A[i]*3;
	}
//apresenta o elementos do vetor B.....
	printf("*********INFORME OS DADOS DO VETOR B********");
	for(i=0;i<8;i++){
		printf("B[%d]=%d\n",i,B[i]);
	}
system("pause");
}


