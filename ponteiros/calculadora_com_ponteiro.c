#include <stdio.h>

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

int main(void)
{
    int escolha, num1, num2, resultado;

    printf("informe a operação:\n1-soma\n2-subtração\n3-multiplicação\n4-divisão");
    scanf("%d", &escolha);

    printf("Informe os numeros: ");
    scanf("%d %d", &num1, &num2);

    switch (escolha)
    {
    case 1:

        resultado = calcula(num1, num2, soma);
        printf("Resultado: %d", resultado);
        break;
    case 2:

        resultado = calcula(num1, num2, subtracao);
        printf("Resultado: %d", resultado);
        break;

    case 3:

        resultado = calcula(num1, num2, multiplicacao);
        printf("Resultado: %d", resultado);
        break;

    case 4:

        resultado = calcula(num1, num2, divisao);
        printf("Resultado: %d", resultado);
        break;

    default:
        printf("Operação invalida");
        break;
    }
    return 0;
}