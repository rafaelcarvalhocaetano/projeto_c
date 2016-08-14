/*fazer a leitura de um vetor A com 10 elementos numéricos inteiros. Em seguida, é feito o cálculo do total
de elementos ímpares existentes no vetor e, também, o percentual do valor total de números ímpares em 
relação à quantidade total de elementos armazenados no vetor.*/
#include<stdio.h>
#include<stdlib.h>
#define TAM 10
main(){
	int vetor[TAM];
	int i;
	for(i=0;i<TAM;i++){
		printf("Valor [%d]:",i);
		scanf("%d",&vetor[i]);
	}
	//quanta a quantidade de impares....
	int quantidade=0;
	for(i=0;i<TAM;i++){
		if(vetor[i]%2!=0){
			quantidade++;
		}
	}
//calcula o percentual em relação ao total dos valores.....
float percentual=(float)quantidade/TAM;
printf("Quantidade de impares=%d\n", quantidade);
printf("Percentual=%.2f%%\n", percentual*100);
system("pause");
}
