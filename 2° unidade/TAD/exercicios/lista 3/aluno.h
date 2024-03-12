#include "disciplina.h"
/* TAD: aluno*/ 
typedef struct aluno Aluno;

// funcao que cria um aluno
Aluno *cria_aluno(char nome[], int matricula);

// funcao que matricula um aluno em uma disciplina
void matricula_disciplina(Aluno *aluno, Disciplina *disciplina);

// funcao que exclui um aluno
void exclui_aluno(Aluno *aluno);