#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 23 Ago 2024
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    srand(time(NULL));
    int megasena[6];

    //gerar os 6 valores aleatórios
    for ( int i = 0; i < 6; i++){
        megasena[i]=rand() % 60 + 1;
    }

    //exibir os dados
    for (int i = 0; i < 6; i++){
        printf ("[%2d] ", megasena[i]);
    }

    printf("\n Fim do programa! \n");

    return 0;
}