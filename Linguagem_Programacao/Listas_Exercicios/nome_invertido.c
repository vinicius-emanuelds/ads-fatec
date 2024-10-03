/*
Exercício 8:
Leia uma string e exiba o número de caracteres da string.
Em seguida imprimir essa string na ordem reversa. 
Ex: (Entrada = "Marcos")
(Saída = 6 socraM)
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    char texto[51];

    printf("\nDigite o texto desejado: ");
        fgets(texto, sizeof(texto), stdin);
    
    
    
    printf(sizeof(texto));

    return 0;
}