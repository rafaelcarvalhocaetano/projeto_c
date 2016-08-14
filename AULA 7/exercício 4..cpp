/*Neste programa, uma variável ponteiro armazena o endereço de memória de uma variável n do
tipo int. Em seguida, é feita a divisão de n por 5, sem utilizar o valor de n diretamente.*/
#include <stdio.h>
#include <stdlib.h>
main(){
	int n=5;
	int *pn;
	pn=&n;
	*pn=*pn/5;
	printf("\n O valor de n = %d\n\n", *pn);
	system("pause");
}

