/*Neste programa é feita a contagem de todas as vogais existentes em uma string de tamanho
30. Por fim, é mostrada a quantidade de vogais.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char palavra [30];
	int i=0, qtde=0;
	printf("\nDigite a string\n");
	gets(palavra);
	while (palavra [i] != '\0'){
		if(palavra[i] =='a'|| palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u');
	
	qtde++;
}
	i++;

	printf("\nA quantidade  de vogais  da palavra e:%d\n", qtde);
	system("pause");
}
