/*TAD: aluno*/
#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct aluno
{
    char nome[100];
    int matricula;
    float IRA;
};

Aluno *recebe_dados(void)
{
    Aluno *estudante = (Aluno *)malloc(sizeof(Aluno));
    if (estudante == NULL)
    {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", estudante->nome);
    printf("Informe a matricula: \n");
    scanf("%d", &estudante->matricula);
    printf("Informe o IRA:\n");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void exibir_dados(Aluno * estudante){
    printf("nome do aluno: %s\n", estudante->nome);
    printf("matricula do aluno: %d\n", estudante->matricula);
    printf("ira do aluno: %.2f\n", estudante->IRA);

}

void liberar_memoria(Aluno * estudante){
    free(estudante);
}

void matricular_aluno(Aluno * estudante){
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {   
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

     *recebe_dados()

}