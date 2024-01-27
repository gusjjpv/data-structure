#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        Escreva um programa em C para mostrar a declaração básica de um ponteiro.
        Resultado esperado :

        Ponteiro: mostra a declaração básica do ponteiro:
    -------------------------------------------------- -----
    Aqui está m = 10, n e o são duas variáveis ​​​​inteiras e *z é um número inteiro

    z armazena o endereço de m = 0x7ffd40630d44

    *z armazena o valor de m = 10

    &m é o endereço de m = 0x7ffd40630d44

    &n armazena o endereço de n = 0x7ffd40630d48

    &o armazena o endereço de o = 0x7ffd40630d4c

    &z armazena o endereço de z = 0x7ffd40630d50
    */

    int m = 10, o;
    int *z = &m, *n = &n;

    printf("z armazena o endereço de m = %p\n", z);
    printf("*z armazena o valor de m = %d\n", *z);
    printf("&m é o endereco de m = %p\n", &m);
    printf("&n é o endereco de n = %p\n", &n);
    printf("&o é o endereco de o = %p\n", &o);
    printf("&m é o endereco de m = %p\n", &m);
    printf("&z é o endereco de z = %p\n", &z);

    /*
         Escreva um programa em C para demonstrar como lidar com ponteiros em um programa.
        Resultado esperado :

    Endereço de m: 0x7ffcc3ad291c
    Valor de m: 29

    Agora ab é atribuído o endereço m.
    Endereço do ponteiro ab: 0x7ffcc3ad291c
    Conteúdo do ponteiro ab: 29

    O valor de m atribuído a 34 agora.
    Endereço do ponteiro ab: 0x7ffcc3ad291c
    Conteúdo do ponteiro ab: 34

    A variável ponteiro ab recebe o valor 7 agora.
    Endereço de m: 0x7ffcc3ad291c
    Valor de m: 7
    */

    printf("\n\t----questão 2----\n");

    m = 29;
    int *ab = &m;
    printf("endereco de m: %p\n", &m);
    printf("valor de m: %d\n", m);

    printf("endereco do ponteiro ab: %p\n", ab);
    printf("conteudo do ponteiro ab: %d\n", *ab);

    m = 34;
    printf("valor de m: %d\n", m);
    *ab = 7;
    printf("endereco de m: %p\n", &m);
    printf("valor de m: %d\n", m);

    return 0;
}