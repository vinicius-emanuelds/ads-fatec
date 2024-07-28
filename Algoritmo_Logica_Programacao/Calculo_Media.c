#include <stdio.h>

int main (void){
    int idade, i, qtd;
    float media;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d",&qtd);
    for (i=1; i<=qtd; i++){
        printf("\nQual a idade da pessoa %d? ",i);
        scanf("%d",&idade);
        media=media+idade;
    }
    media=media/qtd;
    printf("\n A média da idades é %.2f",media);
}