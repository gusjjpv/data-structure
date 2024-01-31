/*
Faca um programa em C que solicita ao usuario informacoes de funcionarios via teclado. As informacoes digitadas pelo o usuario sao: id, nome e salario do funcionario. Armazene as informacoes digitadas pelo usuario em um arquivo texto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int id;
    char nome[50];
    float salario;

    FILE *saidaFuncionarios;
    
    saidaFuncionarios = fopen("saidaFuncionarios.txt", "wt");

    if (saidaFuncionarios == NULL)
    {
        printf("Nao foi possivel abrir os arquivos.\n");
        exit(1);
    }else
    {
        printf("Arquivos abertos com sucesso.\n");
    }
    printf("========= CADASTRO FUNCIONARIOS =========\n");
    printf("\tDigite o id do funcionario: ");
    scanf("%d", &id);
    fprintf(saidaFuncionarios, "Id: %02d\n", id);
    printf("\tDigite o nome do funcionario: ");
    scanf("%s", nome);
    fprintf(saidaFuncionarios, "Nome: %s\n", nome);
    printf("\tDigite o salario do funcionario: ");
    scanf("%f", &salario);
    fprintf(saidaFuncionarios, "Salario: %.2f\n", salario);

    if(!fclose(saidaFuncionarios) == NULL)
    {
        printf("Arquivos fechado com sucesso.\n");
    }

    return 0;
}
