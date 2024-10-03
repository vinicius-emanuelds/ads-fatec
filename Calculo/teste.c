#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    char descricao[100];
    float valor;
    int disponivel;
} Produto;

Produto produtos[MAX_PRODUTOS];
int contador_produtos = 0;

void cadastrar_produto() {
    if (contador_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }

    Produto p;
    printf("Nome do produto: ");
    scanf(" %[^\n]", p.nome);
    printf("Descrição do produto: ");
    scanf(" %[^\n]", p.descricao);
    printf("Valor do produto: ");
    scanf("%f", &p.valor);
    printf("Disponível para venda (1 - Sim, 0 - Não): ");
    scanf("%d", &p.disponivel);

    produtos[contador_produtos++] = p;
    listar_produtos();
}

void listar_produtos() {
    if (contador_produtos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    // Ordenação por valor do menor para o maior
    for (int i = 0; i < contador_produtos - 1; i++) {
        for (int j = i + 1; j < contador_produtos; j++) {
            if (produtos[i].valor > produtos[j].valor) {
                Produto temp = produtos[i];
                produtos[i] = produtos[j];
                produtos[j] = temp;
            }
        }
    }

    printf("\nLista de Produtos:\n");
    printf("Nome\t\tValor\n");
    for (int i = 0; i < contador_produtos; i++) {
        printf("%s\t\t%.2f\n", produtos[i].nome, produtos[i].valor);
    }
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_produto();
                break;
            case 2:
                listar_produtos();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);

    return 0;
}