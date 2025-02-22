#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções do arquivo de derivadas
void xElevadoAK();
void lnDeX();
void kElevadoAX();

// Protótipos das funções do arquivo de integrais
int integral1();
int integral2();

// Funções de teste
void testarDerivadas() {
    printf("\n[Teste Derivadas - xElevadoAK]\n");
    printf("Entradas: k=2, x=3\n");
    printf("Saída Esperada: f(3.00) = 6.00\n");
    xElevadoAK();

    printf("\n[Teste Derivadas - lnDeX]\n");
    printf("Entradas: x=0\n");
    printf("Saída Esperada: Erro (x deve ser maior que 0)\n");
    lnDeX();

    printf("\n[Teste Derivadas - kElevadoAX]\n");
    printf("Entradas: k=1, x=3\n");
    printf("Saída Esperada: Erro (k > 0 e k != 1)\n");
    kElevadoAX();
}

void testarIntegrais() {
    printf("\n[Teste Integrais - integral1]\n");
    printf("Entradas: k=2, a=1, b=3\n");
    printf("Saída Esperada: I(1, 3) = [resultado]\n");
    integral1();

    printf("\n[Teste Integrais - integral2]\n");
    printf("Entradas: a=0, b=2\n");
    printf("Saída Esperada: Erro (limites não podem ser nulos)\n");
    integral2();
}

int main() {
    printf("=== Testando funções de Derivadas ===\n");
    testarDerivadas();

    printf("\n=== Testando funções de Integrais ===\n");
    testarIntegrais();

    return 0;
}
