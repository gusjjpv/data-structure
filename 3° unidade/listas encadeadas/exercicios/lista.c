#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista
{
    int informacao;
    Lista *prox_elemento;
};

Lista *cria_lista(void)
{
    return NULL;
}

Lista *insere_lista(Lista *lista, int valor)
{
    // aloca novo nó da lista encadeada
    Lista *novo_no = (Lista *)malloc(sizeof(Lista));
    if (novo_no == NULL)
    {
        exit(1);
    }
    // Adiciona o vlaor no campo informação
    novo_no->informacao = valor;
    // conecta o novo nó a lista
    novo_no->prox_elemento = lista;
    return novo_no;
}

void imprime(Lista* l){
    Lista* contador;
    for(contador = l; contador!=NULL; contador = contador->prox_elemento){
        printf("%d\t", contador->informacao);
    }
}

void verificar_lista_vazia(Lista* l){
    if(l == NULL){
        printf("Lista vazia");
    }else{
        printf("existe itens na lista");
    }
}

Lista *busca_lista(Lista *lista, int valor)
{
    Lista *p;
    for (p = lista; p != NULL; p = p->prox_elemento)
    {
        if (p->informacao == valor)
        {
            printf("\nelemento encontrado: %d", p->informacao);
        }
    }
    return NULL;
}