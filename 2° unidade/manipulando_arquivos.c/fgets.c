/*
    funçoes para ler arquivos
   int fscanf( FILE* fp, char* formato,...);
   int fgetc(FILE* fp);
   char* fgets(char* s,int n, FILE* fp);
  */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // cria o arquivo: entrada_escrita.txt no modo "w" write
    FILE *arquivo = fopen("entrada.txt", "r");
    char s[20];

    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else
    {
        printf("Arquivo foi gerado com sucesso!!\n");
    }
    // usando o fgets para ler uma linha do arquivo
    //char* fgets(char* s,int tamanho da string, FILE* fp);
    fgets(s,20,arquivo);//
    // imprime a string lida
    printf("%s\n", s);

    if (!fclose(arquivo))
    {
        printf("Arquivo fechado com sucesso!\n");
    }

    return 0;
}