#include <stdio.h>
#define SEPARADOR -10

int main (){
    printf("[%*s][%*s][%*s][%*s]\n", 
        SEPARADOR, "campo1", 
        SEPARADOR, "campo2", 
        SEPARADOR, "campo3", 
        SEPARADOR, "campo4"
    );

    getchar();
    return 0;
}