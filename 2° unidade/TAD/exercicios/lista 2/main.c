#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingresso.c"

int main(){

    int tamanho;

    printf("Qual o numero de ingressos? ");
    scanf("%d", &tamanho);

    Ingresso *token = (Ingresso*) malloc(sizeof(Ingresso) * tamanho);

    if(token == NULL){
        printf("Erro na alocacao!");
        exit(1);
    }
    
    preencher(token, tamanho);
    imprimir(token, tamanho);
    novo_valor(token, tamanho);
    Preco_menorEmaior(token, tamanho);

    free(token);

    return 0;
}