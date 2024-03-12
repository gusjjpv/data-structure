#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* TAD: Disciplina*/
typedef struct disciplina Disciplina;

/* funcao que cria disciplina */
Disciplina* cria_disciplina(char nome[], int codigo);

/* funcao que exclui a disciplina */
void exclui_disciplina(Disciplina* disciplina);