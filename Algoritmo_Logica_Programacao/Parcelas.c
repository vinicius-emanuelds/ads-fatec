#include <stdio.h>

int main(void) {
  char nome [20], produto[20];
  float valor, total; 
  int qtd, qtdparc;
  printf ("\nOlá! Qual é o seu nome? ");
  scanf ("%s",nome);
  printf ("\nPerfeito! Qual produto você deseja? ");
  scanf ("%s",produto);
  printf ("\nCerto! Qual a quantidade desejada? ");
  scanf ("%d",&qtd);
  printf ("\nCerto! Qual o valor unitário do produto? ");
  scanf ("%f",&valor);
  printf ("\nEm quantas parcelas deseja pagar? ");
  scanf ("%d",&qtdparc);
  total=qtd*valor;
  if (qtdparc==1){
    printf ("\nVocê deverá pagar %d parcela, no valor total de R$ %.2f",qtdparc, ((total / qtdparc)*0.9));
    }else{
      if ((qtdparc>=2)&&(qtdparc>=5)){
      printf ("\nVocê deverá pagar %d parcelas, no valor de R$ %.2f, totalizando R$ %.2f",qtdparc,  (total/qtdparc),total);
        }else{
          if ((qtdparc>=6)&&(qtdparc>=10)){
          printf ("\nVocê deverá pagar %d parcelas, no valor de R$ %.2f, totalizando R$ %.2f",qtdparc,  ((total*1.08)/qtdparc),(total*1.08));
            }else{
              if (qtdparc>10){
              printf ("\nVocê deverá pagar %d parcelas, no valor de R$ %.2f, totalizando R$ %.2f.",qtdparc,(((total *1.12)+12.00)/qtdparc),(total *1.12)+12);
              }
            }
        }
    }
}