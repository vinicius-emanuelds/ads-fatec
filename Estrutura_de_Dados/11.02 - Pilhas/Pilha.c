//
// Created by nava on 11/02/25.
//
#include "Pilha.h"

// Vari�veis
int pilha[TAMANHO];
int posicao = 0;

// Fun��es
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

bool pop(int *valor) {
    if (posicao == 0) {
        return false;
    }
    posicao--;
    *valor = pilha[posicao];
    return true;
}