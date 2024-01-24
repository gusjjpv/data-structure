#include <stdio.h>
#include <stdlib.h>

typedef struct ingressos
{
    float preco;
    int local;
    char atracao[50];
} Ingresso;

void preenche(Ingresso *i, int tamanho);
void imprime(Ingresso *i, int tamanho);
void altera_preco(Ingresso *i, float valor);
void imprime_menor_maior_preco(int n, Ingresso *vet);

int main(void)
{

    int num_ingressos;
    printf("Informe o numero de ingressos:");
    scanf("%d", &num_ingressos);

    Ingresso *ingressos = (Ingresso *)malloc(num_ingressos * sizeof(Ingresso));
    preenche(ingressos, num_ingressos);
    imprime(ingressos, num_ingressos);
    altera_preco(ingressos, ingressos->preco);
    imprime_menor_maior_preco(num_ingressos, ingressos);
    return 0;
}

void preenche(Ingresso *i, int tamanho)
{
    int j;
    for (j = 0; j < tamanho; j++)
    {
        printf("Ingresso %d\n", j + 1);
        printf("Informe o preço:");
        scanf("%f", &i[j].preco);
        printf("Informe o local:");
        scanf("%d", &i[j].local);
        printf("Informe a atração:");
        scanf(" %[^\n]", i[j].atracao);
    }
}

void imprime(Ingresso *i, int tamanho)
{
    int j;
    for (j = 0; j < tamanho; j++)
    {
        printf("\nIngresso %d\n", j + 1);
        printf("Preço: %.2f\nLocal: cadeira %d\nAtração: %s\n", i[j].preco, i[j].local, i[j].atracao);
    }
}

void altera_preco(Ingresso *i, float valor)
{
    int indexIngresso;
    printf("\nAlterando o preço do ingresso\n");
    printf("informe o numero do ingresso que deseja alterar o preço:");
    scanf("%d", &indexIngresso);
    indexIngresso--;
    printf("Informe o novo salario:");
    scanf("%f", &valor);
    i[indexIngresso].preco = valor;
}

void imprime_menor_maior_preco(int n, Ingresso *vet)
{
    int menorIndex = 0, maiorIndex = 0;
    float menor = vet[0].preco, maior = vet[0].preco;

    for (int i = 1; i < n; i++)
    {
        if (vet[i].preco < menor)
        {
            menor = vet[i].preco;
            menorIndex = i;
        }
        if (vet[i].preco > maior)
        {
            maior = vet[i].preco;
            maiorIndex = i;
        }
    }

    printf("\nIngresso mais barato:\nPreço: %.2f\nLocal: %d\nAtração: %s\n", vet[menorIndex].preco, vet[menorIndex].local, vet[menorIndex].atracao);
    printf("\nIngresso mais caro:\nPreço: %.2f\nLocal: %d\nAtração: %s\n", vet[maiorIndex].preco, vet[maiorIndex].local, vet[maiorIndex].atracao);
}
