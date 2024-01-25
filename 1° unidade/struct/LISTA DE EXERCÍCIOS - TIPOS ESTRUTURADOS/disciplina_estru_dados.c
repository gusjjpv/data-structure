#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    int matricula;
    char nome[80];
    char turma[10];
    float notas[3];
    float media;
}Aluno;

void matricula(int n,Aluno** alunos);

int main(void){
    
    int num_vagas, i,j;
    printf("Informe o numero de vagas:");
    scanf("%d", &num_vagas);

    Aluno **alunos = (Aluno **)malloc(num_vagas * sizeof(Aluno *));
    for(i = 0;i< num_vagas;i++){
        alunos[i] = (Aluno *)malloc(sizeof(Aluno));
    }
    if(alunos == NULL){
        exit(1);
    }

    matricula(num_vagas,alunos);

    free(alunos);

    return 0;
}

void matricula(int n,Aluno** alunos){
    int i;
    for(i=0;i <= n;i++){
        printf("Informe a matricula do aluno %d:", i+1);
        scanf("%d", &alunos[i]->matricula);
        printf("Informe o nome do aluno %d:", i+1);
        scanf(" %[^\n]", alunos[i]->nome);
        printf("Informe a turma do aluno %d:", i+1);
        scanf(" %[^\n]", alunos[i]->turma);
        printf("Informe a nota 1 do aluno %d:", i+1);
        scanf("%f", &alunos[i]->notas[0]);
        printf("Informe a nota 2 do aluno %d:", i+1);
        scanf("%f", &alunos[i]->notas[1]);
        printf("Informe a nota 3 do aluno %d:", i+1);
        scanf("%f", &alunos[i]->notas[2]);
        alunos[i]->media = (alunos[i]->notas[0] + alunos[i]->notas[1] + alunos[i]->notas[2])/3;
    }
}


