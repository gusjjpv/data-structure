/*
Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gˆenero. O
gˆenero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa.
*/

#include <stdio.h>


typedef enum {
    MASCULINO,
    FEMININO
} Genero;


typedef struct {
    char nome[50];
    int idade;
    Genero genero;
} Pessoa;


void lerDados(Pessoa *p) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite a idade: ");
    scanf("%d", &(p->idade));

    printf("Digite o gênero (0 para masculino, 1 para feminino): ");
    scanf("%d", (int*)&(p->genero));
}


void imprimirDados(Pessoa *p) {
    printf("Nome: %s \n", p->nome);
    printf("Idade: %d \n", p->idade);
    printf("Gênero: %s \n", p->genero == MASCULINO ? "Masculino" : "Feminino");
}

int main() {
    Pessoa pessoa;

    lerDados(&pessoa);
    imprimirDados(&pessoa);

    return 0;
}