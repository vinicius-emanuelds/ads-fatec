#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    system("chcp 65001"); // Definir o código de página para UTF-8 no Windows

    FILE *fp = fopen("D:\\OneDrive\\Documentos\\PROGRAMAS\\1.GIT\\ads-fatec\\Linguagem_Programacao\\26.10.24 - Manipulação de arquivos\\frutas.txt", "a");

    if (fp == NULL) {
        printf("Arquivo não encontrado.\n");
        return -1;
    }

    char str[100];
    fflush(stdin);

    printf("Digite a frutas que deseja adicionar ao arquivo: \n");
        scanf("%[^\n]",str);
    
    //Escrever a fruta no final do arquivo
    char *p_letra = str;
    while (*p_letra != '\0') {
        fputc(*p_letra, fp);
        p_letra++;
    }
    fputc ('\n', fp); //Pular uma linha
    fclose(fp); //Fechar o arquivo

    return 0;
}