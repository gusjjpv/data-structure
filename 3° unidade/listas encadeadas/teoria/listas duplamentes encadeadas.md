lista circular é uma lista encadeada que o ultimo elemento aponta para o primeiro.

uma lista duplamente encadeada vai ter o endereço do proximo item e o endereço do intem anterior

exemplo de struct de uma lista duplamente encadeada:

```c
    struct lista2{
        int info;
        struct lista2* ant;
        struct lista2* prox;
    };

    typedef struct lista2 Lista2
```

função que ensere elemenos na lista 

```c
Lista2* lst2_insere(Lista2* l, int v){
    Lista2* novo = (Lista2*)
}
```