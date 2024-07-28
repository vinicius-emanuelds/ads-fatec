#include <stdio.h>

int main(void) {
  int num, i;
  printf("Digite o número escolhido: ");
  scanf("%d",&num);
  for (i=1;i<num;i++){
    if (i%2==0){
      printf("\n%d",i);
    }
  }
}