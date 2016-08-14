/*Programação estruturada ou modular - tipos de módulos//

Para exemplificarmos a utilização dos procedimentos e funções, abaixo segue o programa da
calculadora escrito de forma estruturada ou modular. Observe que a entrada e saída de dados foram
transformadas em procedimentos e as operações matemáticas em funções.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
float a, b, r;
void entrada()
{
	printf("\nDigite o primeiro numero:");
	scanf("%f", &a);
	printf("\nDigite o segundo numero:");
	scanf("%f", &b);
}
float adicao()
{
	r=a+b;
	return (r);
}
float subtracao()
{
	r=a-b;
	return(r);
}
float multiplicacao()
{
	r=a*b;
	return(r);
}
float divisao()
{
	r=a/b;
	return(r);
}
main(){
	int opcao=0;
	float result;
	while (opcao!=5)
	{
		system("cls");
		printf("\n1-adicao");
		printf("\n2-subtracao");
		printf("\n3-multiplicacao");
		printf("\n4-divisao");
		printf("\n5-sair");
		printf("\n******escolha uma opcao******\n");
		scanf("%f", &opcao);
		switch (opcao)
		{
			case 1:
				{
					entrada();
					result=adicao ();
					printf("\na+b=%f", result);
					break;
				}
			case 2:
				{
					entrada();
					result=subtracao ();
					printf("\na-b=%f", result);
					break;
				}
			case 3:
				{
					entrada();
					result=multiplicacao ();
					printf("\n a*b=%f", result);
					break;
				}
			case 4:
				{
					entrada();
					result=divisao ();
					printf("\na/b=%f", result);
					break;
				}
			default:
			printf("\nESTA OPCAO NAO EXISTE\n");
		}	
	}
system("pause");
}
