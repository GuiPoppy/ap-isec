/******************************************************************************

Escreva uma função que desenhe uma linha de caracteres na horizontal. A função deverá
receber como parâmetros o caracter, o comprimento e o afastamento do primeiro caracter em
relação ao lado esquerdo do monitor

*******************************************************************************/
#include <stdio.h>

void chamafuncao (char car, int comp, int af)
{
    int i, j;
    
    for ( i = 0; i != af; i++)
        printf(" ");
    
    for ( j = 0; j != comp; j++)
        printf("%c", car);
    
}

int main()
{
    int comprimento, afastamento;
    char caracter;
    
    printf("Insira o caracter a ser digitado: ");
    scanf("%c", &caracter);
    printf("Insira quantos caracteres '%c' devem ser inseridos: ", caracter);
    scanf("%d", &comprimento);
    printf("Insira qual deve ser o afastamento em relacao a esquerda do ecra: ");
    scanf("%d", &afastamento);
    
    printf("=====================================================================================================================\n\n");
    
    chamafuncao(caracter, comprimento, afastamento);
    
    return 0;
}
