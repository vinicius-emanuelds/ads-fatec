#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 31 Ago 2024
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    short int num_1;
    unsigned int num_2;

    printf("Digite o valor do n�mero 1 (inteiro curto): \n");
        scanf("%hd",&num_1);
    printf("Digite o valor do n�mero 2 (inteiro positivo): \n");
        scanf("%u",&num_2);
    
    printf("N� 01: %hd [Tamanho em bytes: %d]\n",num_1, sizeof(num_1));
    printf("N� 02: %u [Tamanho em bytes: %d]\n",num_2, sizeof(num_2));

    return 0;
}