/******************************************************************************

Escreva uma função capaz de indicar se um número inteiro é primo ou não

*******************************************************************************/
#include <stdio.h>

int chamafuncao (int numero)
{
    int i, soma=0;
    
    for (i = 2; i < numero; i++)    
        if (numero % i == 0)
            soma++;
    
    if (soma >= 1)
        return 0;
        
    else
        return 1;
    
}

int main()
{
    int numero, retorno;
    
    printf("Insira um numero: ");
    scanf("%d", &numero);
    
    retorno = chamafuncao(numero);
    
    if (retorno == 1)
        printf("O numero %d é primo!", numero);
    
    else
        printf("O numero %d nao é primo!", numero);
    
    return 0;
}
