/*Neste programa, a letra “a” é substituída pela letra “i” em uma string de tamanho 15.
Por fim, a string alterada é exibida.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char palavra[50];
	int i, tam;
	printf("\n Digite a string::::");
	gets(palavra);
	tam=strlen(palavra);
	for(i=0;i<tam;i++){
		if(palavra[i]=='a')
		palavra [i]='i';
	}
	puts(palavra);
	system("pause");
}
