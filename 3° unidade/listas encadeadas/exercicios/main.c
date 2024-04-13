#include "lista.h"

int main(void)
{
    Lista *lista_encadeada = cria_lista();

    lista_encadeada = insere_elemento(lista_encadeada, 3);
    lista_encadeada = insere_elemento(lista_encadeada, 2);
    lista_encadeada = insere_elemento(lista_encadeada, 3);

    imprime(lista_encadeada);

    liberar_lista(lista_encadeada);
    
    return 0;
}