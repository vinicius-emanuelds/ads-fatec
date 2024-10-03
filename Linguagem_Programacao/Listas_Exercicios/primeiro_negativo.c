/*
Exercício 5:
Leia números inteiros do usuário e exiba o primeiro número negativo inserido. Interrompa a leitura ao 
encontrar o primeiro negativo.
*/

#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero;

    do {
        printf("\nDigite um número: ");
            scanf("%d",&numero);
    } while (numero > 0);

    printf("O primeiro número negativo digitado foi %d",numero);

    return 0;
}