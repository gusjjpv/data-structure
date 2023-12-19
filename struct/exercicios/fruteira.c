#include <stdio.h>
#include <stdlib.h>

typedef struct frutas{

    char nome[20];
    char cor[20];
    char sabor[50];
    int quantidade;

}Frutas;

void cadastroFrutas(Frutas *frutas, int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        printf("Informe o nome da fruta: ");
        scanf(" %[^\n]", frutas[i].nome);
        printf("Informe a cor da fruta: ");
        scanf(" %[^\n]", frutas[i].cor);
        printf("Informe o sabor da fruta: ");
        scanf(" %[^\n]", frutas[i].sabor);
        printf("Informe a quantidade da fruta: ");
        scanf("%d", &frutas[i].quantidade);
    }
}

void imprimir(Frutas *frutas, int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        printf("\nNome: %s\nCor: %s\nSabor: %s\nQuantidade: %d", frutas[i].nome, frutas[i].cor, frutas[i].sabor, frutas[i].quantidade);
    }
}

void mostrasFrutasCad(Frutas *frutas, int tamanho){
    int i;
    printf("Frutas cadastradas: \n");
    for(i=0;i<tamanho;i++){
        printf("%s\n", frutas[i].nome);
    }
}

int main(void){

    int i, qtdFrutas;

    printf("Informe a quantidade de frutas: ");
    scanf("%d", &qtdFrutas);

    //alocando memoria para o vetor de struct
    Frutas *frutas = (Frutas*) malloc(qtdFrutas* sizeof(Frutas));
    if(frutas == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    return 0;
}