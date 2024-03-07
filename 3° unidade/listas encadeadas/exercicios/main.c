#include "lista.c"

int main(void){
    Lista * lista_encadeada = cria_lista();
    Lista * lista_encadeada2 = cria_lista();
    //inserindo o valor 3 na lista encadeada
    while(1){
        int valor;
        printf("Digite um valor para inserir na lista encadeada: ");
        scanf("%d", &valor);
        if (valor == 0){
            break;
        }
        lista_encadeada = insere_lista(lista_encadeada, valor);
    }
    lista_encadeada2 = insere_lista(lista_encadeada2, 44);
    int busca;
    printf("Digite um valor para buscar na lista encadeada: ");
    scanf("%d", &busca);
    busca_lista(lista_encadeada, busca);
    Lista * no;
    no = ultimo(lista_encadeada);
    printf("\nendereco de memoria do ultimo no: %p\n", no);
    imprime(lista_encadeada);
    concatena(lista_encadeada, lista_encadeada2);
    retira_n(lista_encadeada, 10);
    printf("\n");
    imprime(lista_encadeada);
}