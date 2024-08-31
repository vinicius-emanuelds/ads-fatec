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

  int k, opcao;
  float deg, rad, resultado;
  
  k = 0;
  
  while (opcao != 3) {
    printf("\n ============ Menu ============ ");
    printf("\n 1 - Converta ângulos em graus para radianos");
    printf("\n 2 - Converta ângulos em radianos para graus");
    printf("\n 3 - Sair");
    printf("\n");
    
    while (k != 1) {
      printf("\nDigite a opção desejada: ");
      scanf("%d", &opcao);

      if (opcao < 1 || opcao > 3) {
        k = 0;
        printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
      } else {
        k = 1;
      }
    }

    switch (opcao) {
      case 1:
        printf("\nDigite a medida do ângulo, em graus: ");
        scanf("%f", &deg);
        resultado = (deg * M_PI) / 180.0;
        printf("\nO ângulo mede, aproximadamente, %.4f rad.", resultado);
        printf("\n");
        k = 0;
        break;

      case 2:
        printf("\nDigite a medida do ângulo, em radianos: ");
        scanf("%f", &rad);
        resultado = (rad * 180.0) / M_PI;
        printf("\nO ângulo mede, aproximadamente, %.4fº.", resultado);
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
