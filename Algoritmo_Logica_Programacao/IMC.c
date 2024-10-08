#include <stdio.h>

void main() {
  int peso;
  float altura, imc;

  printf("Informe o peso (em kgs):\n");
  scanf("%d", &peso);

  printf("\nInforme a altura (em metros):\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\n\nIMC = peso / (altura * altura)");
  printf("\n\nIMC calculado   Situacao");
  printf("\n------------------------------");
  printf("\nMenos de 20     Abaixo do peso");
  printf("\n20 <= IMC < 25  Peso Normal");
  printf("\n25 <= IMC < 30  Acima do peso");
  printf("\n30 <= IMC < 34  Obeso");
  printf("\nAcima de 34     Muito Obeso");
  printf("\n------------------------------");
  printf("\nIMC = %.2f", imc);
  if (imc < 20)
     printf(" (abaixo do peso).");
  else if ((imc >= 20) && (imc < 25))
          printf(" (peso normal).");
       else if ((imc >= 25) && (imc < 30))
               printf(" (acima do peso).");
            else if ((imc >= 30) && (imc < 34))
                    printf(" (obeso).");
     else
        printf(" (muito obeso).");
}