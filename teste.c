#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main(void) // Define a função principal do programa.
{
    int a, b, c, d; // Declara quatro variáveis inteiras.

    int *p1; // Declara um ponteiro para inteiro p1.
    int *p2 = &a; // Declara um ponteiro para inteiro p2 e o inicializa com o endereço de a.
    int *p3 = &c; // Declara um ponteiro para inteiro p3 e o inicializa com o endereço de c.

    p1 = p2; // Faz p1 apontar para o mesmo local que p2 (ou seja, a variável a).

    *p2 = 10; // Atribui o valor 10 à variável a, através do ponteiro p2.

    b = 20; // Atribui o valor 20 à variável b.

    int **pp; // Declara um ponteiro para ponteiro para inteiro pp.
    pp = &p1; // Faz pp apontar para o ponteiro p1.

    *p3 = **pp; // Atribui o valor de a (ao qual p1 aponta) à variável c, através do ponteiro p3.

    int *p4 = &d; // Declara um ponteiro para inteiro p4 e o inicializa com o endereço de d.
    *p4 = b + (*p1)++; // Atribui a soma de b e o valor de a à variável d, através do ponteiro p4, e então incrementa a.

    printf("%d\t%d\t%d\t%d\n", a, b, c, d); // Imprime os valores de a, b, c e d.

    return 0; // Retorna 0, indicando que o programa terminou com sucesso.
}