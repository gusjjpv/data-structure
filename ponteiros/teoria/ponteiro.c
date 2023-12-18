#include <stdio.h>
#include <stdlib.h> //Ela possui funções envolvendo alocação de memória, controle de processos, conversões e outras.

int main()
{

    // declaração
    // tipo_apontado * nome_da_variavel_ponteiro;
    // int *ponteiro;

    //tipos de ponteiros:
    //int *ponteiro_int; ponteiro de inteiro
    //float *ponteiro_float; ponteiro de real
    //char *ponteiro _chat; ponteiro de caractere
    //int **ponteiro_ponteiro_intero // ponteiro de ponteiro inteiro

    // printf("O ponteiro: %p \n", ponteiro);

    // acesso ao endereço de uma variavel
    int numero = 2;
    int *ponteiro2;

    ponteiro2 = &numero;

    printf("O endereço: %p\n", ponteiro2);

    // Indereção de ponteiros com *

    float var = 3.14;
    float *pont = &var;
    float pi = *pont;

    printf("o valor de pi: %f\n", pi);

    // ponteiro nulo NULL
    // um ponteiro nulo é um ponteiro que não aponta para nenhum objetivo.
    // é usado para indicar ausencia de um valor

    char *point;
    point = NULL;

    // Compatibilidade e conversões entre ponteiros
    // a conversão entre diferentes tipos de ponteiros pode ser usado para acessar memoria e dados de forma segura.

    float number;
    int *pointer;
    pointer = &number;
    pointer = (int *)&number;


    int a = 10;
    int *p1 = NULL;
    int *p2;

    p1 = &a;
    p2 = p1; // aq, o p2 esta guardando o valor que o p1 esta amazenando, que é o endereço do a. ent ele n esta armazenando o endereço do p1, e sim o valor que p1 esta armazenando
    *p2 = 4; // ele vai alterar o conteudo do endereço que esta armazenado em p2, no exemplo p2 esta armazenando o endereço de a(foi passado pela atribuição do p1 ao p2), que tem o conteudo armazenado 10, que foi alterado para 4, ent o conteudo de p2 é 4 e p1 tbm, pq ele tem o endereço e conteudo de a.

    return 0;
}