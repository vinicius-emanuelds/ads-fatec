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

  int opcao = 0;
  float deg, rad, resultado;
  
  do {
    printf("\n ============ Menu ============ ");
    printf("\n 1 - Converta �ngulos em graus para radianos");
    printf("\n 2 - Converta �ngulos em radianos para graus");
    printf("\n 3 - Sair");
    printf("\n");
    
    printf("\nDigite a op��o desejada: ");
      scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("\nDigite a medida do �ngulo, em graus: ");
        scanf("%f", &deg);
        resultado = (deg * M_PI) / 180.0;
        printf("\nO �ngulo mede, aproximadamente, %.4f rad.", resultado);
        printf("\n");
        break;

      case 2:
        printf("\nDigite a medida do �ngulo, em radianos: ");
        scanf("%f", &rad);
        resultado = (rad * 180.0) / M_PI;
        printf("\nO �ngulo mede, aproximadamente, %.4f�.", resultado);
        printf("\n");
        break;

      case 3:
        printf("\nSaindo do programa...\n");
        break;

      default:
        printf("\nOp��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
    }
  } while (opcao != 3);

  return 0;
}
