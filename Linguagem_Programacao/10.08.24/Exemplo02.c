#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    unsigned char letra = 256;
    printf("%d \n", letra);
    return 0;

}
