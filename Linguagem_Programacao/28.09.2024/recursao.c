#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/

int fat (int n);
int fatr(int n); //usando recursão
int soma (int n);
int fibo (int n);

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int v;

    printf("Digite o valor para qual deseja o fatorial: \n");
        scanf("%d", &v);
    
    printf("O fatorial de %d é: %d\n", v, fat(v));
    printf("O fatorial, usando a recursiva, de %d é: %d\n", v, fatr(v));
    printf("O valor na sequência Fibonacci para o elemento %d é: %d\n", v, fibo(v));
    up(v);

    
    return 0;
}

int fat(int n){
    int f = 1;

    for (int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

int fatr(int n){
    if(n == 1) return 1;
    return n * fatr(n - 1);
}

void up(int n){
    if (n == 0) return;
    up (n - 1);
    printf("%d\n", n);
}

int soma (int n){
    if (n == 1) return 1;
    return n + soma (n - 1);
}

int fibo (int n){
    if (n == 1 || n == 2) return 1;
    return fibo(n - 1) + fibo (n - 2);
}