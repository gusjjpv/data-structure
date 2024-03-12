#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define N 50 // Tamanho maximo de elementos na pilha

struct pilha
{
    int n;
    float vet[N];
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void pilha_push(Pilha* p, float v){
    if(p->n == N){
        printf("Capacidade da pilha estourou.\n");
        exit(1);
    }
    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia(Pilha* p){
    return (p->n == 0);
}

float pilha_pop(Pilha* p){
    if(pilha_vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    p->n--;
    return p->vet[p->n];
}

void pilha_libera(Pilha* p){
    free(p);
}

void pilha_imprime(Pilha* p){
    int i;
    for(i = p->n-1; i >= 0; i--){
        printf("%f\n", p->vet[i]);
    }
}

