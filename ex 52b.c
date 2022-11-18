/******************************************************************************

Modifique a função escrita na alínea a) de modo a que a função receba como parâmetros o
valor a ser escrito na primeira coluna, o número de valores a serem exibidos e o incremento
entre os valores.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void chamafuncao(int NumInicial, int quantidadevalores, int incremento)
{
    int i, j;
    
    for (i = NumInicial, j = 0; j < quantidadevalores; i += incremento, j++)
        printf("%d   %.1lf   %.1lf\n", i, pow(i,2), pow(i,3));
}

int main()
{
    int NumInicial, quantidadevalores, incremento;
    
    printf("Qual o valor inicial? ");
    scanf("%d", &NumInicial);
    printf("Quantos valores tera a tabela? ");
    scanf("%d", &quantidadevalores);
    printf("Qual o incremento de um numero para o proximo? ");
    scanf("%d", &incremento);
    
    chamafuncao(NumInicial, quantidadevalores, incremento);
    
    return 0;
}
