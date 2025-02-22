#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 05 out 2024
*/

int stringLength(char *p);
void deslocarString(char *p);

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    char palavra [] = "Fatec Arthur de Azevedo";
    
    printf("Total de caracteres: %d \n", stringLength(palavra));
    deslocarString(palavra);

    return 0;
}

int stringLength(char *p) {
    char *p_inicio = p;
    while (*p != '\0') p++;
    return p - p_inicio;
}

void deslocarString (char *p) {
    char *p_i = p;

    while (*p != '\0') {
        putchar (*p++);
    }

    printf("\n");
    p--; //Deslocar para casa anterior ao '\0'

    while (p >= p_i) {
        putchar (*p--);
    }
    p++;
}