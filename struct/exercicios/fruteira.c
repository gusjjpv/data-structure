#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct frutas
{
    char nome[20];
    char cor[20];
    char sabor[200];
    int quantidade;

} Frutas;

int qtdFrutasCad(int quantidade)
{
    printf("informe a quantidade de frutas que deseja cadastrar: ");
    scanf("%d", &quantidade);

    system("cls");

    return quantidade;
}

void cadastroFrutas(Frutas *frutas, int i)
{
    printf("Informe os dados da fruta: \n");
    printf("Nome: ");
    scanf(" %[^\n]", frutas[i].nome);
    printf("Cor: ");
    scanf(" %[^\n]", frutas[i].cor);
    printf("Sabor: ");
    scanf(" %[^\n]", frutas[i].sabor);
    printf("Quantidade: ");
    scanf("%d", &frutas[i].quantidade);
    system("cls");
}

void imprimir(Frutas *frutas, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("\nNome: %s\nCor: %s\nSabor: %s\nQuantidade: %d", frutas[i].nome, frutas[i].cor, frutas[i].sabor, frutas[i].quantidade);
    }
}

void mostrasFrutasCad(Frutas *frutas, int tamanho)
{
    int i;
    printf("Frutas cadastradas: \n");
    for (i = 0; i < tamanho; i++)
    {
        printf("Nome: %s\n", frutas[i].nome);
    }
}

void buscaFruta(Frutas *frutas, int tamanho, char nome[])
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (strcmp(frutas[i].nome, nome) == 0)
        {
            printf("Nome: %s\nCor: %s\nSabor: %s\nQuantidade: %d", frutas[i].nome, frutas[i].cor, frutas[i].sabor, frutas[i].quantidade);
        }
    }
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int qtdFrutas=0, busca = 0, cadNovaFruta = 0;
    char nome[20];

    // qtdFrutas = qtdFrutasCad(qtdFrutas);

    // alocando memoria para o vetor de struct
    Frutas *frutas = (Frutas *)malloc(qtdFrutas * sizeof(Frutas));
    if (frutas == NULL)
    {
        printf("Memoria insuficiente");
        exit(1);
    }
    do
    {
        cadastroFrutas(frutas, qtdFrutas);
        imprimir(frutas, qtdFrutas);
        printf("\nDeseja cadastrar uma nova fruta?\n[1]-Sim\n[2]-Nao\n");
        scanf("%d", &cadNovaFruta);
        if (cadNovaFruta == 1)
        {
            qtdFrutas++;
            frutas = (Frutas *)realloc(frutas, qtdFrutas * sizeof(Frutas));
        }
        system("cls");
    } while (cadNovaFruta == 1);

    printf("\nDeseja buscar uma fruta?\n[1]-Sim\n[2]-Não");
    scanf("%d", &busca);
    system("cls");

    if (busca == 1)
    {
        mostrasFrutasCad(frutas, qtdFrutas);
        printf("Informe o nome da fruta: ");
        scanf(" %[^\n]", nome);
        system("cls");
        buscaFruta(frutas, qtdFrutas, nome);
    }

    return 0;
}