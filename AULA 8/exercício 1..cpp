/*um programa que possui uma variável inteira x
inicializada com o valor 25, um ponteiro px e um ponteiro para ponteiro Ppx. Na linha 7, o endereço
da variável x foi atribuído à px e, na linha 8, foi atribuído o endereço do ponteiropxao ponteiro Ppx.
Neste momento, Ppx passa a apontar para px.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	int x=25;
	int *px, **Ppx;
	px=&x;
	Ppx=&px;
	printf("Conteudo da variavel x por meio da variavel Ppx=%d", **Ppx);
	system("pause");
}
