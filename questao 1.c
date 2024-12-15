#include <stdio.h>
double somatorio(int n, float x, int i)
{
    if(i>n)
    {
        return 0;
    }
    double termo=x/(2*i);
    if(i%2==0)
    {
        termo=-termo;
    }
     return termo+somatorio(n, x, i+1);
}
int main()
{
    int n;
    float x;
    printf("\nn: ");
    scanf("%d", &n);
    printf("\nx: ");
    scanf("%f", &x);
    float soma=somatorio(n, x, 1);
    printf("\n%f", soma);
    return 0;
}
