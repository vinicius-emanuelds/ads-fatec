#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/

trocaValor(int *p_a, int *p_b);

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x = 10;
    int y = 20;

    trocarValor(&x, &y);

    printf("Valor de X: %d \n", x);
    printf("Valor de Y: %d \n", y);

    return 0;
}

void trocaValor(int *p_a, int *p_b) {
    int aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
}