typedef struct ingresso Ingresso;

//funcao que preenche os dados dos ingressos.
void preencher(Ingresso *ponteiro, int t);

//funcao que altera o valor do ingresso.
void novo_valor(Ingresso *ponteiro, int t);

//funcao que verifica o ingresso mais barato e o mais caro.
void Preco_menorEmaior(Ingresso *ponteiro, int t);

//funcao que imprime os dados dos ingressos.
void imprimir(Ingresso *ponteiro, int t);