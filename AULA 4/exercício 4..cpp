/*o programa faz a leitura de uma matriz 5x3 de elementos reais, calcula e apresenta a média dos valores que estão acima de 20,75;
apresenta, também, os elementos da matriz.*/
#include<stdio.h>
#include<stdlib.h>
#define linhas 5
#define colunas 3
main(){
	float matriz[linhas][colunas];
	int i,j;
	//lendo os dado para as matriz...
	printf("\n *****informe os valores****\n");
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("O valor[%d][%d]", i,j);
			scanf("%f",matriz[i][j]);
		}
	}
	// soma os elementos superiores a 20,75// guarda a quantidade de elementos somados // apresenta os dados da matriz na tela
float soma=0;
int quantidade=0;
printf("DADOS da MATRIZ");
for(i=0;i<linhas;i++){
	for(j=0;j<colunas;j++){
		printf("%.2f", matriz[i][j]);
		if(matriz[i][j]>20.75){
			soma+=matriz[i][j];
			quantidade++;
		}
	}
float media=0;
if(quantidade>0){
	media=soma/quantidade;
}
printf("\nMedia=%.2f\n\n", media);
system("pause");
}

}
	
