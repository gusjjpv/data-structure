/*
 Implemente um programa em C para ler o nome e as notas de um n´umero N de alunos e armazena-los
em um arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *arquivo;
    int opc = 0, i = 0;
    float nota1, nota2, nota3;
    char nome[20];

    arquivo = fopen("notasAlunos.txt", "wt");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    else
    {
        printf("Arquivo aberto com sucesso!\n");
    }

    do
    {
        i = 0;

        printf("\n======= CADASTRO NOTAS =======\n");
        printf("Informe o nome do aluno(a):\n");
        scanf(" %[^\n]", nome);
        printf("Digite a nota %d:", i + 1);
        scanf(" %f", &nota1);
        i++;
        printf("Digite a nota %d:", i + 1);
        scanf(" %f", &nota2);
        i++;
        printf("Digite a nota %d:", i + 1);
        scanf(" %f", &nota3);
        fprintf(arquivo, "\n===== Aluno =====\nNome: %s\n===== Notas =====\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", nome, nota1, nota2, nota3);
        printf("\nDeseja cadastrar outro aluno(a):\n[1]-Sim\n[2]-Nao\n");
        scanf("%d", &opc);
    } while (opc == 1);

    if (!fclose(arquivo))
    {
        printf("Arquivo fechado com sucesso.\n");
    }

    return 0;
}