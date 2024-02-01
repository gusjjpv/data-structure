#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro_frutas
{
    char nome[20];
    float preco;
} CadFrutas;

void preenche(CadFrutas *f, int tamanho, FILE *arquivo);

int main(void)
{

    FILE *arquivo;
    int opc, qtdFrutas = 1;
    CadFrutas *frutas = (CadFrutas *)malloc(sizeof(CadFrutas));

    arquivo = fopen("frutas.txt", "wt");
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
        preenche(frutas, qtdFrutas, arquivo);
        printf("\nDeseja cadastrar mais frutas?\n[1] - sim\n[2] - nao\n");
        scanf("%d", &opc);
        if (opc == 1)
        {
            frutas = (CadFrutas *)realloc(frutas, (qtdFrutas + 1) * sizeof(CadFrutas));
        }else if(opc == 2){
            printf("Cadastro finalizado!\n");
            break;
        }

    } while (opc == 1);

    if (!fclose(arquivo))
    {

        printf("Arquivo fechado com sucesso!\n");
    }
    else
    {
        printf("Erro ao fechar o arquivo!\n");
    }

    return 0;
}

void preenche(CadFrutas *f, int tamanho, FILE *arquivo)
{
    int j;
    for (j = 0; j < tamanho; j++)
    {   
        printf("\n===== CADASTRO DE FRUTAS =====\n");
        printf("Fruta: \n");
        scanf(" %[^\n]", f[j].nome);
        printf("Informe o preço:");
        scanf("%f", &f[j].preco);
        fprintf(arquivo, "===== Budega do chico bala =====\n%s    %.2f\n", f[j].nome, f[j].preco);
    }
}