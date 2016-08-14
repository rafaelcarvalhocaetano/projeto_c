/*O programa abaixo mostra uma função cujo objetivo é verificar e retornar o maior valor entre
duas variáveis (a e b), as quais são definidas como parâmetros formais. Na chamada da função, no
programa principal, as variáveis p e q são definidas como parâmetros reais.*/

#include<stdio.h>
#include<stdlib.h>
int verificar_maior(int a, int b)
{
	if(a>b)
	return(a);
	else
	return (b);
}
main(){
	int p=7, q=10;
	int maior;
	maior=verificar_maior(p,q);
	printf("\nMaior elemento=%d", maior);
}
