#include <stdio.h>
#include "calculadora.h"
#include <stdlib.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if (b){
        return a / b;
    }
    printf("Erro ao dividir por zero\n");
    exit (1);
}