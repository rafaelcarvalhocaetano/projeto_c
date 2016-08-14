/*No programa abaixo, o procedimento possui apenas um parâmetro formal (x), o qual é passado
por valor. Este parâmetro é alterado pelo valor de seu quadrado dentro do procedimento, porém tal
alteração só é válida dentro do procedimento.*/
#include<stdio.h>
#include<stdlib.h>
void quadrado (int x)
{
	x=x*x;
	printf("\n O valor de x=%d", x);
}
main()
{
	int x=4;
	quadrado (x);
	printf("\n O valor de x=%d", x);
	system("pause");
}

