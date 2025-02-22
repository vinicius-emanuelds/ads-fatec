/*
CÁLCULO - 2º ADS NOTURNO
ATIVIDADE COMPUTACIONAL 4 - INTEGRAL DEFINIDA
LUCAS VIEIRA DA SILVA
MARCELO FELIPE BELOTTO
VINICIUS EMANUEL DA SILVA
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int integral1();
int integral2();

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int escolha;

    do {
        printf("\n========= Menu ========");
        printf("\n1. f(x) = x^k");
        printf("\n2. f(x) = 1/x");
        printf("\n3. Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                integral1();
                break;
            case 2:
                integral2();
                break;
            case 3:
                printf("\nSaindo...");
                break;
            default:
                printf("\nOpção inválida. Por favor, escolha uma opção válida");
                break;
        }
    } while (escolha != 3);
}

int integral1() {
    float k, a, b, resultado;
    
    printf("Digite o valor de k: ");
    scanf("%f", &k);
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    
    if (k != -1) {
        resultado = pow(b, k + 1) / (k + 1) - pow(a, k + 1) / (k + 1);
        printf("\nI(%1.f, %1.f) = %.4f\n", a, b, resultado);
    } else {
        if (a == 0 || b == 0 || a == b) {
            printf("Erro: Os limites a e b não devem ser nulos ou iguais.\n");
            return 0;
        }   

        resultado = log(fabs(b)) - log(fabs(a));
        printf("\nI(%1.f, %1.f) = %.4f\n", a, b, resultado);
    }

    return 0;
}

int integral2() {
    float a, b, resultado;

    printf("\nDigite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);

    if (a == 0 || b == 0 || a == b) {
        printf("Erro: Os limites a e b não devem ser nulos ou iguais.\n");
        return 0;
    }

    resultado = log(fabs(b)) - log(fabs(a));
    printf("\nI(%1.f, %1.f) = %.4f\n", a, b, resultado);

    return 0;
}
