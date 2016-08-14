/*as variáveis pa e pb como ponteiros para número real (float).
Observe que, na linha 11, ocorre a atribuição da soma dos valores das variáveis a e b à variável r, de
forma indireta, por meio da utilização dos ponteiros.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	float a, b, r;
	float *pa, *pb;
	a=7.3;
	b=7.3;
	pa=&a;
	pb=&b;
	r=*pa+*pb;
	printf("\n A soma de a + b via ponteiro =%.2f", r);
	system("pause");	
}
