#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a,b;
	
	printf("\n\nEntre com 2 numeros:");
	scanf("%f %f", &a,&b);
	
	
	printf("\n\nEste programa sempre mostra seus dois numeros em ordem crescente...\n\n\n");
	
	
	if(a < b)
	printf("%.2f %.2f", a,b);
	else
	printf("\n\n%.2f %.2f", b,a);
	
	
	
	system("pause>>log");
	return 1;
}
