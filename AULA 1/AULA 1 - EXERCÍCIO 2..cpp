//O programa a seguir apresenta um exemplo de utilização do operador ternário de decisão. Ele
//lê um salário e calcula o seu reajuste.....
#include <stdio.h>
#include <stdlib.h>
main(){
	float salario;
	//le o salario..
	printf("Salario e:");
	scanf("%.2f",&salario);
	//calcula o valor do novo salario usando o operador ternario de decisao....
	salario=salario<1000?salario*1.15:salario*1.07;
	//Apresenta o salario...
	printf("Novo salario=%.2f\n\n", &salario);
	system("Pause");
}
