#include <stdio.h>
// AT1 - COMPUTACIONAL: 1º ADS NOTURNO 2024.01
// ARTHUR PICHELLI MADOENHO
// FILIPE LEÃO SANTOS
// VINICIUS EMANUEL DA SILVA

//REQUISITOS
// 0 para FALSO
// 1 para VERDADEIRO

int main(void) {
  int p, q, conj,disj,disjex,se,ses;
  
  printf("Digite o valor para p.\nUtilize 0 para FALSO e 1 para VERDADEIRO: ");
  scanf("%d",&p);
  printf("\nDigite o valor para q.\nUtilize 0 para FALSO e 1 para VERDADEIRO: ");
  scanf("%d",&q);
  conj = p && q;
  disj = p || q;
  se = (!p) || q; //-->
  ses=((!p)||q)&&((!q)||p); // <->
  disjex= !(ses);//V_
  printf("\nDe acordo com sua entrada, temos que\n\nConjunção (p∧q): %d\n\nDisjunção (p∨q): %d\n\nDisjunção Exclusiva (p⊻q): %d\n\nCondicional (p→q): %d\n\nBicondicional (p↔q): %d",conj,disj,disjex,se,ses);
}