#include <stdio.h>
#include <stdlib.h>

/*
A estrutura de dados union é uma estrutura de dados que permite armazenar diferentes tipos de dados em um mesmo espaço de memória. A estrutura de dados union é semelhante a estrutura de dados struct, mas a estrutura de dados union armazena apenas um tipo de dado por vez.
*/

typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;

typedef struct pessoas{
    char nome[20];
    int idade;
    Documentos doc;
}pessoa;

void dados_pessoas(pessoa *p){
    int opc;
    printf("Informe o nome:");
    scanf(" %[^\n]", p->nome);
    printf("\nInforme a idade: ");
    scanf("%d", &p->idade);
    printf("\ninforme 1 para [CPF]\tInforme 2 para [RG]: ");
    scanf("%d", &opc);
    if (opc == 1){
        printf("digite o seu cpf");
        scanf(" %[^\n]s", &p->doc.cpf);
    }else{
        printf("digite o seu rg");
        scanf(" %[^\n]s", &p->doc.rg);
    }
    
}

int main(void){
    pessoa * pessoa = malloc(sizeof(pessoa));
    dados_pessoas(pessoa);   
    free(pessoa);
    return 0;
}