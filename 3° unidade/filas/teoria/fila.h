typedef struct _fila Fila;

//cria a fila
Fila *CriaFila(int MAX_SIZE);

//destroi a fila
void DestruirFila(Fila **Q);

//verifica se a fila esta vazia
int FilaVazia(Fila *Q);

//verificar se a fila esta cheia
int FilaCheia(Fila *Q);

//insere um elemento na fila
void InsereFila(Fila *Q, int elemento);

//remove um elemento da fila
int RemoveFila(Fila *Q);

//conseulta a fila
int ConsultaFila(Fila *Q, int *elemento);