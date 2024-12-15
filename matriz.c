#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float somatorio(float *matriz, int l, int c)
{
    float soma=0;
    for(int i=0;i<l;i++)
    {
        soma+=*(matriz +i*c+(c-i-1));
    }
    return soma;
}
int main()
{
    printf("\nSoma da diagonal secundaria");
    int l,c;
    float soma=0;
    printf("\nLinhas: ");
    scanf("%d", &l);
    printf("\nColunas: ");
    scanf("%d", &c);
    float *matriz=(float *)malloc(l*c*sizeof(float));
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nValor: ");
            scanf("%f", (matriz+i*c+j));
        }
    }
    soma=somatorio(matriz, l, c);
    printf("\n%f", soma);
    free(matriz);
    
    return 0;
}
