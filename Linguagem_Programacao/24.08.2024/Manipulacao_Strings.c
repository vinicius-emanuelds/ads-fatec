#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    char nome [21];
    char sobrenome [21];
    char nome_completo [41];

    printf("Digite o primeiro nome: \n");
        fgets(nome, sizeof(nome), stdin);
        nome[strlen(nome) - 1] = '\0';
    printf("Digite o seu sobrenome: \n");
        fgets(sobrenome, sizeof(sobrenome), stdin);
        sobrenome[strlen(sobrenome) - 1] = '\0';

    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);
    
    printf("Nome completo: %s \n", nome_completo);

    printf("As primeiras 10 letras do nome vão para uma nova variável!\n");

    char dez_Letras[10] = {'\0'};
    strncpy(dez_Letras, nome_completo, 10);
    puts(dez_Letras);


    return 0;
}