/*Exerc�cio 4:
Leia uma sequ�ncia de n�meros inteiros e calcule a m�dia. O programa deve parar de solicitar 
n�meros quando for inserido o n�mero zero.
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
        printf("Digite um n�mero\n(Caso deseje para, digite 0): ");
            scanf("%d",&numero);
        
        if (numero != 0){
            soma += numero;
            contador ++;
        }
    } while (numero != 0);

    if (contador != 0){
        media = (float) soma / contador;
        printf("A m�dia dos n�meros informados �: %.2f\n", media);
    } else {
        printf("N�o foram digitados n�meros v�lidos suficientes.\n");
    }
    

    return 0;
}