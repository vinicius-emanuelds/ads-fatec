#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x, y;

    x = 10;
    y = 20;

    int *ptr = NULL;

    printf("Valor de X: %d\n", x);
    printf("Valor de Y: %d\n", y);
    printf("Endereço de X: %ld\n", &x);
    printf("Endereço de Y: %ld\n", &y);
    printf("Endereço do ponteiro ptr: %d\n", &ptr);

    ptr = &y;
    printf("Endereço do ponteiro ptr: %d\n", ptr);
    printf("Conteúdo do apontado por ptr: %d\n", *ptr);

    return 0;
}