Listas encadeadas são estruturas de dados fundamentais na programação que permitem armazenar uma sequência de elementos de uma forma organizada, mas, ao contrário dos arrays, esses elementos não estão armazenados em posições contíguas de memória. Cada elemento de uma lista encadeada, geralmente chamado de "nó", contém duas partes: uma parte que armazena o dado (por exemplo, um número inteiro, um char, etc.) e outra parte que contém uma referência (ou ponteiro) para o próximo nó na lista. Se for uma lista simplesmente encadeada, cada nó aponta para o próximo nó na lista;

## Definição de uma Lista Encadeada Simples

Para criar uma lista encadeada em C, você primeiro precisa definir a estrutura de um nó. Aqui está um exemplo simples para uma lista encadeada de inteiros:

```
struct lista
{
    int informacao;
    Lista *prox_elemento;
};
```

Características Importantes

- Dinamicidade: As listas encadeadas são estruturas de dados dinâmicas, o que significa que você pode adicionar ou remover nós durante a execução do programa sem a necessidade de realocação ou reorganização de toda a estrutura de dados, como seria necessário em um array.

- Eficiência de Memória: Não há alocação de memória desnecessária; alocamos exatamente o que precisamos para cada elemento da lista.

- Flexibilidade: Listas encadeadas servem como a base para várias outras estruturas de dados, como listas duplamente encadeadas, listas circulares e pilhas/ filas implementadas através de listas.