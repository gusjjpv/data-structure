#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 04/12/2023

int soma(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}

int divisao(int a, int b)
{
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int))
{
    return (*operacao)(x, y);
}

int primeiroNum()
{
    int a;
    printf("Informe o primeiro numero: \n");
    scanf("%d", &a);
    return a;
}

int segundoNum()
{
    int a;
    printf("Informe o segundo numero: \n");
    scanf("%d", &a);
    return a;
}

int main(void)
{
    setlocale(LC_ALL, "portuguese");

    int escolha = 0, num1 = 0, num2 = 0, resultado;
    do
    {

        printf("Escolha a opcaoo:\n[1]-soma\n[2]-subtracao\n[3]-multiplicacao\n[4]-divisao\n[5]-sair\n");
        scanf("%d", &escolha);
        system("cls");
        switch (escolha)
        {
        case 1:
            num1 = primeiroNum();
            num2 = segundoNum();
            resultado = calcula(num1, num2, soma);
            printf("Resultado da soma: %d\n", resultado);
            break;
        case 2:
            num1 = primeiroNum();
            num2 = segundoNum();
            resultado = calcula(num1, num2, subtracao);
            printf("Resultado da subtracao: %d\n", resultado);
            break;
        case 3:
            num1 = primeiroNum();
            num2 = segundoNum();
            resultado = calcula(num1, num2, multiplicacao);
            printf("Resultado da multiplicacao: %d\n", resultado);
            break;
        case 4:

            num1 = primeiroNum();
            num2 = segundoNum();
            if (num2 == 0)
            {
                printf("ERRO!!! operacao por zero\n");
                break;
            }
            resultado = calcula(num1, num2, divisao);
            printf("Resultado da divisao: %d\n", resultado);
            break;
        case 5:
            break;
        default:
            printf("\n Operacaoo invalida\nEscolha novamente:\n");
            break;
        }

    } while (escolha != 5);

    return 0;
}