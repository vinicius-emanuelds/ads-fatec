#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 23 Ago 2024
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    char nome[51];

    printf("Digite seu nome completo: \n");
        fgets(nome, sizeof(nome), stdin);

    nome[strlen(nome) - 1] = '\0';

    char letra;
    printf("Digite uma letra: \n");
    letra = getchar();

    printf("Seu nome completo: '%s' \n", nome);
    puts(nome);
    printf("Letra digitada: '%c' \n", letra);
    fflush(stdin);
    printf("Digite uma nova letra: \n");
    letra = getchar();

    return 0;
}