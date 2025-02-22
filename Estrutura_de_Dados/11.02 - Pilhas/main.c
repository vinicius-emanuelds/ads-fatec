#include <stdio.h>

#include "Pilha.h"

// Constantes
enum {
    OP_NAO_SELCIONADA = 0,
    OP_PUSH,
    OP_POP,
    OP_SAIR
};

// Protótipos
int menu();

int main(void) {
    int opcao = OP_NAO_SELCIONADA;
    int numero = 0;

    while (opcao != OP_SAIR) {
        opcao = menu();
        switch (opcao) {
            case OP_PUSH:
                printf("Digite o valor: ");
                scanf("%d", &numero);
                if (!push(numero)) {
                    printf("Estouro de pilha\n");
                }
                break;
            case OP_POP:
                if (pop(&numero)) {
                    printf("Retirado %d da pilha\n", numero);
                }
                else {
                    printf("Pilha vazia\n");
                }
                break;
            case OP_SAIR:
                break;
            default:
                printf("Opção inválida\n");
        }
    }
    return 0;
}

int menu() {
    int op = 0;
    printf("Menu:\n");
    printf("%d - push\n", OP_PUSH);
    printf("%d - pop\n", OP_POP);
    printf("%d - sair\n", OP_SAIR);
    printf("Digite sua opcao: ");
    scanf("%d", &op);
    return op;
}
