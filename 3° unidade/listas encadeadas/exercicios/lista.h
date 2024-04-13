#ifndef LISTA_H
#define LISTA_H

/*
Definição de um novo tipo: Lista
*/
typedef struct lista Lista;

/*
Função que inicializa a lista atribuindo NULL
*/
Lista *cria_lista(void);

/*
Função que insere elemento inteiro na lista
Argumentos:
    Lista * lista;
    int valor: valor inteiro a ser inserido
Retorno:
    Nova Lista
*/
Lista *insere_elemento(Lista *lista, int valor);

/*
Função que imprime na tela os elementos de uma lista ordenada
*/
void imprime(Lista *lista_encadeada);

/*
Função que verifica se há elementos armazenados na lista
*/
int lista_vazia(Lista *lista);

/*
Função busca: busca um elemento na lista
*/
Lista *buscar_elemento(Lista *lista, int valor);

/* Função que retira um elemento da lista 
*/
Lista *Retirar_elemento(Lista *lista, int valor);

/* Função que libera memória alocada dinâmicamente para a struct Pilha
 */
void liberar_lista(Lista *linha);

int maiores(Lista *lista, int n);

Lista *ultimo(Lista *lista);

#endif