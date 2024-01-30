#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    /* - Funções para abrir arquivos
       FILE * fopen(char * nome_arquivo, char * modo_abertura);
       - nome_arquivo: nome do arquivo que será aberto;
       - modo_abertura: modo de abertura do arquivo;
           - r: leitura;
           - w: escrita;
           - a: anexar;
           - r+: leitura e escrita;
           - w+: escrita e leitura;
           - a+: anexar e leitura;
           - b: modo binário;
           - t: modo texto;
           - +: atualização;
   */
    
    // cria o arquivo: entrada.txt no modo texto "t"
    FILE *fp;
    fp = fopen("entrada.txt", "w");
    // int c;
    char s[20];
    // verificar se o arquivo foi criado
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else
    {
        printf("Arquivo foi gerado com sucesso!!\n");
    }
    /*
    em python
    arquivo = open("entrada.txt", "w")
    print(arquivo.read())
    arquivo.close()
    */
    // funçoes para ler arquivos
    /*
     int fscanf( FILE* fp, char* formato,...);
     int fgetc(FILE* fp);
     char* fgets(char* s,int n, FILE* fp);
    */

    // c = fgetc(fp); // variavel c recebe o conteudo da função fgetc()
    // printf("%c\n", c);

    // fgets(s, 20, fp); // ler uma linha do arquivo
    // printf("%s\n", s); //imprime a string lida

    fscanf(fp, "%s", s);
    printf("%s\n", s); // imprime a string lida

    if (!fclose(fp))
    {
        printf("Arquivo fechado com sucesso!\n");
    } // fechar arquivo criado

    return 0;
}