#include <stdio.h>
#include <locale.h>
#include "balanceamento_Parenteses.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    char expressao[100];
    char parenteseAberto = '(';
    char parenteseFechado = ')';

    printf("Digite a express�o: ");
        fgets(expressao, 100, stdin);
    
    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == parenteseAberto) {
            if (estaCheia()) {
                printf("Limite de caracteres atingido\n");
            } else {
                push(1);
            }           
        } else if (expressao[i] == parenteseFechado) {
            if (!pop()) {
                    printf("Express�o desbalanceada!\n");
                    return 0;
            }
        }
    }

    if (peek() != -1) {
        printf("Express�o desbalanceada!\n");
        return 0;
    } else {
        printf("Express�o balanceada!\n");
    }

    return 0;
}