#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void perfeito ();

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i=0, numero[5];

    for (i=0; i<5; i++){
        printf("\nDigite o %d� n�mero: ",i+1);
        scanf("%d",&numero[i]);
    }

    for (i=0; i<5; i++){
        perfeito(numero[i]);
    }
}

void perfeito (int num){
    int i=0, teste=0;
    
    for (i=num-1; i>0; i--){
        if (num % i == 0){
           teste = teste + i;
        }
    }

    if (teste == num){
        printf("\nO n�mero %d � perfeito",num);
    }else{
        printf("\nO n�mero %d n�o � perfeito",num);
    }
}