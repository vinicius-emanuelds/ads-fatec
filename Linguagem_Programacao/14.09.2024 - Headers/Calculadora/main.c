#include <stdio.h>
#include "calculadora.h"
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x = 10, y = 5;

    printf("Resultado da Soma: %d\n", somar(x,y));
    printf("Resultado da Divisão: %d\n", dividir(x,y));
    printf("Resultado da Multiplicação: %d\n", multiplicar(x,y));
    printf("Resultado da Divisão: %d\n", dividir(x,y));

    return 0;
}