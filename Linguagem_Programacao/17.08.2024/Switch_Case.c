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

    printf("Digite\n'F' Feminino\n'M' Masculino\n'O' Prefiro não dizer\n");
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
            printf("Prefiriu não dizer\n");
            break;
        default:
            printf("Opção inválida\n");
    }

    return 0;
}
