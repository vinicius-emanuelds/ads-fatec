#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// ATIVIDADE COMPUTACIONAL 1 - Graus e Radianos: 2� ADS NOTURNO 2024.02
// ARTHUR PICHELLI MADOENHO
// JULIA MARQUES
// LUCAS VIEIRA DA SILVA
// VINICIUS EMANUEL DA SILVA

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;
    double deg, rad, resultado;

    // Inicializa a op��o com um valor que n�o seja v�lido no menu.
    opcao = 0;

    while (opcao != 3) {
        // Exibe o menu
        printf("\n ============ Menu ============ ");
        printf("\n 1 - Converta �ngulos em graus para radianos");
        printf("\n 2 - Converta �ngulos em radianos para graus");
        printf("\n 3 - Sair");
        printf("\n");

        // Obt�m a op��o do usu�rio
        printf("\nDigite a op��o desejada: ");
        scanf("%d", &opcao);

        // Verifica se a op��o � v�lida
        if (opcao < 1 || opcao > 3) {
            printf("\nOp��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
            continue; // Pula para o pr�ximo ciclo do while
        }

        switch (opcao) {
            case 1:
                printf("\nDigite a medida do �ngulo, em graus: ");
                scanf("%lf", &deg);
                resultado = (deg * M_PI) / 180.0;
                printf("\nO �ngulo mede, aproximadamente, %.4lf rad.", resultado);
                break;

            case 2:
                printf("\nDigite a medida do �ngulo, em radianos: ");
                scanf("%lf", &rad);
                resultado = (rad * 180.0) / M_PI;
                printf("\nO �ngulo mede, aproximadamente, %.4lf�.", resultado);
                break;

            case 3:
                printf("\nSaindo do programa...\n");
                break;

            default:
                // Esse caso nunca ser� alcan�ado devido ao check anterior, mas � uma boa pr�tica.
                printf("\nOp��o inv�lida. Tente novamente.\n");
        }
    }

    return 0;
}