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

    char palavra1 [50];
    char palavra2 [51] = {'\0'};

    printf("Comparação de strings\n");
    printf("Digite a primeira palavra: \n");
        fgets(palavra1, sizeof(palavra1), stdin);
        palavra1[strlen(palavra1)-1] = '\0';
    printf("Digite a segunda palavra: \n");
        fgets(palavra2, sizeof(palavra2), stdin);
        palavra2[strlen(palavra2)-1] = '\0';

    //Comparando
    if (strcmp(palavra1, palavra2) == 0) {
        printf("As palavras são iguais");
    } else {
        printf("As palavras são diferentes e ");
        
        if (strcmp(palavra1,palavra2) == -1) {
            printf ("estão em ordem alfabética");
        } else {
            printf ("não estão em ordem alfabética");
        }
    }
    

    return 0;
}