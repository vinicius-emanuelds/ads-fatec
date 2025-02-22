#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

        FILE *fp = fopen("D:\\OneDrive\\Documentos\\PROGRAMAS\\1.GIT\\ads-fatec\\Linguagem_Programacao\\26.10.24 - Manipulação de arquivos\\frutas.txt", "r");

        if (fp == NULL) {
            printf("Arquivo não encontrado.\n");
            return -1;
        }

        char ch;
        //Ler caracter a caracter enquanto for != de fim de arquivo (E0F)
        while ((ch = fgetc(fp))!= EOF) {
            putchar(ch);
        }

        fclose(fp); //Fechar o arquivo

    return 0;
}