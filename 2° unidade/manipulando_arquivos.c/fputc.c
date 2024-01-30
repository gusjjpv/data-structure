#include <stdio.h>
#include <stdlib.h>

int main(void){

    //cria o arquivo: entrada_escrita.txt no modo "w" write
    FILE * arquivo = fopen("entrada_escrita.txt", "w");

    if(arquivo == NULL){
        printf("Erro! ao abrir o arquivo");
        exit(1);
    }else{
        printf("Arquivo aberto! \n");
    }
    
    //escreve caractere no arquivo
    fputc('A', arquivo);
    //escreve string no arquivo
    fputs("\nHello world!\n", arquivo);
    
    fprintf(arquivo, "meu texto!\n");

    if(!fclose(arquivo)){
        printf("Arquivo fechado com sucesso!");
    }
    return 0;
}