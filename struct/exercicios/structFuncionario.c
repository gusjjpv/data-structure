#include <stdio.h>
#include <stdlib.h>

// declarando a struct renomeando
typedef struct funcionario
{
    char nome[50];
    float salario;
    int identificador;
    char cargo[20];
} Funcionario;

// função para ler os dados do usuario
void preenche(Funcionario *fun)
{
    printf("Digite seu nome: ");
    scanf(" %[^\n]", fun->nome);
    printf("Informe seu cargo: ");
    scanf(" %[^\n]", fun->cargo);
    printf("Informe seu salario: ");
    scanf("%f", &fun->salario);
    printf("Digite seu identificador: ");
    scanf("%d", &fun->identificador);
    system("cls"); // limpa tela
}

// função para imprimir os dados
void imprime(Funcionario *fun)
{
    printf("Nome: %s\nCargo: %s\nSalario: %.2f\nIdenteificador: %d", fun->nome, fun->cargo, fun->salario, fun->identificador);
}

//função para modficar o salario;
void alterarSalario(Funcionario *fun){
    printf("Informe o novo salario: ");
    scanf("%f", &fun->salario);
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
    
    int escolha;

    printf("\nDeseja alterar o salario?\nSim-[1]\nNao-[2]\nDigite: ");
    scanf(" %d", &escolha);
    if(escolha == 1){
        alterarSalario(fun);
        printf("Salario novo: %.2f", fun->salario);
    }
    
    // liberando memoria aloada;
    free(fun);

    return 0;
}