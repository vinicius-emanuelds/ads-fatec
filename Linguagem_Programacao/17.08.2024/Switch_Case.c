#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    char sexo;

    printf("Digite\n'F' Feminino\n'M' Masculino\n'O' Prefiro n�o dizer\n");
        sexo = getchar();
    
    switch (sexo){
        case 'F':
        case 'f':
            printf("Feminino\n");
            break;
        case 'M':
        case 'm':
            printf("Masculino\n");
            break;
        case 'O':
        case 'o':
            printf("Prefiriu n�o dizer\n");
            break;
        default:
            printf("Op��o inv�lida\n");
    }

    return 0;
}