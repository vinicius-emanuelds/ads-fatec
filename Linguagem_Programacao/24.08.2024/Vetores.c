#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 24 Ago 2024
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int nums[10]={0};

    for (int i=0; i<10; i++){
        printf("%d \n", nums[i]);
}

    return 0;
}