#include <stdio.h>
#include <locale.h>

int x = 10;

int somar(int x, int y){
    return x+y;
}

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf ("Valor de x: %d \n",x);
    printf("Endereço de x: %d\n",&x);
    int x;

    printf("Digite o valor de x: \n");
        scanf("%d",&x);
    printf("Endereço de x: %d\n",&x);

    printf ("Valor de x: %d \n",x);
    printf("Endereço de x: %d\n",&x);

    printf ("Soma: %d \n", somar(3,2));
    printf("Endereço de x: %d\n",&x);
    
    return 0;
}
