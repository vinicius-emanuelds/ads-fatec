#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x, y;
    printf("Digite o valor 1: \n");
        scanf("%d",&x);
    printf("Digite o valor 2: \n");
        scanf("%d",&y);
    
    // Dividir x/y, mas tratar zero
    if(y){ // diferente de zero
        int resultado = x/y;
        printf("Resultado: %d\n", resultado);
        return 0;
    }else{
        printf("Erro: impossível realizar divisão inteira por zero\n");
        exit(1);
    }
}
