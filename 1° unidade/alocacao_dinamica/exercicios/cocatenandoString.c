#include <stdio.h>
#include <stdlib.h>

char* concatenaStrings(const char* str1, const char* str2) {
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i);
    for (j = 0; str2[j] != '\0'; ++j);

    char* str3 = malloc(i + j + 1);

    for (i = 0; str1[i] != '\0'; ++i)
        str3[i] = str1[i];

    for (j = 0; str2[j] != '\0'; ++j)
        str3[i+j] = str2[j];

    str3[i+j] = '\0';

    return str3;
}

int main() {
    const char* str1 = "Olá, ";
    const char* str2 = "mundo!";
    char* resultado = concatenaStrings(str1, str2);

    printf("%s\n", resultado);  // Deve imprimir: "Olá, mundo!"

    free(resultado);  // Não se esqueça de liberar a memória alocada!

    return 0;
}