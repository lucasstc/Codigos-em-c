#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[1000];
    int valor;
    int cont=0;
    int posicoes[1000];
    srand(time(NULL));
    for(int i=0;i<1000;i++)
    {
        vetor[i]=1+rand()%99;
    }
    printf("\nPesquise um valor: ");
    scanf("%d", &valor);
    for(int i=0;i<1000;i++)
    {
        if(valor==vetor[i])
        {
            posicoes[cont]=i;
            cont++;
        }
    }
    if(cont>0)
    {
        printf("\nO numero aparece %d vezes.", cont);
        printf("\nPosicoes: \n\n");
        for(int i=0;i<cont;i++)
        {
            printf(" %d,", posicoes[i]);
        }
    }
    else
    {
        printf("\nO numero nao foi encontrado.");
    }
    
    return 0;
}
