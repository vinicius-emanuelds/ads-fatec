#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * @author Vinicius Silva
 * @since 17 Ago 2024
 */

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    double salario;
    int tempo;

    pritnf("Digite o valor do salário: \n");
        scanf("%lf",&salario);
    pritnf("Digite o tempo trabalhado em anos: \n");
        scanf("%d",&tempo);

    salario *= tempo > 10 ? 1.15 : 1.12;

    /*
    if (tempo > 10){
        salario *= 1.15;
    }else{
        salario *= 1.12;
    }
    */

    pritnf("Novo salário: %.2lf\n", salario);

    return 0;
}
