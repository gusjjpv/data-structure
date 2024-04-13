#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct _fila {
    int ini, fim;
    int qtd; // num d eelementos da fila
    int MAX_SIZE; // tamanho maximo da fila
    int *vetor; // vator dos valores
};

Fila *CriaFila(int MAX_SIZE){
    Fila *Q = (Fila *)calloc(1, sizeof(Fila));

    Q->vetor = (int *)calloc(MAX_SIZE, sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->qtd = 0;
    Q->ini = Q->fim = 0;

    return Q;
}

void DestruirFila(Fila **Q){
    Fila *Qaux = *Q;
    free(Qaux->vetor);
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q){
    return (Q->qtd == 0);
}

int FilaCheia(Fila *Q){
    return (Q->qtd == Q->MAX_SIZE);
}

int InsereFila(Fila *Q, int elemento){
    if(FilaCheia(Q)){
        printf("Fila cheia\n");
        return 0;
    }else{
    Q->vetor[Q->fim] = elemento;
    Q->fim = (Q->fim + 1) % Q->MAX_SIZE;
    Q->qtd++;
    return 1;
}
}

int RemoveFila(Fila *Q){
    if(FilaVazia(Q)){
        printf("Fila vazia\n");
        return 0;
    }
    else{
        Q->ini = (Q->ini + 1) % Q->MAX_SIZE;
        Q->qtd--;
        return 1;
    }
}

int ConsultaFila(Fila *Q, int *elemento){
    if(FilaVazia(Q)){
        printf("Fila vazia\n");
        return 0;
    }
    else{
        *elemento = Q->vetor[Q->ini];
        return 1;
    }
}