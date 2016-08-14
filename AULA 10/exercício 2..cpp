/*Para ilustrarmos melhor esta outra forma para estruturarmos o programa, abaixo segue o
mesmo exemplo da Calculadora, no qual os módulos são criados após o programa principal.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
float a, b, r;
void entrada();
float adicao ();
float subtracao ();
float multiplicacao ();
float divisao ();
main()
{
	int opcao=0;
	float result;
	while (opcao!=0)
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
void entrada()
{
	printf("\nDigite o primeiro numero:\n");
	scanf("%f", &a);
	printf("\nDigite o segundo numero:\n");
	scanf("%f", &b);
}
float adicao ()
{
	r=a+b;
	return(r);
}
float subtracao ()
{
	r=a-b;
	return(r);
}
float multiplicacao ()
{
	r=a*b;
	return(r);
}
float divisao ()
{
	r=a/b;
	return(r);

}

