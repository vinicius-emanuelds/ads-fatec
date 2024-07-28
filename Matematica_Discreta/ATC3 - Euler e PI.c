#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// ATIVIDADE COMPUTACIONAL 3 - Euler e Pi: 1� ADS NOTURNO 2024.01

// ARTHUR PICHELLI MADOENHO
// FILIPE LE�O SANTOS
// LUCAS VIEIRA DA SILVA
// VINICIUS EMANUEL DA SILVA

int main(void) {
  setlocale(LC_ALL,"Portuguese_Brazil");

  int n,i,k, opcao;
  float fat=1;
  float pi,e,contpi,conte;
  
  k = 0;
  
  while (opcao !=3) {
    printf("\n ============ Menu ============ ");
    printf("\n 1-Aproximar Euler"); // E = 2,71
    printf("\n 2-Aproximar Pi"); // PI = 3,14
    printf("\n 3-Sair");
    printf("\n");
    
    while (k != 1){
      printf("\nDigite a op��o desejada: ");
      scanf ("%d", &opcao);  

      if (opcao<1 || opcao>2){
          if (opcao == 3){
            exit(0);
          }else{
            k = 0;
            printf("\nOp��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
          }
          
      }else{
          k = 1;
      }
    }

    printf("\nDigite o N desejado: ");
    scanf("%d", &n);
   
    switch(opcao) {
      case 1:
        e=1;
        conte = 0;
        fat = 1;
        for (i=1; i<= n; i++) {
        fat=fat*i;
        conte = 1 / fat;
        e = e + conte;
        }
        printf("\ne aproximadamente = %.4f", e);
        printf("\n");
        k = 0;
        break;
      case 2: 
        pi=0;
        for (i=0; i<= n; i++) {
        contpi = (8.0 / ((4*i+1) * (4*i+3)));
        pi = pi + contpi;
        } 
        printf("\npi aproximadamente = %.4f", pi);
        printf("\n");
        k = 0;
        break;
      case 3: 
        break;
      default:
        k = 0;
    }
  }
}