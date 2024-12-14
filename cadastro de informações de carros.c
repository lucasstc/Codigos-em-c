
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Data
{
    int dia;
    int mes;
    int ano;
};
struct Carro
{
    char modelo[10];
    char marca[10];
    int ano;
    float preco;
    struct Data data;
};
void lerCarros(struct Carro carros[], int qnt)
{
    for(int i=0;i<qnt;i++)
    {
        printf("\nCarro %d", i+1);
        printf("\nModelo: ");
        fgets(carros[i].modelo, sizeof(carros[i].modelo), stdin);
        carros[i].modelo[strcspn(carros[i].modelo,"\n")]='\0';
        printf("\nMarca: ");
        fgets(carros[i].marca, sizeof(carros[i].marca), stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")]='\0';
        printf("\nAno de fabricacao: ");
        scanf("%d", &carros[i].ano);
        printf("\nPreco: ");
        scanf("%f", &carros[i].preco);
        getchar();
        printf("\nDia da compra: ");
        scanf("%d", &carros[i].data.dia);
        printf("\nMes: ");
        scanf("%d", &carros[i].data.mes);
        printf("\nAno: ");
        scanf("%d", &carros[i].data.ano);
    }
}
float maiorPreco(struct Carro carros[], int qnt, float maisCaro)
{
    for(int i=0;i<qnt;i++)
    {
        if(carros[i].preco>maisCaro)maisCaro=carros[i].preco;
    }
    return maisCaro;
}


int main()
{
    int qnt;
    printf("\nQuantos carros? ");
    scanf("%d", &qnt);
    struct Carro carros[qnt];
    lerCarros(carros, qnt);
    float maisCaro=0;
    maisCaro=maiorPreco(carros, qnt, maisCaro);
    printf("\nPreco do carro mais caro: %.2f", maisCaro);

    return 0;
}
