Uma pilha é uma estrutura de dados linear que segue a disciplina de acesso LIFO (Last In First Out), o que significa que o último elemento adicionado à pilha será o primeiro a ser removido. Ela tem duas operações principais que ocorrem no topo da pilha: push e pop.

push: Adiciona um elemento ao topo da pilha.
pop: Remove um elemento do topo da pilha.
Aqui está um exemplo simples de uma pilha em C:
```c
#include <stdio.h>
#define MAX 10

int pilha[MAX];
int topo = -1;

void push(int valor) {
    if(topo < MAX - 1) {
        topo++;
        pilha[topo] = valor;
    } else {
        printf("Pilha cheia\n");
    }
}

int pop() {
    if(topo >= 0) {
        int valor = pilha[topo];
        topo--;
        return valor;
    } else {
        printf("Pilha vazia\n");
        return -1;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("%d\n", pop()); // Imprime: 30
    printf("%d\n", pop()); // Imprime: 20
    return 0;
}
```