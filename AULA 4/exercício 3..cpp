/*leitura de uma matriz 5x5 de elementos inteiros, calcula e apresenta a soma da diagonal principal.
Além disso, apresenta, também, os elementos da matriz.*/
#include<stdio.h>
#include<stdlib.h>
#define linhas 5
#define colunas 5
main(){
	int matriz [linhas][colunas];
	int i, j;
	printf("\n *****INFORME OS DADOS DA MATRIZ*****\n");
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("Valor[%d][%d]", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	//calcula a soma da diagonal principal e apresenta os dados da matriz na tela....
	int soma=0;
	printf("\n****DADOS DA MATRIZ*****\n");
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
		printf("%d", matriz[i][j]);
		// se o indece da linha for igual ao da coluna, então o elemento está na diagonal principal.....
			if(i==j){
				soma+=matriz[i] [j];
			}
		}
	}
	printf("\n\n");
	printf("\nSoma=%d\n\n", soma);
	system("pause");
}
