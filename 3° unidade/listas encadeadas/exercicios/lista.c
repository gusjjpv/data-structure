#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

struct lista
{
    int info;
    Lista *prox;
};

Lista *cria_lista(void)
{
    return NULL;
}

Lista *insere_elemento(Lista *lista, int valor)
{
    Lista *novo_no = (Lista *)malloc(sizeof(Lista));

    if (novo_no == NULL)
    {
        exit(1);
    }

    novo_no->info = valor;
    novo_no->prox = lista;

    return novo_no;
}

void imprime(Lista *lista_encadeada)
{

    Lista *contador;

    for (contador = lista_encadeada; contador != NULL; contador = contador->prox)
    {
        printf("%d\t\n", contador->info);
    }
}

int lista_vazia(Lista *lista)
{

    if (lista == NULL)
    {
        printf("Lista vazia! ");
        return 1;
    }
    else
    {
        printf("Lista não vazia! ");
        return 0;
    }
}

Lista *buscar_elemento(Lista *lista, int valor)
{

    Lista *ponteiro;

    for (ponteiro = lista; ponteiro != NULL; ponteiro->prox)
    {
        if (ponteiro->info == valor)
        {
            return ponteiro;
        }
    }
    return NULL;
}

Lista *Retirar_elemento(Lista *lista, int valor)
{

    Lista *ponteiro = lista;
    Lista *anterior = ponteiro;

    while (ponteiro != NULL && ponteiro->info != valor)
    {
        anterior = ponteiro;
        ponteiro = ponteiro->prox;
    }

    if (ponteiro == NULL)
    {
        return lista;
    }

    if (anterior == NULL)
    {
        lista = ponteiro->prox;
    }
    else
    {
        anterior->prox = ponteiro->prox;
    }

    free(ponteiro);
    return lista;
}

void liberar_lista(Lista *linha)
{
    Lista *ponteiro = linha;
    while (ponteiro != NULL)
    {
        Lista *t = ponteiro->prox;
        free(ponteiro);
        ponteiro = t;
    }

    printf("Lista liberada!");
}

int maiores(Lista *lista, int n)
{

    Lista *ponteiro;
    int numeros = 0;

    for (ponteiro = lista; ponteiro != NULL; ponteiro->prox)
    {

        if (ponteiro->info > n)
        {
            numeros++;
            return numeros;
        }
    }
    return 0;
}

Lista *ultimo(Lista *lista)
{

    Lista *ponteiro = lista;
    Lista *anterior = NULL;

    while (ponteiro != NULL)
    {
        anterior = ponteiro;
        ponteiro = ponteiro->prox;
    }

    if (ponteiro == NULL)
    {
        return lista;
    }
}