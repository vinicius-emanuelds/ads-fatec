#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 19 out 2024
*/

struct Aluno {
    int ra;
    char nome[51];
    char email[51];
};

void imprimir(struct Aluno aluno);
void ler(struct Aluno *aluno);


int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    struct Aluno aluno;

    ler(&aluno);
    printf("\n----------------\n");
    imprimir(aluno);

    return 0;
}

void imprimir(struct Aluno aluno){  
    printf("\n=========== ALUNO =================\n");
    printf("Dados do Aluno\n");
    printf("RA: %d\n", aluno.ra);
    printf("Nome: %s\n", aluno.nome);
    printf("Email: %s\n", aluno.email);
    printf("=======================================\n");
}

void ler(struct Aluno *aluno){
    printf("Digite o RA do aluno: ");
        scanf("%d", &aluno->ra);
    fflush(stdin);
    
    printf("Digite o nome do aluno: ");
        scanf("%[^\n]", aluno->nome);
    fflush(stdin);

    printf("Digite o email do aluno: ");
        scanf("%[^\n]", aluno->email);

    printf("Dados Cadastrados!");
}
