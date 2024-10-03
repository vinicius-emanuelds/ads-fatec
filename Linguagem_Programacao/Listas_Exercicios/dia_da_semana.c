#include <stdio.h>
#include <locale.h>

/**
* @author Vinicius Silva
* @since 
*/
            
int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int num;

    do{
        printf("\nDigite o número desejado, entre 1 e 7\n(caso deseje sair, digite 0)\n");
            scanf("%d",&num);
        
        switch (num) {
            case 1:
                printf("SEGUNDA-FEIRA");
                break;
            case 2:
                printf("TERÇA-FEIRA");
                break;
            case 3:
                printf("QUARTA-FEIRA");
                break;
            case 4:
                printf("QUINTA-FEIRA");
                break;
            case 5:
                printf("SEXTA-FEIRA");
                break;
            case 6:
                printf("SÁBADO");
                break;
            case 7:
                printf("DOMINGO");
                break;
            case 0:
                break;
            default:
                printf("Opção inválida!");
                break;
        };
    } while (num != 0);    

    return 0;
}