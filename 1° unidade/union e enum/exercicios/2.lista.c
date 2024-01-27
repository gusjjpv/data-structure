/*
Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto.
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    ALIMENTO,
    BEBIDA,
    ELETRONICO
} TipoProduto;

typedef union
{
    char alimento[50];
    char bebida[50];
    char eletronico[50];
} Tipo;

typedef struct
{
    char nome[50];
    float preco;
    Tipo tipo;
    TipoProduto tipoProduto;
} Produto;

void lerDados(Produto *p)
{
    printf("Digite o nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite o preco: ");
    scanf("%f", &(p->preco));

    printf("Digite o tipo (0 para alimento, 1 para bebida, 2 para eletronico): ");
    scanf("%d", (int *)&(p->tipoProduto));

    switch (p->tipoProduto)
    {
    case ALIMENTO:
        printf("Digite o nome do alimento: ");
        scanf(" %[^\n]", p->tipo.alimento);
        break;
    case BEBIDA:
        printf("Digite o nome da bebida: ");
        scanf(" %[^\n]", p->tipo.bebida);
        break;
    case ELETRONICO:
        printf("Digite o nome do eletronico: ");
        scanf(" %[^\n]", p->tipo.eletronico);
        break;
    }
}

void imprimirDados(Produto *p)
{
    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);

    switch (p->tipoProduto)
    {
    case ALIMENTO:
        printf("Tipo: Alimento - %s\n", p->tipo.alimento);
        break;
    case BEBIDA:
        printf("Tipo: Bebida - %s\n", p->tipo.bebida);
        break;
    case ELETRONICO:
        printf("Tipo: Eletronico - %s\n", p->tipo.eletronico);
        break;
    }
}

int main()
{
    Produto *produto = (Produto *)malloc(sizeof(Produto));
    if(produto == NULL){
        exit(1);
    }
    
    lerDados(produto);
    imprimirDados(produto);

    free(produto);
    return 0;
}