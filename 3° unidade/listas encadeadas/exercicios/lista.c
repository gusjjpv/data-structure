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

void imprime(Lista *l)
{
    Lista *contador;
    for (contador = l; contador != NULL; contador = contador->prox_elemento)
    {
        printf("%d\t", contador->informacao);
    }
}

void verificar_lista_vazia(Lista *l)
{
    if (l == NULL)
    {
        printf("Lista vazia\n");
    }
    else
    {
        printf("existe itens na lista\n");
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
            return 0;
        }
        else
        {
            printf("\nelemento não encontrado");
        }
    }
    return NULL;
}

Lista *retira_lista(Lista *lista, int valor)
{
    Lista *anterior = cria_lista();
    Lista *p = lista;
    while (p != NULL && p->informacao != valor)
    {
        anterior = p;
        p = p->prox_elemento;
    }
    if (p == NULL)
    {
        return lista;
    }
    if (anterior == NULL)
    {
        lista = p->prox_elemento;
    }
    else
    {
        anterior->prox_elemento = p->prox_elemento;
    }
    free(p);
    return lista;
}

int maiores(Lista *l, int n)
{
    Lista *p;
    int vezes = 0;
    for (p = l; p != NULL; p = p->prox_elemento)
    {
        if (p->informacao == n)
        {
            vezes++;
        }
    }
    return vezes;
}

Lista *ultimo(Lista *l)
{
    Lista *p;
    for (p = l; p != NULL; p = p->prox_elemento)
    {
        if (p->prox_elemento == NULL)
        {
            return p;
        }
    }
    return NULL;
}

Lista *concatena(Lista *l1, Lista *l2)
{
    
}