# Complexidade de algoritmos

## Complexidade de espaço

O espaço requerido por um algoritmo depende de dois componentes:

a. Uma parte fixa que é independente das características de
entradas/saídas.

b. Uma parte variável que é dependente da instância do problema
sendo resolvido.

float abc(int a, int b, int c) {

return a+b+b\*c+(a+b-c)/(a+b)+4.0

}

Supondo que 12 bytes é suficiente para
armazenar os valores de a, b, c e o resultado, vemos que o espaço
necessário para abc é independente das características da instanciação
do algoritmo, logo, SP
= 0
○ abc(2, 1, 3) = constante

## Complexidade de tempo

O tempo de execução numa determinada entrada, é o número de
operações primitivas executadas.

○ Operações primitivas: atribuições, comparações, somas, etc....

○ Cada linha do pseudocódigo requer tempo constante para ser
executado (independente do tamanho do input).
○ Linhas diferentes podem requerer tempos diferentes.
○ O tempo total é a soma dos tempos de cada linha do algoritmo

### analise de tempo de execução

```c
 int soma_elementos(array[], n){
    int soma = 0; //c1, 1 vez

    for(int i=0;i<n-1;i++){ //c2, n+1 vezes
        soma += array[i];//c3, n vezes
    }

    return soma; //c4, 1 vez
 }
 //t(n) = 2.n+3
 //O(n)=linear
```
