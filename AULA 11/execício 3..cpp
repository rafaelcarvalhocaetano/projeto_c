/*No programa abaixo, o procedimento possui apenas um parâmetro (n), o qual é passado por
referência. Para tanto, é necessário declarar o parâmetro formal como um ponteiro (asterisco antes
do nome do parâmetro), que permitirá a alteração do parâmetro formal reflita sobre o parâmetro
real. Na chamada do procedimento, é necessário passar o endereço de memória de n.*/
#include<stdio.h>
#include<stdlib.h>
void dobro (int *n)
{
	*n=2*(*n);
	printf("\n O valor de n=%d", *n);
}
main()
{
	int n = 4;
	dobro (&n);
	printf("\n O valor de n e %d", n);
	system("pause");	
}
