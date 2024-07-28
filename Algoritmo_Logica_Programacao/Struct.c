#include <stdio.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    struct registro{ //Define um tipo chamado "registro", com 3 subtipos
        char nome [10];
        int idade;
        float salario;
    };

    struct registro cadastro[5];
    int i;
    
    for (i=0;i<=4;i++){
        printf("\nNome: ");
            scanf("%s",&cadastro[i].nome);
        printf("\nIdade: ");
            scanf("%d",&cadastro[i].idade);
        printf("\nSalário: ");
            scanf("%f",&cadastro[i].salario);
    }
    printf("\nRELATÓRIO");
    printf("\nSEQ | NOME | IDADE | SALÁRIO");

    for (i=0;i<=4;i++){
        printf("\n  %d | %s | %d | R$ %.2f",i+1, 
                                    cadastro[i].nome,
                                    cadastro[i].idade,
                                    cadastro[i].salario);
    }
}