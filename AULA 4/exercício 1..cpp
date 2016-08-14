/*O programa cria uma matriz 3x4 de valores inteiros e solicita os seus
dados ao usuário, calcula a soma dos elementos da matriz e apresenta os dados da matriz e a soma
calculada.*/
#include<stdio.h>
#include<stdlib.h>
#define linhas 3
#define colunas 4
main(){
	//declaraçção da matriz...
	int matriz [linhas][colunas];
	// i representa as LINHAS e j representa COLUNAS...
	int i,j;
	//leitura dos dados para a matriz....
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("\nMatriz[%d][%d]", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	//calcula a soma dos valores e apresenta os dados da matriz.....
	int soma=0;
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			soma+=matriz[i][j];
			printf("%d", matriz[i][j]);
		}
	}
	printf("\n\n");
	printf("\nSoma=%d\n", soma);
	system("pause");
}
