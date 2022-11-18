/******************************************************************************

Todos os anos divisíveis por 400, e todos os divisíveis por 4 e não divisíveis por 100 são anos
bissextos. Usando estas informações, escreva uma função que receba como parâmetro o ano, e
retorne o valor 1 se for um ano bissexto ou 0 se não for. Exemplos: 1600 é divisível por 400, o
ano 1600 foi bissexto. Similarmente, 1988 é divisível por 4 e não divisível por 100, o ano 1988
foi também bissexto

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int chamafuncao (int ano)
{
    int retorno;
    
    if (ano % 400 == 0 || (ano%4 == 0 && ano % 100 != 0))
        return 1;
    
    else 
        return 0;
}

int main()
{
    int ano, retorno;
    
    printf("Insira o ano para saber se ele foi/é bissexto: ");
    scanf("%d", &ano);
    retorno = chamafuncao(ano);
    
    if (retorno == 1)
        printf("\nO ano %d foi bissexto", ano);
    
    if (retorno == 0)
        printf("\nO ano %d nao foi bissexto", ano);
    

    return 0;
}
