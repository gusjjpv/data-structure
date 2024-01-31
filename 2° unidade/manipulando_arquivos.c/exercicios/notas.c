/*
 Implemente um programa em C para ler o nome e as notas de um n´umero N de alunos e armazen´a-los
em um arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *arquivo;
    int opc = 0;
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
        printf("\n======= CADASTRO NOTAS =======\n");
        printf("Informe o nome do aluno(a):\n");
        scanf(" %[^\n]", nome);
        fscanf(arquivo, "Nome: %s", nome);
    } while (opc == 1);

    fclose(arquivo);

        return 0;
}