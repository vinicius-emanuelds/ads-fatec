#include <stdio.h>

int main(void) {
  int numero, i, tabuada=0;
  printf("\nInforme uma tabuada: ");
  scanf("%d",&numero);
  for (i=1;i<=10;i++){
    tabuada=numero*i;
    printf("\n%d*%i=%d",numero,i,tabuada);
  }
}