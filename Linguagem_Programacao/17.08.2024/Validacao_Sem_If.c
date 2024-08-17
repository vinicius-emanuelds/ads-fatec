#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("Digite um calor: \n");
        scanf("%d",&x);
    
    int r = x> 1000;
    printf("Valor de r: %d \n", r);

    return 0;
}
