/*Criar um programa que crie e inicialize uma matriz de elementos inteiros de acordo com a tabela abaixo.
Apresentar os elementos da matriz na tela.*/
#include<stdio.h>
#include<stdlib.h>
#define linhas 3
#define colunas 5
main(){
	int matriz [linhas][colunas]={
	{3, 5, 2, 1, 10, },	{15, 12, 18, 4, 6, }, {7, 9, 13, 16, 20, }	
	};
	//apresentação dos dados da matriz...
	int i,j;
	printf("\n*****DADOS DA MATRIZ*******\n");
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("%2d", matriz[i][j]);
		}
	}

	printf("\n\n\n");
	system("pause");
}
