#include "lista.c"

int main(void){
    Lista * lista_encadeada = cria_lista();
    //inserindo o valor 3 na lista encadeada
    lista_encadeada = insere_lista(lista_encadeada, 3);
    lista_encadeada = insere_lista(lista_encadeada, 2);
    lista_encadeada = insere_lista(lista_encadeada, 1);
    imprime(lista_encadeada);
    printf("\nremovendo\n");
    retira_lista(lista_encadeada, 3);
    imprime(lista_encadeada);
    
    return 0;
}


