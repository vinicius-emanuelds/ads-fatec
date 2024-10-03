/*
Somar todos os algoritmos entre 1 e Limite que:
    - são ímpares ou múltiplos de 4.
*/

#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
int somar (int n);

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n;

    printf("Digite o limite para a soma: \n");
        scanf("%d", &n);
    
    printf("O valor final da soma é: %d", somar(n));

    return 0;
}

int somar(int n) {
    if (n <= 0) return 0;
    if (n % 2 != 0 || n % 4 == 0) return n + somar(n - 1);
    return somar(n - 1);
}