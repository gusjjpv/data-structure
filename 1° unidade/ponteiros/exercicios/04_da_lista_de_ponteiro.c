#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void calculaHexagono(float l, float *area, float *perimetro);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float lado, a, p = 0;

    printf("Informe o tamanho do lado do hexágono regular?");
    scanf("%f", &lado);

    calcula_hexagono(lado, &a, &p);

    printf("A área do hexágono regular é %.3f com Perímetro %.2f.", a, p);

    return 0;
}

void calculaHexagono(float l, float *area, float *perimetro)
{

    *area = (3 * pow(l, 2) * sqrt(3) / 2);
    *perimetro = 6 * l;
}
