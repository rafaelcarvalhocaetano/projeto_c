/*O programa solicita que o usuário digiteuma string, faz a inversão dos caracteres e verifica se a palavra é um palíndromo*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int palavra[20], palavra_invertida[20];
	int i, j=0, tam;
	printf("digite a string:");
	gets (palavra);
	tam=strlen (palavra);//tam irá armazenar o tamanho da string...
	for(i=tam-1;i>0;i--){
		palavra_invertida[j]=palavra[i];
		j++;
	}
	palavra_invertida[j]='\0';
	if(strcmp(palavra, palavra_invertida)==0);
	printf("A palavra invertida é::");
	else printf("A palavra não é polidromo!");
	system("pause");	
	
}
