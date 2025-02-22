//
// Created by nava on 11/02/25.
//

#ifndef PILHA_H
#define PILHA_H
#include <stdbool.h>
// Constantes
enum {
    TAMANHO = 5,
};

// Variáveis
extern int pilha[TAMANHO];
extern int posicao;

// Protótipos
bool push(int valor);
bool pop(int *valor);

#endif //PILHA_H
