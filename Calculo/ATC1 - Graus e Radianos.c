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

  int k, opcao;
  float deg, rad, resultado;
  
  k = 0;
  
  while (opcao != 3) {
    printf("\n ============ Menu ============ ");
    printf("\n 1 - Converta �ngulos em graus para radianos"); // E = 2,71
    printf("\n 2 - Converta �ngulos em radianos para graus"); // PI = 3,14
    printf("\n 3 - Sair");
    printf("\n");
    
    while (k != 1) {
      printf("\nDigite a op��o desejada: ");
      scanf("%d", &opcao);

      if (opcao < 1 || opcao > 3) {
        k = 0;
        printf("\nOp��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
      } else {
        k = 1;
      }
    }

    switch (opcao) {
      case 1:
        printf("\nDigite a medida do �ngulo, em graus: ");
        scanf("%f", &deg);
        resultado = (deg * M_PI) / 180.0;
        printf("\nO �ngulo mede, aproximadamente, %.4f rad.", resultado);
        printf("\n");
        k = 0;
        break;

      case 2:
        printf("\nDigite a medida do �ngulo, em radianos: ");
        scanf("%f", &rad);
        resultado = (rad * 180.0) / M_PI;
        printf("\nO �ngulo mede, aproximadamente, %.4f�.", resultado);
        printf("\n");
        k = 0;
        break;

      case 3:
        printf("\nSaindo do programa...\n");
        break;

      default:
        k = 0;
    }
  }

  return 0;
}
