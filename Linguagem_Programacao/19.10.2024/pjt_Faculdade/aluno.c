#include <stdio.h>
#include "aluno.h"
#include <locale.h>
#include <stdlib.h>

/**
* @author Vinicius Silva
* @since 
*/

void inicializa() {
    //Varre o vetor e colocar  null em todas as posi��es
    for (int i = 0; i < MAX; i++) {
        v[i] = NULL;
    }
}
void ler_dados(int i) {
    if (v[i] != NULL) {
        printf("Posi��o j� preenchida!\n");
        return;
    }

    v[i] = (p_aluno) malloc(sizeof(struct Aluno));
    fflush(stdin);

    printf("Digite o nome do aluno: \n");
        scanf("%[^\n]", v[i]->nome);

    printf("Digite a matr�cula: \n");
        scanf("%d", &v[i]->matricula);
    
    printf("Digite o endere�o: \n");
        scanf("%[^\n]", v[i]->endereco);
    
    printf("Digite o telefone: \n");
        scanf("%[^\n]", v[i]->telefone);

    printf("Digite a nota: \n");
        scanf("%lf", &v[i]->nota);

    printf("Cadastrado com sucesso!\n");
} 
void imprimir_unico(int i) {
    if (v[i] != NULL){
        printf("Dados do aluno de RA %d \n", v[i]->matricula);
        printf("Nome do aluno: %s\n", v[i]->nome);
        printf("Endere�o do aluno: %s\n", v[i]->endereco);
        printf("Telefone do aluno: %s\n", v[i]->telefone);
        printf("Nota do aluno: %.2lf\n", v[i]->nota);
    }
}

void imprimir_tudo() {
    for (int i = 0; i < MAX; i++) {
        imprimir_unico(i);
        printf("\n");
    }
}