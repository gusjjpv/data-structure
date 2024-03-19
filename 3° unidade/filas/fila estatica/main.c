#include <stdio.h>
#include <stdlib.h>
#include "fila.c"

int main(void){

    Fila *Q = CriaFila(50);

    DestruirFila(&Q);

    int listavaiza = FilaVazia(Q); 
    
    if(FilaVazia(Q))
        printf("Fila destruida com sucesso\n");
    else
        printf("Erro ao destruir fila\n");
    
    int listacheia = FilaCheia(Q);
    if(FilaCheia(Q))
        printf("Fila destruida com sucesso\n");
    else
        printf("Erro ao destruir fila\n");

    InsereFila(Q, 10);
    
    RemoveFila(Q);
    if(RemoveFila(Q))
        printf("Elemento removido com sucesso\n");
    else
        printf("Erro ao remover elemento\n");

    int elemento;
    ConsultaFila(Q, &elemento);
    
    if(ConsultaFila(Q, &elemento)){
        printf("Elemento consultado: %d\n", elemento);
    }else{
        printf("Erro ao consultar fila\n");
    }
    return 0;
}
