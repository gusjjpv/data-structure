/*Definição de novo tipo: Aluno*/
typedef struct aluno Aluno;

/*Função que aloca memoria para um struct aluno, recebe os dados via teclado e retorna um ponteiro para Aluno*/
Aluno * recebe_dados(void);
// essa função recebe como parametro um tipo aluno e imprime na tela os dados recebidos com a função recebe_aluno();
void exibir_dados(Aluno * estudante);
//esta função libera a memoria alocada durante a execução do programa, recebe como parametro um tipo aluno
void liberar_memoria(Aluno * estudante);

//função que matricula alunos
