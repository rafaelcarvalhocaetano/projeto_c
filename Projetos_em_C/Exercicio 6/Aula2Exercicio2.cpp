#include<stdio.h>
#include<stdlib.h>


int main()
{
	float a,b,c;
	
	
	printf("Entre com 3 numeros...");
	scanf("%f%f%f", &a,&b,&c);
	
	
	
	printf("\n\neste programa sempre mostra seus 3 numeros em ordem crescente....\n\n\n");
	
	
	
	if(a <=b && b<=c)
	printf("\n\n%.2f%.2f%.2f", a,b,c);
	
	else
	if(a<=c && c<=b)
	printf("\n\n\n%.2f%.2f%.2f", a,c,b);
	
	
	else
	if(b<=c && c<=a)
	printf("\n\n%.2f%.2f%.2f",b,c,a);
	
	else
	if(c<=a && a<=b)
	printf("\n\n\n%.2f%.2f%.2f",c,a,b);
	
	else
	printf("\n\n\n%.2f%.2f%.2f",c,b,a);
	
	
	
	
	system("pause>>log");
}
