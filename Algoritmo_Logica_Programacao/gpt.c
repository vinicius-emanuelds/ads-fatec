#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    struct registro {
        char nome[15];
        int idade, id;
    };

    int k = 0, i = -1, j = 0, opcao = 0, altera = 0, nomid = 0;
    struct registro cadastro[8];

    while (opcao != 5) {
        printf("\n ============ Menu ============ ");
        printf("\n 1-Cadastrar");
        printf("\n 2-Alterar");
        printf("\n 3-Pesquisar");
        printf("\n 4-Relatório");
        printf("\n 5-Sair");
        printf("\n");

        do {
            printf("\nDigite a opção desejada: ");
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > 5) {
                printf("\nOpção inválida. Por favor, escolha outra opção.\n");
            } else {
                k = 1;
            }
        } while (k != 1);

        k = 0;  // reset k for the next loop

        switch (opcao) {
            case 1:
                if (i < 7) {
                    i++;
                    setbuf(stdin, NULL);
                    printf("\nNome: ");
                    scanf("%s", cadastro[i].nome);
                    printf("\nIdade: ");
                    scanf("%d", &cadastro[i].idade);
                    cadastro[i].id = i+1;
                } else {
                    printf("\nCadastro cheio.\n");
                }
                break;
            case 2:
                if (i >= 0) {
                    printf("\nDADOS");
                    printf("\nID | NOME | IDADE");

                    for (j = 0; j <= i; j++) {
                        printf("\n %d | %s | %d", cadastro[j].id,
                                                      cadastro[j].nome,
                                                      cadastro[j].idade);
                    }
                    printf("\nEm qual ID está o dado que deseja alterar? ");
                    scanf("%d", &altera);

                    if (altera >= 0 && altera <= i) {
                        printf("\nO que você deseja alterar?\nDigite 1 para nome ou 2 para idade: ");
                        scanf("%d", &nomid);
                        if (nomid == 1) {
                            setbuf(stdin, NULL);
                            printf("\nDigite o novo nome: ");
                            scanf("%s", cadastro[altera].nome);
                        } else if (nomid == 2) {
                            printf("\nDigite a nova idade: ");
                            scanf("%d", &cadastro[altera].idade);
                        } else {
                            printf("\nOpção inválida");
                        }
                    } else {
                        printf("\nID inválido");
                    }
                } else {
                    printf("\nNenhum cadastro disponível para alterar.\n");
                }
                break;
            case 3:
                // Funcionalidade de pesquisa ainda não implementada
                printf("\nFuncionalidade de pesquisa não implementada.\n");
                break;
            case 4:
                if (i >= 0) {
                    printf("\nRELATÓRIO");
                    printf("\nID | NOME | IDADE");

                    for (j = 0; j <= i; j++) {
                        printf("\n %d | %s | %d", cadastro[j].id,
                                                      cadastro[j].nome,
                                                      cadastro[j].idade);
                    }
                } else {
                    printf("\nNenhum cadastro disponível.\n");
                }
                break;
            case 5:
                exit(0);
            default:
                break;
        }
    }

    return 0;
}
