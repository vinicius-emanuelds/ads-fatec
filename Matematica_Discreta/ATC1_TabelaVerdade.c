#include <stdio.h>
/*
AT1 - COMPUTACIONAL: 1º ADS NOTURNO 2024.01

ARTHUR PICHELLI MADOENHO
FILIPE LEÃO SANTOS LUCAS VIEIRA DA SILVA
VINICIUS EMANUEL DA SILVA

REQUISITOS:
0 para FALSO
1 para VERDADEIRO

*/
int main(void) {
  int p, q, conj,disj,disjex,se,ses;

  printf("ATIVIDADE COMPUTACIONAL 1 - MATEMÁTICA DISCRETA\n");
  printf("\n\nATENÇÃO: Utilize 0 para FALSO e 1 para VERDADEIRO");
  printf("\n\nDigite o valor para p: ");
  scanf("%d",&p);
  printf("\n\nDigite o valor para q: ");
  scanf("%d",&q);
  conj = p && q;
  disj = p || q;
  se = (!p) || q; //-->
  ses=((!p)||q)&&((!q)||p); // <->
  disjex= !(ses);//V_
  printf("\n\nDe acordo com sua entrada, temos que:\n\nConjunção (p∧q) =  %d\n\nDisjunção (p∨q) =  %d\n\nDisjunção Exclusiva (p⊻q) =  %d\n\nCondicional (p→q) =  %d\n\nBicondicional (p↔q) =  %d",conj,disj,disjex,se,ses);
}