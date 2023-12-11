#include <stdio.h>
#include <stdlib.h>

//declarando a struct renomeando
typedef struct funcionario
{
    char nome[50];
    int idade;
    char cargo[20];
    int cpf;
    int nTelefone;
    char email[50];
} Funcionario;

// função para ler os dados do usuario
void preenche(Funcionario *fun)
{
    printf("Digite seu nome: ");
    scanf(" %[^\n]", fun->nome);
    printf("Digite sua idade: ");
    scanf("%d", &fun->idade);
    printf("Informe seu cargo: ");
    scanf(" %[^\n]", fun->cargo);
    printf("Digite seu CPF: ");
    scanf("%d", &fun->cpf);
    printf("Digite seu telefone: ");
    scanf("%d", &fun->nTelefone);
    printf("Digite seu E-mail: ");
    scanf(" %[^\n]", fun->email);
    system("cls"); // limpa tela
}

// função para imprimir os dados
void imprime(Funcionario *fun)
{
    printf("Nome:%s\nIdade:%d\nCargo:%s\nCPF:%d\nTelefone:%d\nE-mail:%s", fun->nome, fun->idade, fun->cargo, fun->cpf, fun->nTelefone, fun->email);
}

int main(void)
{
    // alocando dinamicamente a struct
    struct funcionario *fun = (struct funcionario *)malloc(sizeof(struct funcionario));
    // verificação se o espaço foi alocado corretamente
    if (fun == NULL)
    {
        exit(1);
    }

    // chamada das funções
    preenche(fun);
    imprime(fun);
    // liberando memoria aloada;
    free(fun);

    return 0;
}