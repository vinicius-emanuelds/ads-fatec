#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int soma = 0;
    int n;

    do{
        do{
            printf("Digite um valor entre 0 e 20\n");
            scanf("%d", &n);
        }while (n<0 || n>20);
        soma += n;
    }while (n);

    printf("Somatória: %d\n", soma);
    
    return 0;
}
