#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arqEntrada, *arqSaida;
    float nota1, nota2, nota3, media;
    char nome[100], linha[100];

    arqEntrada = fopen("entrada_q3.txt", "r");
    arqSaida = fopen("saida_q3.txt", "w");
    if (arqEntrada == NULL && arqSaida == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    else
    {
        printf("Arquivo aberto com sucesso!\n");
    }

    while (fgets(linha, 100, arqEntrada) != NULL)
    {
        // sscanf lê de uma string. O primeiro argumento é a string, o segundo é o formato e os demais são as variáveis que receberão os valores.
        sscanf(linha, "%20[^\t]\t%f\t%f\t%f", nome, &nota1, &nota2, &nota3);
        // está lendo uma string e três floats de linha e armazenando-os nas variáveis nome, nota1, nota2 e nota3, respectivamente. A string é lida até um caractere de tabulação (\t) ou até 20 caracteres, o que ocorrer primeiro. Os floats são lidos após um caractere de tabulação.
        media = (nota1 + nota2 + nota3) / 3;

        // Escreve no arquivo de saida os dados de nome, media e aprovado/reprovado
        fprintf(arqSaida, "%s\t%.1f\t %s\n", nome, media, (media >= 7.0) ? "aprovado" : "reprovado");
    }

    if (!fclose(arqEntrada) && !fclose(arqSaida))
    {
        printf("Arquivo fechado com sucesso!");
    }

    return 0;
}