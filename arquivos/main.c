#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char letras[];
    int numeros;

    //wt grava��o
    //rt leitura
    //a - append
    arquivo = fopen("teste.txt","wt");

    if(arquivo == NULL){
        printf("N�o foi poss�vel abrir o arquivos ...");
        exit(0);
    }

    //fprintf(arquivo, "Ola"); -- para gravar no arquivo

    fscanf(arquivo, "%s %d", &letras, &numeros);
    printf("%s %d", letras, numeros);

    fclose(arquivo);

    return 0;
}
