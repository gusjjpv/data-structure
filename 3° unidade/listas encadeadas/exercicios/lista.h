
typedef struct lista Lista;

/*  função que inicializa a lista atribuindo NULL
    retorna: lista inicializada*/
Lista *cria_lista(void);

/*  função que insere elementos inteiros na lista
    argumentos:
    Lista * lista;
    int valor: valor inteiro a ser inserido
    retorno:
    nova lista*/
Lista *insere_lista(Lista *lista, int valor);

/* imprime os valores da lista */
void imprime(Lista *l);

/*  Função que vereficar se uma lista está vazia
    argumentos:
    Lista * lista: lista a ser verificada
    retorno:
    1: se a lista estiver vazia
    0: se a lista não estiver vazia*/
void verificar_lista_vazia(Lista *l);

/* função para busca elemento na lista*/
Lista *busca_lista(Lista *lista, int valor);

/* função que retira um elemento da lista*/
Lista *retira_lista(Lista *lista, int valor);