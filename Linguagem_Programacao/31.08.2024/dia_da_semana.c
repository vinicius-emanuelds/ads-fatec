#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 31 Ago 2024
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int opcao;

    do {
        printf("\nDigite o n�mero desejado\nPara sair, digte 0: ");
            scanf("%d",&opcao);

        switch (opcao) {
            case 1:
                printf("\nSEGUNDA\n");
                break;
            case 2:
                printf("\nTER�A\n");
                break;
            case 3:
                printf("\nQUARTA\n");
                break;
            case 4:
                printf("\nQUINTA\n");
                break;
            case 5:
                printf("\nSEXTA\n");
                break;
            case 6:
                printf("\nS�BADO\n");
                break;
            case 7:
                printf("\nDOMINGO\n");
                break;
            default:
                printf("\nOp��o inv�lida!\n");
                break;
        };
    } while (opcao != 0);

    return 0;
    
}