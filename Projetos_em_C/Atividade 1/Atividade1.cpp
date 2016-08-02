#include <stdio.h>
#include <stdlib.h>
#define TAM 9
void bsort(int v[], int t);
int main()
{
 int i;
 int v[TAM]= {1,2,3,4,5,6,7,8,9};
 bsort(v,TAM);


 for (i=0; i<TAM ; i++)
 printf("v[%d]=%d\n", i, v[i]);
 printf("\n");
 system("pause");
 return 0;
}
void bsort(int vet[], int t)
{
 int i,j,w,k, cont_trocas=0;

 for (i=0; i<t-1; i++)
 {
 for (j=0; j< t-(i+1); j++)
 {
 if (vet[j] > vet[j+1]) // trocas
 { cont_trocas++;
 k=vet[j];
 vet[j] = vet[j+1];
 vet[j+1] = k;
 }


 }

 for (w=0; w<TAM ; w++)
 printf("vet[%d]=%d\n", w, vet[w]);
 system("pause");
 }
 printf("\nTotal de trocas %d\n",cont_trocas);
 }
