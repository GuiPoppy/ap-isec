/******************************************************************************

Escreva uma função que desenhe um quadro constituído por três colunas. Na primeira coluna
devem surgir os números de um até dez, na segunda coluna o quadrado dos números da
primeira coluna e na terceira coluna os seus cubos. 

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void chamafuncao()
{
    int i;
    
    printf("Tabela numero/quadrado/cubo: \n\n");
    
    for (i = 1; i <=10; i++)
        printf("%d   %.1f   %.2f\n", i, pow(i,2), pow(i,3));
}

int main()
{
    chamafuncao();
    
    return 0;
}
