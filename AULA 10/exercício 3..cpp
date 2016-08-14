/*Neste exemplo, o programa contém os seguintes módulos:
1. Um procedimento para a leitura da variável n.
2. Um procedimento que calcula e mostra o dobro do valor de n.
3. Uma função que verifica se o número n é par ou ímpar. Se n é par, então a função retorna 1. Se n
é ímpar, a função retona 0 (zero).*/
#include<stdio.h>
#include<stdlib.h>
int n;
void entrada(){
	printf("\n DIgite o valor de N:");
	scanf("%d", &n);
}
void dobro (){
	n=n*2;
	printf("\n Dobro de n=%d", n);
}
int paridade (){
	if(n%2==0)
	return(1);
	else return (0);
}
main(){
	int par_impar;
	entrada ();
	dobro ();
	par_impar=paridade ();
	if (par_impar==1)
	printf("\n O numero e par");
	else printf("\n O numero e impar");
	system("pause");
}
