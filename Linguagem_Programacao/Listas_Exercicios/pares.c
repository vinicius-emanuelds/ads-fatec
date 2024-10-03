#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero;

    do{
        printf("Digite o número desejado: ");
            scanf("%d",&numero);
        
        if (numero <= 0){
            printf("Número inválido!\n");
        };
    } while (numero <= 0);
    
    for (int i = 1; i < numero; i++) {
        if (i % 2 == 0){
            printf("%d - ",i);
        }
    }
    return 0;
}