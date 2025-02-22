/*
CÁLCULO - 2º ADS NOTURNO
ATIVIDADE COMPUTACIONAL 3 - DERIVADAS
LUCAS VIEIRA DA SILVA
MARCELO FELIPE BELOTTO
VINICIUS EMANUEL DA SILVA
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void xElevadoAK();
void lnDeX();
void kElevadoAX();

int main(void){
    setlocale (LC_ALL, "Portuguese_Brazil");

    int opcao = 0;
    
    do {
        printf("\n ============ Menu ============ ");
        printf("\n 1 - f(x) = x^k");
        printf("\n 2 - f(x) = ln(x)");
        printf("\n 3 - f(x) = k^x");
        printf("\n 4 - Sair");
        printf("\n");
        
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                xElevadoAK();
                break;

            case 2:
                lnDeX();
                break;

            case 3:
                kElevadoAX();
                break;

            case 4:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 4);
}

void xElevadoAK() { // f(x) = a * x + b
    double k = 0, x = 0, resultado = 0;

    printf("Digite o valor de k: ");
    scanf("%lf", &k);
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x == 0 && k <= 0) {
        printf("Erro: O valor de x não pode ser igual a 0 para k menor ou igual a 0.\n");
        return;
    }

    resultado = k * pow(x, k - 1);
    printf("f(%.2lf) = %.4lf\n", x, resultado);
}

void lnDeX() { // f(x) = ln(x)
    double x = 0, resultado = 0;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x > 0) {
        resultado = 1 / x;
        printf("f(%.2lf) = %.4lf\n", x, resultado);
    } else {
        printf("Erro: O valor de x deve ser maior que 0.\n");
    }
}

void kElevadoAX() { // f(x) = k^x
    double k = 0, x = 0, resultado = 0;

    printf("Digite o valor de k: ");
    scanf("%lf", &k);
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (k > 0 && k != 1) {
        resultado = pow(k, x) * log(k);
        printf("f(%.2lf) = %.4lf\n", x, resultado);
    } else {
        printf("Erro: O valor de k deve ser maior que 0 e diferente de 1.\n");
    }
}
