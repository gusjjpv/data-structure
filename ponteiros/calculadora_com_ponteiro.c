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
    do
    {
        printf("Escolha a opcao:\n[1]-soma\n[2]-subtracao\n[3]-multiplicacao\n[4]-divisao\n[5]-sair\n");
        scanf("%d", &escolha);
        system("cls");
        switch (escolha)
        {
        case 1:
            printf("Informe o primeiro numero: \n");
            scanf("%d", &num1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &num2);
            resultado = calcula(num1, num2, soma);
            printf("Resultado da soma: %d\n", resultado);
            break;
        case 2:
            printf("Informe o primeiro numero: \n");
            scanf("%d", &num1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &num2);
            resultado = calcula(num1, num2, subtracao);
            printf("Resultado da subtracao: %d\n", resultado);
            break;
        case 3:
            printf("Informe o primeiro numero: \n");
            scanf("%d", &num1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &num2);
            resultado = calcula(num1, num2, multiplicacao);
            printf("Resultado da multiplicacao: %d\n", resultado);
            break;
        case 4:

            printf("Informe o primeiro numero: \n");
            scanf("%d", &num1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &num2);
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
            printf("/nOperação invalida/nEscolha novamente:\n");
            break;
        }
    } while (escolha != 5);
    return 0;
}