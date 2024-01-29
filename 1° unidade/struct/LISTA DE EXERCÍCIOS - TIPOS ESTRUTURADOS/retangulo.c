#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float base;
    float altura;
} Retangulo;

typedef struct {
    float raio;
} Circulo;

Retangulo* ret_circunscrito(Circulo* c, float h);

Circulo* circ_interno(Retangulo* r);

int main() {
    // Teste das funções
    Circulo* c = (Circulo*)malloc(sizeof(Circulo));
    c->raio = 5;
    float h = 3;
    Retangulo* ret = ret_circunscrito(c, h);
    printf("Retângulo circunscrito: base = %.2f, altura = %.2f\n", ret->base, ret->altura);

    Retangulo* r = (Retangulo*)malloc(sizeof(Retangulo));
    r->base = 10;
    r->altura = 8;
    Circulo* circ = circ_interno(r);
    printf("Círculo interno: raio = %.2f\n", circ->raio);

    free(c);
    free(ret);
    free(r);
    free(circ);

    return 0;
}

Retangulo* ret_circunscrito(Circulo* c, float h) {
    Retangulo* ret = (Retangulo*)malloc(sizeof(Retangulo));
    float diametro = c->raio * 2;
    ret->base = diametro;
    ret->altura = h;
    return ret;
}

Circulo* circ_interno(Retangulo* r) {
    Circulo* circ = (Circulo*)malloc(sizeof(Circulo));
    circ->raio = r->altura / 2;
    return circ;
}
