#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// ATIVIDADE COMPUTACIONAL 1 - Graus e Radianos: 2º ADS NOTURNO 2024.02
// ARTHUR PICHELLI MADOENHO
// JULIA MARQUES
// LUCAS VIEIRA DA SILVA
// VINICIUS EMANUEL DA SILVA

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;
    double deg, rad, resultado;

    // Inicializa a opção com um valor que não seja válido no menu.
    opcao = 0;

    while (opcao != 3) {
        // Exibe o menu
        printf("\n ============ Menu ============ ");
        printf("\n 1 - Converta ângulos em graus para radianos");
        printf("\n 2 - Converta ângulos em radianos para graus");
        printf("\n 3 - Sair");
        printf("\n");

        // Obtém a opção do usuário
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        // Verifica se a opção é válida
        if (opcao < 1 || opcao > 3) {
            printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
            continue; // Pula para o próximo ciclo do while
        }

        switch (opcao) {
            case 1:
                printf("\nDigite a medida do ângulo, em graus: ");
                scanf("%lf", &deg);
                resultado = (deg * M_PI) / 180.0;
                printf("\nO ângulo mede, aproximadamente, %.4lf rad.", resultado);
                break;

            case 2:
                printf("\nDigite a medida do ângulo, em radianos: ");
                scanf("%lf", &rad);
                resultado = (rad * 180.0) / M_PI;
                printf("\nO ângulo mede, aproximadamente, %.4lfº.", resultado);
                break;

            case 3:
                printf("\nSaindo do programa...\n");
                break;

            default:
                // Esse caso nunca será alcançado devido ao check anterior, mas é uma boa prática.
                printf("\nOpção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
