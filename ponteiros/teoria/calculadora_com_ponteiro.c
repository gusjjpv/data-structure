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

void pedirNums(int *a, int *b)
{
    int x, y;
    printf("Informe o primeiro numero: \n");
    scanf("%d", &x);
    printf("Informe o segundo numero: \n");
    scanf("%d", &y);

    *a = x;
    *b = y;
}

int main(void)
{
    setlocale(LC_ALL, "portuguese");

    int escolha = 0, num1 = 0, num2 = 0, resultado;
    do
    {

        printf("\nEscolha a opcao:\n[1]-soma\n[2]-subtracao\n[3]-multiplicacao\n[4]-divisao\n[5]-sair\n");
        scanf("%d", &escolha);
        system("cls");
        switch (escolha)
        {
        case 1:
            pedirNums(&num1, &num2);
            resultado = calcula(num1, num2, soma);
            printf("\nResultado da soma: %d\n", resultado);
            break;
        case 2:
            pedirNums(&num1, &num2);
            resultado = calcula(num1, num2, subtracao);
            printf("Resultado da subtracao: %d\n", resultado);
            break;
        case 3:
            pedirNums(&num1, &num2);
            resultado = calcula(num1, num2, multiplicacao);
            printf("Resultado da multiplicacao: %d\n", resultado);
            break;
        case 4:
            pedirNums(&num1, &num2);
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