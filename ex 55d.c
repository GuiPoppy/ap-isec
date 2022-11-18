/******************************************************************************

Escreva uma função que desenhe um triângulo. A função deverá receber como parâmetros o
caracter, o afastamento do primeiro caracter da base do triângulo, relativamente ao lado
esquerdo do monitor e a altura do triângulo.

*******************************************************************************/
#include <stdio.h>

void chamafuncao (char car, int af, int alt)
{
    int i, j, k;
    
    if (alt > af)
        printf("Impossivel fazer triangulo!!!");
    
    else
    {
    
        for (j = 1; j <= alt; j++)
        {
            if (j == 1)
            {
                for ( i = af; i != 0; i--)
                    printf(" ");
         
                for (k = 1; k <= j; k++)
                    printf("%c", car);
                
                printf("\n");
            }
            
            else if (j == 2)
            {
                for ( i = af - (j-1); i != 0; i--)
                    printf(" ");
         
                for (k = 0; k <= j; k++)
                    printf("%c", car);
                
                printf("\n");
            }
            
            else
            {
                for ( i = af - (j-1); i != 0; i--)
                    printf(" ");
         
                for (k = 1; k <= (j*2)-1; k++)
                    printf("%c", car);
                
                printf("\n");
            }
        }
    }
    
}

int main()
{
    char car;
    int af, alt;
    
    printf("Insira os dados solicitados: \n");
    printf("Caracter: ");
    scanf("%c", &car);
    printf("Afastamento: ");
    scanf("%d", &af);
    printf("Altura: ");
    scanf("%d", &alt);
    printf("\n");

    chamafuncao(car, af, alt);

    return 0;
}
