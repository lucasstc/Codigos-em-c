
#include <stdio.h>
int Mdc(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return Mdc(y, x%y);
    }
}

int main()
{
    printf("Maximo divisor comum");
    int x;
    int y;
    printf("\nNumero 1: ");
    scanf("%d", &x);
    printf("\nNumero 2: ");
    scanf("%d", &y);
    if(x<y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    int resultado=Mdc(x, y);
    printf("\n%d", resultado);

    return 0;
}
