#include <stdio.h>

int main(void) {
  int idade, i, maioridade=0, menoridade=1000;
  for (i=1;i<4;i++){
    printf("\nInforme a idade: ");
    scanf("%d",&idade);
    if (idade>maioridade){
      maioridade=idade;
    }
    if (idade<menoridade){
      menoridade=idade;
    }
  }
  printf("\nA maior idade é %d",maioridade);
  printf("\nA menor idade é %d",menoridade); 
}
