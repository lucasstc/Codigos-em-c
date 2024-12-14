
#include <stdio.h>
int calcSoma(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10 + calcSoma(n/10);
}
int main()
{
    printf("Soma dos algarismos\n\n");
    int n;
    printf("\nValor: ");
    scanf("%d", &n);
    int res=calcSoma(n);
    printf("\n%d", res);

    return 0;
}
