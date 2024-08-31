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

    char str_num[] = " 12345 ";

    // Converte a string para um número inteiro
    int num = atoi(str_num);

    num ++;

    printf("O número convertido, somado um, é : %d\n", num);

    //Converte o número inteiro em string
    sprintf(str_num, "%d", num);

    printf("O número como string é: \"%s\"\n", str_num);

    return 0;
}