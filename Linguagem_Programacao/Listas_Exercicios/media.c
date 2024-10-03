/*Exercício 4:
Leia uma sequência de números inteiros e calcule a média. O programa deve parar de solicitar 
números quando for inserido o número zero.
*/

#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero, soma = 0, contador = 0;
    float media = 0;

    do {
        printf("Digite um número\n(Caso deseje para, digite 0): ");
            scanf("%d",&numero);
        
        if (numero != 0){
            soma += numero;
            contador ++;
        }
    } while (numero != 0);

    if (contador != 0){
        media = (float) soma / contador;
        printf("A média dos números informados é: %.2f\n", media);
    } else {
        printf("Não foram digitados números válidos suficientes.\n");
    }
    

    return 0;
}