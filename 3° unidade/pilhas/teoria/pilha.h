/* TAD: Pilha */
typedef struct pilha Pilha;

// funcao para criar uma pilha
Pilha *pilha_cria(void);

// funcao para inserir um elemento na pilha
void pilha_push(Pilha *p, float v);

// funcao para remover um elemento da pilha
float pilha_pop(Pilha *p);

// funcao para verificar se a pilha esta vazia
int pilha_vazia(Pilha *p);

// funcao para liberar a pilha
void pilha_libera(Pilha *p);
// funcao que imprime
void pilha_imprime(Pilha *p);