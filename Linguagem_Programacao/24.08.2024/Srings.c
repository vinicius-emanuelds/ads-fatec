#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o para somar os elementos de um vetor
int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

// Fun��o para calcular a m�dia dos valores de uma matriz 2x2
float mediaMatriz(int matriz[2][2]) {
    int soma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            soma += matriz[i][j];
        }
    }
    return (float)soma / 4;
}

// Fun��o para converter uma string para mai�sculas
void converteMaiuscula(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Parte 1: Vetor de 5 n�meros inteiros
    int vetor[5];
    printf("Insira 5 n�meros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // Limpa o buffer de entrada ap�s o uso de scanf
    getchar();

    // Parte 2: Matriz 2x2 de n�meros inteiros
    int matriz[2][2];
    printf("Insira uma matriz 2x2 de n�meros inteiros:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Limpa o buffer de entrada ap�s o uso de scanf
    getchar();

    // Parte 3: Somando os elementos do vetor
    int soma = somaVetor(vetor, 5);
    printf("A soma dos n�meros do vetor �: %d\n", soma);

    // Parte 4: Calculando a m�dia dos elementos da matriz
    float media = mediaMatriz(matriz);
    printf("A m�dia dos n�meros da matriz �: %.2f\n", media);

    // Parte 5: Manipula��o de strings (c�digo fornecido por voc�)
    char nome[21];
    char sobrenome[21];
    char nome_completo[41];

    printf("Digite o primeiro nome: \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';  // Remove o '\n' no final da string

    printf("Digite o seu sobrenome: \n");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strlen(sobrenome) - 1] = '\0';  // Remove o '\n' no final da string

    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);
    
    printf("Nome completo: %s \n", nome_completo);

    printf("As primeiras 10 letras do nome v�o para uma nova vari�vel!\n");

    char dez_Letras[10] = {'\0'};
    strncpy(dez_Letras, nome_completo, 10);
    puts(dez_Letras);

    // Parte 6: Convertendo nome completo para mai�sculas
    converteMaiuscula(nome_completo);
    printf("Nome completo em mai�sculas: %s\n", nome_completo);

    // Parte 7: Convers�o de string para n�mero
    char strInt[10], strFloat[10];
    printf("Insira um n�mero inteiro: ");
    scanf("%s", strInt);
    printf("Insira um n�mero decimal: ");
    scanf("%s", strFloat);

    int numInt = atoi(strInt);
    float numFloat = atof(strFloat);
    printf("A soma de %d e %.2f �: %.2f\n", numInt, numFloat, numInt + numFloat);

    return 0;
}
