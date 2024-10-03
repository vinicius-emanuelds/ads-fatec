/*
Exercício 7:
Leia uma matriz 5x5 de números inteiros
calcule a média dos elementos da diagonal principal.
*/

#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[5][5];
    int diagonal = 0;
    float media = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
                scanf("%d",&matriz[i][j]);

            if (i == j){
                diagonal += matriz[i][j];
            }
        }
    }

    media = (float) diagonal / 5;

    printf("\nA média dos elementos da diagonal principal é %.2f.",media);

    return 0;
}