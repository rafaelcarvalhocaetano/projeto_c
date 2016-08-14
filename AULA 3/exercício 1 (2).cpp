//uso da diretiva DEFINE...	
#include<stdio.h>
#include<stdlib.h>
#define TAM 10
main(){
	int vetor[TAM];
	int i;
	for(i=0;i<TAM;i++){
		printf("Valor[%d]",i);
		scanf("%d", &vetor[i]);
	}

printf("\n\n*******DADOS DO VETOR******\n\n");
for(i=0;i<TAM;i++){
	printf("%d", vetor[i]);
}
printf("\n\n\n");
system("pause");

}
