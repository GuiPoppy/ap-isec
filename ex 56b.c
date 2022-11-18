/******************************************************************************

     0
    012
   01234
  0123456
 012345678

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void chamafuncao(int num)
{
    int linha, esp, aux = num, n;
    
    for (linha = 0; linha <= num / 2; linha++)
    {
        for (esp = 0; esp < aux / 2; esp++)
            printf(" ");
            
        for ( n = 0; n <= linha*2; n++)
            printf("%d", n);
        
        aux = aux - 2;
        printf("\n");
    }
    
    
    
    
}

int main()
{
    int numero;
    
    printf("Insira um numero impar para formar seu triangulo: ");
    scanf("%d", &numero);
    
    while (numero % 2 == 0)
    {
        printf("O numero deve ser impar! Digite novamente: ");
        scanf("%d", &numero);
    }
    
    chamafuncao(numero);

    return 0;
}
