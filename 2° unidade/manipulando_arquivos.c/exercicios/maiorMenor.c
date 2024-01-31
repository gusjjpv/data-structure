/*Escreva um programa em C que preencha um vetor de 10 inteiros com informações
vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem
como a média dos elementos do vetor, como ilustrado a seguir. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *arqEntrada, *arqSaida;
    int vetor[10],i = 0;
    int maior = vetor[0], menor = vetor[0];
    float media = 0;
    char linha[100];

    arqEntrada = fopen("entrada_q2.txt", "r");
    arqSaida = fopen("saida_q2.txt", "w");

    if (arqEntrada == NULL && arqSaida == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    else
    {
        printf("Arquivo aberto com sucesso!\n");
    }

    while (fgets(linha, 100, arqEntrada) != NULL)
    {

        sscanf(linha, "%d ", &vetor[i]);
        media += vetor[i];
        i++;
    }

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    fprintf(arqSaida, "Maior: %d\nMenor: %d\nMedia: %.2f\n", maior,menor,media/10);

    if (!fclose(arqEntrada) && !fclose(arqSaida))
    {
        printf("Arquivo fechado com sucesso!\n");
    }

    return 0;
}