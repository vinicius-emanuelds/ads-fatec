/*
Exerc�cio 5:
Leia n�meros inteiros do usu�rio e exiba o primeiro n�mero negativo inserido. Interrompa a leitura ao 
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
        printf("\nDigite um n�mero: ");
            scanf("%d",&numero);
    } while (numero > 0);

    printf("O primeiro n�mero negativo digitado foi %d",numero);

    return 0;
}