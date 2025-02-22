#include <stdio.h>
#include "aluno.h"
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/

p_aluno v[MAX];

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    inicializa();

    int posicao = 0; // posição inicial do vetor
    int opcao = 0;
    int posicaoDesejada = 0;

    do {
        printf("\n ============ Menu ============ ");
        printf("\n 1 - Cadastrar aluno");
        printf("\n 2 - Mostrar aluno único");
        printf("\n 3 - Mostrar todos os alunos");
        printf("\n 9 - Sair");
        printf("\n");
        
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                ler_dados(posicao);
                posicao ++;
                break;
            
            case 2:
                printf("Digite a posição desejada: \n");
                    scanf("%d", &posicaoDesejada);
            
                imprimir_unico(posicaoDesejada);
                break;

            case 3:
                imprimir_tudo();
                break;
            
            case 9:
                printf("Fim do programa!\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 9);
    

    return 0;
}