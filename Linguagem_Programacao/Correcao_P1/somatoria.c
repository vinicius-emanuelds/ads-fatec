#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    double soma = 0.0;

    for (int i = 0, j = 1; j < 30; i += 2, j++){
        if (j % 2 == 1){
            soma += (double) i/j;
        } else {
            soma -= (double) i/j;
        }
    }

    printf("Soma: %3.2f\n", soma);
    
    return 0;
}

