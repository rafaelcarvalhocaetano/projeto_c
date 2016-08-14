// manipulação de string em c...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char palavra[20];
	char i;
	printf("Digite a string:");
	gets (palavra);
	while (palavra[i]!="?\0")
	{
		printf("\n %c", palavra [i]);
		i++;
	}
system("pause");
}
