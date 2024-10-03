/*
Exercício 6:
Leia 10 números inteiros e exiba apenas os números pares.
*/

#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero, pares[10], contador = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
            scanf("%d",&numero);
        
        if (numero % 2 == 0){
            pares[contador] = numero;
            contador ++;
        }
    }

    for (int i = 0; i < contador; i++){
        printf("%d - ", pares[i]);
    }
    

    return 0;
}