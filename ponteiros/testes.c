#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numQuest, i, j, aprovados = 0;
    float notas, qtdAprovados;

    // leitura da quantidade de questoes
    printf("Informe a quantidade de questões:");
    scanf("%d", &numQuest);

    // leitura do gabarito
    char gabarito[numQuest];
    printf("Informe o gabarito:");
    for (i = 0; i < numQuest; i++)
    {
        scanf(" %c", &gabarito[i]);
    }

    // declarando vetor de ponteiro de ponteiro do tipo char
    char **respostas = (char **)malloc(10 * sizeof(char *));
    if (respostas == NULL)
    {
        printf("ERRO!!! Memória insuficiente");
        exit(1);
    }

    for (i = 0; i < 10; i++)
    {
        respostas[i] = (char *)malloc(numQuest * sizeof(char));
    }

    // leitura do gabarito dos alunos
    for (i = 0; i < 10; i++)
    {
        printf("Informe as respostas do aluno %d: ", i + 1);
        for (j = 0; j < numQuest; j++)
        {
            scanf(" %c", &respostas[i][j]);
        }
    }

    // calculando notas
    for (i = 0; i < 10; i++)
    {
        notas = 0.0; // reinicializa a variável notas para cada aluno
        for (j = 0; j < numQuest; j++)
        {
            if (respostas[i][j] == gabarito[j])
            {
                notas += 10.0 / numQuest;
            }
        }
        printf("Nota do aluno %d: %.2f\n", i + 1, notas);
        if (notas >= 6.0)
        {
            aprovados++;
        }
    }

    // mostrando a quantidade de alunos aprovados
    qtdAprovados = aprovados * 100.0 / 10;
    printf("A taxa de aprovação foi de %.2f%%\n", qtdAprovados);

    // liberando a memoria alocada
    for (i = 0; i < 10; i++)
    {
        free(respostas[i]);
    }
    free(respostas);

    return 0;
}
