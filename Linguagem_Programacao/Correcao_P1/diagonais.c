#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n;
    printf("Tamanho da matriz quadrada: \n");
    scanf("%d", &n);
    int m[n][n];
    int somap = 0; //diagonal principal
    int somas = 0; //diagonal secundária
    int soma = 0; //soma total da matriz
    //preencher com valores entrados pelo usuario
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("m[%d][%d]: \n", i, j);
            scanf("%d", &m[i][j]);
            if (i == j) {
                somap += m[i][j];
            }
            if (j == n - i - 1) {
                somas += m[i][j];
            }
            soma += m[i][j];
        }
    }
    /*
    for (i = 0; i < n; i++){
        somap += matriz[i][i];
    }

    for (i = 0; i < n; i++){
        somap += matriz[i][n - 1 - i];
    }
    */

    printf("Soma da diagonal principal: %d\n", somap);
    printf("Soma da diagonal secundária: %d\n", somas);
    printf("Soma total da matriz: %d\n", soma);
    return 0;
}