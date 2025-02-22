#include "balanceamento_Parenteses.h"

// Variáveis
int pilha[TAMANHO];
int posicao = 0;

// Funções
bool estaCheia() {
    return posicao == TAMANHO;
}

bool push(int valor) {
    if (estaCheia()) {
        return false;
    }
    pilha[posicao] = valor;
    posicao++;
    return true;
}

bool pop() {
    if (posicao == 0) {
        return false;
    }
    posicao--;
    return true;
}

int peek() {
    if (posicao > 0) {
        return pilha[posicao - 1];
    }
    return -1; // Retorna -1 para indicar pilha vazia
}
