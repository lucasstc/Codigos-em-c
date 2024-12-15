#include <stdio.h>
#include <string.h>
struct fichaAlunos
{
    char nome[10];
    int matricula;
    float nota;
};
void lerInformacoes(struct fichaAlunos aluno[], int qnt)
{
    for(int i=0;i<qnt;i++)
    {
        printf("\nNome: ");
        getchar();
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")]='\0';
        printf("\nMatricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("\nNota: ");
        scanf("%f", &aluno[i].nota);
    }
}
int main()
{
    int qnt;
    printf("\nQuantos alunos: ");
    scanf("%d", &qnt);
    struct fichaAlunos aluno[qnt];
    lerInformacoes(aluno, qnt);

    return 0;
}
