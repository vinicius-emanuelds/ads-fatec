#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    for(int i=1; i<=100; i++){
        if(i % 2 == 1) continue;
        printf("Valor é par: %d\n", i);
    }

    return 0;
}
