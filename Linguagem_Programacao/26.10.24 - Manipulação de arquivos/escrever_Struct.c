#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
typedef struct aluno {
    int rm;
    char nome[51];
} Aluno;

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    system("chcp 65001"); // Definir o código de página para UTF-8 no Windows
    
    Aluno aluno;
    fflush(stdin);

    //Dados do aluno (registro do aluno)
    printf("Digite o nome do aluno: ");
        scanf("%[^\n]", aluno.nome);
    printf("Digite o RM do aluno: ");
        scanf("%d", &aluno.rm);

    FILE *fp = fopen("D:\\OneDrive\\Documentos\\PROGRAMAS\\1.GIT\\ads-fatec\\Linguagem_Programacao\\26.10.24 - Manipulação de arquivos\\Aluno.txt", "a");

    if (fp == NULL) {
        printf("Arquivo não encontrado.\n");
        return -1;
    }

    //Escrever a fruta no final do arquivo
    fprintf(fp, "%d, %s\n", aluno.rm, aluno.nome);
    fclose(fp); //Fechar o arquivo

    return 0;
}