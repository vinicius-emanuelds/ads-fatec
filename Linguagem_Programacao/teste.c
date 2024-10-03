#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

// Função para somar os elementos de um vetor
int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

// Função para calcular a média dos valores de uma matriz 2x2
float mediaMatriz(int matriz[2][2]) {
    int soma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            soma += matriz[i][j];
        }
    }
    return (float)soma / 4;
}

// Função para converter uma string para maiúsculas
void converteMaiuscula(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Parte 1: Vetor de 5 números inteiros
    int vetor[5];
    printf("Insira 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // Parte 2: Matriz 2x2 de números inteiros
    int matriz[2][2];
    printf("Insira uma matriz 2x2 de números inteiros:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Parte 3: Somando os elementos do vetor
    int soma = somaVetor(vetor, 5);
    printf("A soma dos números do vetor é: %d\n", soma);

    // Parte 4: Calculando a média dos elementos da matriz
    float media = mediaMatriz(matriz);
    printf("A média dos números da matriz é: %.2f\n", media);

    // Parte 5: Manipulação de strings (adicionado o código fornecido)
    char nome[21];
    char sobrenome[21];
    char nome_completo[41];

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

    // Parte 6: Convertendo nome completo para maiúsculas
    converteMaiuscula(nome_completo);
    printf("Nome completo em maiúsculas: %s\n", nome_completo);

    // Parte 7: Conversão de string para número
    char strInt[10], strFloat[10];
    printf("Insira um número inteiro: ");
    scanf("%s", strInt);
    printf("Insira um número decimal: ");
    scanf("%s", strFloat);

    int numInt = atoi(strInt);
    float numFloat = atof(strFloat);
    printf("A soma de %d e %.2f é: %.2f\n", numInt, numFloat, numInt + numFloat);

    return 0;
}
