
#include <stdio.h>
int qtdeDigitos(int n, int cont)
{
    if(n/10==0)
    {
        return 1;
    }
    else
    {
        cont++;
    }
    return 1 + qtdeDigitos(n/10 , cont);
}
int main()
{
    printf("\nQuantidade de digitos\n\n");
    int n;
    printf("\nValor: ");
    scanf("%d", &n);
    int soma=qtdeDigitos(n, 0);
    printf("\n%d", soma);
    
    return 0;
}