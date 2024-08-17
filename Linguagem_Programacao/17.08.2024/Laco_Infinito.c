#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    for(int i = 1;;i++){
        printf("%d\n", i);
        if (i % 777 == 0 && i % 2 == 0) break;
    }

}
