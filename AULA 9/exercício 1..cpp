//Conceitos iniciais sobre Programação Estruturada em C

/*O programa consiste em uma calculadora básica que realiza as operações de adição,
subtração, multiplicação e divisão. Nesse caso, o programa foi criado sem modularização.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int opcao=0;
	float a, b, r;
	while (opcao != 5)
	{
		system("cls");
		printf("\n1-Adicao");
		printf("\n2-Subtracao");
		printf("\n3-Multiplicacao");
		printf("\n4-Divisao");
		printf("\n5-Sair");
		printf("\n\n Escolha um numero:");
		scanf("%d", &opcao);
		switch(opcao)
		{
				case 1:
			{
				printf("\nDigite o primeiro numero:\n");
				scanf("%f", &a);
				printf("\nDigite o segundo numero:\n");
				scanf("%f", &b);
				r=a+b;
				printf("\n O resultado e= %0.2f",r);
				getch();
				break;
			}
				case 2:
			{
				printf("\n Digite o primeiro numero:");
				scanf("%f", &a);
				printf("\n Digite o segundo numero:");
				scanf("%f", &b);
				r=a-b;
				printf("\n O resultado e=%0.2f", r);
				getch();
				break;
			}
				case 3:
			{
				printf("\n Digite o primeiro numero:");
				scanf("%f", &a);
				printf("\n Digite o segundo numero:");
				scanf("%f", &b);	
				r=a*b;
				printf("\n O resultado e=%0.2f", r);
				getch();
				break;
			}
				case 4:
			{
				printf("\n Digite o primeiro numero:");
				scanf("%f", &a);
				printf("\n Digite o segundo numero:");
				scanf("%f", &b);	
				r=a/b;
				printf("\n O resultado e=%0.2f", r);
				getch();	
				break;
			}
			default:
			printf("\n**********ESTA OPCAO NAO EXISTE**********");
		}
	}
	system("pause");
}
