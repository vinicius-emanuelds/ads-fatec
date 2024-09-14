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

  int opcao = 0;
  float deg, rad, resultado;
  
  do {
    printf("\n ============ Menu ============ ");
    printf("\n 1 - Converta ângulos em graus para radianos");
    printf("\n 2 - Converta ângulos em radianos para graus");
    printf("\n 3 - Sair");
    printf("\n");
    
    printf("\nDigite a opção desejada: ");
      scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("\nDigite a medida do ângulo, em graus: ");
        scanf("%f", &deg);
        resultado = (deg * M_PI) / 180.0;
        printf("\nO ângulo mede, aproximadamente, %.4f rad.", resultado);
        printf("\n");
        break;

      case 2:
        printf("\nDigite a medida do ângulo, em radianos: ");
        scanf("%f", &rad);
        resultado = (rad * 180.0) / M_PI;
        printf("\nO ângulo mede, aproximadamente, %.4fº.", resultado);
        printf("\n");
        break;

      case 3:
        printf("\nSaindo do programa...\n");
        break;

      default:
        printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
    }
  } while (opcao != 3);

  return 0;
}
