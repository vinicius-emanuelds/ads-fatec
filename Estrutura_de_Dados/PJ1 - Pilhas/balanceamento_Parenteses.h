#ifndef BALANCO_H
#define BALANCO_H
#include <stdbool.h>

enum {
    TAMANHO = 20,
};

// Variáveis
extern int pilha[TAMANHO];
extern int posicao;

// Protótipos
bool estaCheia();
bool push(int valor);
bool pop();
int peek();

#endif
