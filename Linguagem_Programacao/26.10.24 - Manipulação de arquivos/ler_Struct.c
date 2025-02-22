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

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    Aluno aluno;

    // Abre o arquivo em modo de leitura
    FILE *fp = fopen("D:\\OneDrive\\Documentos\\PROGRAMAS\\1.GIT\\ads-fatec\\Linguagem_Programacao\\26.10.24 - Manipulação de arquivos\\Aluno.txt", "r");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return -1;
    }

    // Lê os dados do aluno do arquivo
    while (fscanf(fp, "RM: %d, Nome: %[^\n]\n", &aluno.rm, aluno.nome) != EOF) {
        printf("RM: %d, Nome: %s\n", aluno.rm, aluno.nome);
    }

    fclose(fp);  // Fecha o arquivo após a leitura

    return 0;
}
