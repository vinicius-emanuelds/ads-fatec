// ATIVIDADE COMPUTACIONAL 4 - Calculadora de Matrizes: 1� ADS NOTURNO 2024.01

// ARTHUR PICHELLI MADOENHO
// FILIPE LE�O SANTOS
// LUCAS VIEIRA DA SILVA
// VINICIUS EMANUEL DA SILVA

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void lerA();
void lerB();
void somaMatriz();
void subtracaoAB();
void subtracaoBA();
void imprimaMatriz();
void multiplicacaoAB();
void multiplicacaoBA();
void determinante1x1();
void determinante2x2();
void determinante3x3();

int main(void) {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int opcao, opcao1, opcao2; 
    int na=1, ma=1, nb=1, mb=1, ns=0, ms = 0, k=0;

    k=0;

    while (opcao != 5){
        printf("\n============ Menu ============ ");
        printf("\n1 - Soma de Matrizes"); 
        printf("\n2 - Subtra��o de Matrizes");  
        printf("\n3 - Multiplica��o de Matrizes");
        printf("\n4 - Determinante de uma Matriz");
        printf("\n5 - Sair\n");

        while (k != 1){
            printf("\nDigite a op��o desejada: ");
                scanf("%d", &opcao);          

            if (opcao < 1 || opcao > 4){
                if (opcao == 5){
                    exit(0);
                } else {
                    printf("\nOp��o inv�lida. Por favor, escolha uma das op��es do menu.\n");
                    k = 0;
                }
            }

            if (opcao == 1 || opcao == 2 || opcao == 3){
                printf("\nDigite o n�mero de linhas para a matriz A: ");
                    scanf("%d", &na);
                printf("Digite o n�mero de colunas para a matriz A: ");
                    scanf("%d", &ma);    
                printf("Digite o n�mero de linhas para a matriz B: ");
                    scanf("%d", &nb);
                printf("Digite o n�mero de colunas para a matriz B: ");
                    scanf("%d", &mb);
                k = 1;
            } else if (opcao == 4){
                printf("\nDETERMINANTE DE UMA MATRIZ");
                printf("\nDigite o n�mero de linhas para a matriz A: ");
                    scanf("%d", &na);
                printf("Digite o n�mero de colunas para a matriz A: ");
                    scanf("%d", &ma); 
                k = 1;
            }
        }

        int matrizA[na][ma];
        int matrizB[nb][mb];
        int soma[ns][ms];
        int subtracao[ns][ms];
        int multiplicar[na][mb];
        int multiplicar2[nb][ma];

        switch (opcao){
            case 1: // soma de matrizes 
                if (na != nb || ma != mb) {
                    printf("\nAs matrizes precisam ter as mesmas dimens�es para serem somadas.");
                    k = 0;
                    break;
                }

                ns = na;
                ms = ma;

                lerA(na, ma, matrizA);
                lerB(nb, mb, matrizB);

                somaMatriz(na, ma, nb, mb, ns, ms, matrizA, matrizB, soma);
                printf("\nSoma de Matrizes: \n");
                imprimaMatriz(ns, ms, soma);
                k = 0;
                break; 

            case 2: // subtra��o de matrizes
                if (na != nb || ma != mb) {
                    printf("\nAs matrizes precisam ter as mesmas dimens�es para serem subtra�das.");
                    k = 0;
                    break;
                }

                ns = na;
                ms = ma;

                lerA(na, ma, matrizA);
                lerB(nb, mb, matrizB);

                printf("\nQual subtra��o voc� deseja realizar?\nDigite 1 para A-B\nDigite 2 para B-A: ");
                    scanf("%d", &opcao1);

                    switch(opcao1){
                        case 1:
                            printf("\nSubtra��o de Matrizes A - B: \n");
                            subtracaoAB(na, ma, nb, mb, ns, ms, matrizA, matrizB, subtracao);
                            imprimaMatriz(ns, ms, subtracao);
                            k = 0;
                            break;
                        case 2:
                            printf("\nSubtra��o de Matrizes B - A: \n");
                            subtracaoBA(na, ma, nb, mb, ns, ms, matrizA, matrizB, subtracao);
                            imprimaMatriz(ns, ms, subtracao);
                            k = 0;
                            break;
                        default:
                            printf("\nOp��o inv�lida. Por favor, escolha uma op��o v�lida.");   
                }          
                k = 0;
                break;

            case 3: // Multiplica��o de Matrizes
                
                lerA(na, ma, matrizA);
                lerB(nb, mb, matrizB);

                printf("\nQual multiplica��o voc� deseja realizar? \nDigite 1 para A*B \nDigite 2 para B*A: ");
                scanf("%d", &opcao2);

                switch(opcao2) {
                    case 1:
                        if (ma != nb) {
                        printf("\nPara realizar a multiplica��o de matrizes, o n�mero de colunas da primeira matriz deve ser igual ao n�mero de linhas da segunda matriz.");
                        k = 0;
                        break;
                        }
                        printf("\nMultiplica��o de Matrizes A * B: \n");
                        multiplicacaoAB(na, ma, nb, mb, matrizA, matrizB, multiplicar);
                        imprimaMatriz(na, mb, multiplicar);
                        k = 0;
                        break;
                    case 2:
                        if (mb != na) {
                        printf("\nPara realizar a multiplica��o de matrizes, o n�mero de colunas da primeira matriz deve ser igual ao n�mero de linhas da segunda matriz.");
                        k = 0;
                        break;
                        }
                        printf("\nMultiplica��o de Matrizes B * A: \n");
                        multiplicacaoBA(na, ma, nb, mb, matrizA, matrizB, multiplicar2);
                        imprimaMatriz(nb, ma, multiplicar2);
                        k = 0;
                        break;
                }
                k = 0;
                break;

            case 4: // Determinante de Matrizes
                if (na != ma) {
                    printf("\n� necess�rio ser uma matriz quadrada.\n");
                    k = 0;
                    break;
                }

                switch (na){
                    case 1:
                        lerA(na, ma, matrizA);
                        determinante1x1(matrizA);
                        k = 0;
                        break;

                    case 2:
                        lerA(na, ma, matrizA);
                        determinante2x2(matrizA);
                        k = 0;
                        break;
                    case 3:
                        lerA(na, ma, matrizA);
                        determinante3x3(matrizA);
                        k = 0;
                        break;
                    default:
                        printf("\nNo momento, s� � poss�vel calcular o determinante de matrizes de ordem 1x1, 2x2 e 3x3\n");
                        k = 0;
                    break;
                }
            case 5: 
                break;

            default:
                k = 0; 
                break;
            } 
        }
} 

void lerA(int na, int ma, int matrizA[na][ma]) {
    int i, j;
    printf("\nMATRIZ A:");
    printf("\n");
    for (i = 0; i < na; i++) {
        for (j = 0; j < ma; j++) {
            printf("Digite um valor para posi��o %d, %d: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }
}

void lerB(int nb, int mb, int matrizB[nb][mb]) {
    int i, j;
    printf("\nMATRIZ B:");
    printf("\n");
    for (i = 0; i < nb; i++) {
        for (j = 0; j < mb; j++) {
            printf("Digite um valor para posi��o %d, %d: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }
}

void somaMatriz(int na, int ma, int nb, int mb, int ns, int ms, int matrizA[na][ma], int matrizB[nb][mb], int soma[ns][ms]) {
    int i, j;
    for (i = 0; i < ns; i++) {
        for (j = 0; j < ms; j++) {
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void subtracaoAB(int na, int ma, int nb, int mb, int ns, int ms, int matrizA[na][ma], int matrizB[nb][mb], int subtracao[ns][ms]) {
    int i, j;
    for (i = 0; i < ns; i++) {
        for (j = 0; j < ms; j++) {
            subtracao[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

void subtracaoBA(int na, int ma, int nb, int mb, int ns, int ms, int matrizA[na][ma], int matrizB[nb][mb], int subtracao[ns][ms]) {
    int i, j;
    for (i = 0; i < ns; i++) {
        for (j = 0; j < ms; j++) {
            subtracao[i][j] = matrizB[i][j] - matrizA[i][j];
        }
    }
}

void imprimaMatriz(int n, int m, int matriz[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicacaoAB(int na, int ma, int nb, int mb, int matrizA[na][ma], int matrizB[nb][mb], int multiplicar[na][mb]) {
    int i, j, k;
    for (i = 0; i < na; i++) {
        for (j = 0; j < mb; j++) {
            multiplicar[i][j] = 0;
            for (k = 0; k < ma; k++){
                multiplicar[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void multiplicacaoBA(int na, int ma, int nb, int mb, int matrizA[na][ma], int matrizB[nb][mb], int multiplicar2[nb][ma]) {
    int i, j, k;
    for (i = 0; i < ma; i++) {
        for (j = 0; j < nb; j++) {
            multiplicar2[i][j] = 0;
            for (k = 0; k < na; k++){
                multiplicar2[i][j] += matrizB[i][k] * matrizA[k][j];
            }
        }
    }
}

void determinante1x1(int matrizA[1][1]) {
   int det = 0;
   det = matrizA[0][0];
   printf("\nDeterminante: %d\n", det);
}

void determinante2x2(int matrizA[2][2]) {
   int det = 0;
   det = matrizA[0][0] * matrizA[1][1] - matrizA[0][1] * matrizA[1][0];
   printf("\nDeterminante: %d\n", det);
}

void determinante3x3(int matrizA[3][3]) {
    int det = 0;
    det += matrizA[0][0] * matrizA[1][1] * matrizA[2][2];
    det += matrizA[0][1] * matrizA[1][2] * matrizA[2][0];
    det += matrizA[0][2] * matrizA[1][0] * matrizA[2][1];
    det -= matrizA[0][2] * matrizA[1][1] * matrizA[2][0];
    det -= matrizA[0][1] * matrizA[1][0] * matrizA[2][2];
    det -= matrizA[0][0] * matrizA[1][2] * matrizA[2][1];

    printf("\nDeterminante: %d\n", det);
}
