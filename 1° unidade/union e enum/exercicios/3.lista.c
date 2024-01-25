/*
Escreva um programa que implementa uma struct Data com os campos dia, mˆes e ano. O mˆes deve
ser armazenado como um enum com os valores JANEIRO, FEVEREIRO, MARC¸ O, ABRIL, MAIO,
JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO e DEZEMBRO. O programa
deve ler a data e imprimir a data no formato dd/mm/aaaa.
*/


#include <stdio.h>
#include <stdlib.h>

typedef enum meses
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Meses;

typedef struct data{
    int dia;
    Meses mes;
    int ano;
}Data;

void lerData(Data *p){
    printf("Digite o dia:");
    scanf("%d", &p->dia);
    printf("Digite o mes:");
    scanf("%d",(int*) &(p->mes));
    printf("\nDigite o ano:");
    scanf("%d", &p->ano);
}

void imprimirData(Data *p){
    printf("%s%d/%s%d/%d", p->dia < 10 ? "0" : "", p->dia, p->mes < 10 ? "0" : "", p->mes, p->ano);
}

int main(void)
{
    Data data;
    
    lerData(&data);
    imprimirData(&data);
    return 0;
}