#include <stdio.h>

// definindo constante
// #define TRUE
// #define FALSE 1

// enumeração

typedef enum bool
{
    true, // = 0
    false // = 1
} Bool;

int main(void)
{
    Bool resposta;
    /*int resposta;
    printf("Você gosta de algoritmo?\n 0-True\n1-False\n");
    scanf("%d", &resposta);
    if (resposta == TRUE)
    {
        printf("Boa escolha\n");
    }
    else if (resposta == FALSE)
    {
        printf("Que pena! \n");
    }*/

    printf("Você gosta de algoritmo?\n 0-True\n1-False\n");
    scanf("%u", &resposta);
    if (resposta == true)
    {
        printf("Boa escolha\n");
    }
    else if (resposta == false)
    {
        printf("Que pena! \n");

        return 0;
    }
}