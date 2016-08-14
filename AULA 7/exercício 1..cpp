#include<stdio.h>
#include<stdlib.h>
main(){
int x=15;
int *px;
px=&x;
printf("\n Endereco de memoria de x=%p",&x);
printf("\nConteudo da variavel x por meio do ponteiro px=%d", *px);
printf("\nConteudo da variavel px = %p", px);
printf("\n Endereco de memoria de px=%p", &px);
system("pause");
}
