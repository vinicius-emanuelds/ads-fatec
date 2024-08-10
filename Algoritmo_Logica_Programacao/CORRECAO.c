#include <stdio.h>

int main(void) {
  int qprod,qadq,i;
  float vunit, vtotal, ttg=0;
  char nome[10];
  printf("Digite a quantidade de produtos vendidos: ");
  scanf("%d",&qprod);
  
  for (i=1; i<=qprod; i++){
    printf("\n\n%dº Produto:",i);
    printf("\nNome do produto: ");
      scanf("%s",&nome);
    printf("Valor unitário: R$  ");
      scanf("%f",&vunit);
    printf("Quantidade Adquirida: ");
     scanf("%d",&qadq);
    printf("Valor total: R$ %.2f",vtotal = qadq * vunit);
    ttg = ttg + vtotal; 
  }
  printf("\n\nTotal Geral: R$ %.2f",ttg);
}