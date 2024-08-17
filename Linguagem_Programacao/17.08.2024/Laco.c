#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    double soma = 0;

    for (int i=1, j=1; i<=50; i++, j+=2){
        soma += (double) i/j;
    }

    printf("Somatória: %.2lf", soma);

    return 0;

}
