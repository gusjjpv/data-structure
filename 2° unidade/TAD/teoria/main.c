//nao precisa digitar os comandos
#include "aluno.c"
//precisa digitar os comandos
//#include "aluno.h"

int main(void){
    Aluno *aluno;
    aluno = recebe_dados();
    exibir_dados(aluno);

    liberar_memoria(aluno);
    return 0;
}