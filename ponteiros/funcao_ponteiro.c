#include <stdio.h>

/*
        ponteiro para função
*/

int inc(int *ponteiro)
{
    (*ponteiro)++; // acessa o conteudo(por conta do parenteses), dps incrementa
}

int *cria_variavel(){
    int variavel = 5; // criou uma variavel inteira 

    return &variavel; // retorna o endereço da variavel criada

}

int main()
{
    int variavel1;
    scanf("%d", &variavel1);
    inc(&variavel1);
    printf("valor da variavel: %d", variavel1);
    
    int *ponteiro = cria_variavel(); // o ponteiro recebe o endereço da variavel da função;
    printf("valor da variavel: %d ", *ponteiro);

    return 0;
}