#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    long int i = 0;

    printf("Comecei\n");

    // Laço sem conteúdo
    for(i=0; i<=99999999; i++);

    printf("Terminei\n");

}
