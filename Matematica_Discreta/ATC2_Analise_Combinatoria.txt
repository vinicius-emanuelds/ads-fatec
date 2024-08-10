#include <stdio.h>
// ATIVIDADE COMPUTACIONAL 2 - ANÁLISE COMBINATÓRIA: 1º ADS NOTURNO 2024.01

// ARTHUR PICHELLI MADOENHO
// FILIPE LEÃO SANTOS
// LUCAS VIEIRA DA SILVA
// VINICIUS EMANUEL DA SILVA

/*REQUISITOS:
ENTRADAS
    Imprimir: "ATIVIDADE 2"
    Imprimir: "ANALISE COMBINATORIA"
    Ler: "n"
    Ler: "k: "
  SAÍDAS
    Imprimir: "P(n) =  "
    Imprimir: "A(n,k) = "
    Imprimir: "C(n,k) = "
*/
int main(void) {
  float n, k, m, fatn, fatk, fatnk, per, arj, comb;

  printf("ATIVIDADE COMPUTACIONAL 2 - MATEMÁTICA DISCRETA\n");
  printf("\nANÁLISE COMBINATÓRIA\n");
  printf("\nDigite o valor para n, sendo n o número de elementos: ");
  scanf("%f",&n);
  printf("\nDigite o valor para k, sendo k o número de posições: ");
  scanf("%f",&k);
  if (n<k){
    printf("O valor de N não pode ser menor que K");
  }else{
    m=n-k;
    for(fatn = 1; n > 1; n--)
    {      
        fatn = fatn * n;
    }
  
    for(fatk = 1; k > 1; k--)
    {      
        fatk = fatk * k;
    }
  
    for(fatnk = 1; m > 1; m--)
    {      
        fatnk = fatnk * m;
    }
    per=fatn;
  	arj=per/fatnk;
    comb=arj/fatk;
    printf("\nPermutação: %.1f\nArranjo: %.1f\nCombinação: %.1f",per,arj,comb);
  }
}