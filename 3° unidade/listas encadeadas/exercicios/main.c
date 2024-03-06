#include "lista.c"

int main(void)
{
    Lista *lista_encadeada = cria_lista();
    Lista *lista2 = cria_lista();

    int valor;
    // inserindo o valor 3 na lista encadeada
    while (1)
    {
        while (1)
        {
            printf("\nDigite um valor para inserir na lista encadeada: ");
            scanf("%d", &valor);
            if (valor == 0)
            {
                break;
            }
            lista_encadeada = insere_lista(lista_encadeada, valor);
        }

        verificar_lista_vazia(lista_encadeada);

        imprime(lista_encadeada);

        printf("\nDigite um valor para remover da lista encadeada: ");
        scanf("%d", &valor);
        retira_lista(lista_encadeada, valor);

        imprime(lista_encadeada);

        printf("\nDigite um valor para buscar na lista encadeada: ");
        scanf("%d", &valor);
        if (valor == 0)
        {
            break;
        }
        busca_lista(lista_encadeada, valor);

        printf("\nDigite um valor para verificar quantos valores iguais a ele existem na lista encadeada: ");
        scanf("%d", &valor);
        int vezes = 0;
        vezes = maiores(lista_encadeada, valor);
        printf("%d", vezes);
    }

    return 0;
}
