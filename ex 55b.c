/******************************************************************************

Escreva uma função que desenhe duas linhas de caracteres na vertical. A função deverá
receber como parâmetros o caracter, a altura, a espessura das linhas e o afastamento,
relativamente ao lado esquerdo do monitor.

*******************************************************************************/
#include <stdio.h>

void chamafuncao (char car, int af, int dist, int alt, int esp)
{
    int i, j, k, l;
    
    for (j = 0; j < alt; j++)
    {
        for (i = 0; i < af; i++)
            printf(" ");
        
        for (k = 0; k < esp; k++)
            printf("%c", car);
        
        for (l = 0; l < dist; l++)
            printf(" ");
        
        for (k = 0; k < esp; k++)
            printf("%c", car);
        
        printf("\n");
    
    }        
}

int main()
{
    char car;
    int afastamento, distancia, altura, espessura;
    
    printf("Insira o caracter desejado: ");
    scanf("%c", &car);
    
    printf("Insira os valores de: Afastamento da esqueda do ecrã, Distancia entre as colunas, Altura da coluna e Espessura da coluna, respectivamente: ");
    scanf("%d %d %d %d", &afastamento, &distancia, &altura, &espessura);
    
    printf("\n\n");
    
    chamafuncao (car, afastamento, distancia, altura, espessura);
    
    return 0;
}
