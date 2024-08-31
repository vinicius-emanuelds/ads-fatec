# LINGUAGEM C

## Ciclo do desenvolvimento
    Edição do código fonte
    Compilação do programa
    Linkagem do objeto
    Execução do programa
<br>

## Anatomia de um programa
    O programa é formado por uma ou mais funções, e cada função possui um nome exclusivo e corresponde a um bloco de código, delimitado por um par de chave {}
    Contém um conjunto de declarações, expressões, comandos de controle e chamadas a outras funções
<br>

## Alguns comandos
### Contrabarra (\\)
    Tem a função de "escape" quando usada isolada

    Usos:
    \n - Nova linha
    \t - Tabulação horizontal

### Comentários (/)
    // - One line
    /* - Multiline
    /** - Documentation

### Sizeof
    Retorna o tamanho da variável

### Constantes
    O nome deve ser declarado todo em MAIÚSCULO
<br>

## TIPOS DE DADOS
| Dado | Range |
| --- | --- |
| char | -128 a 127 |
| unsigned char | 0 a 255 |
<br>

## CAST ("conversão")
    a = 10, b = 3

    int x = a / b >>> 3
    double x = a / b >>> 3.0

    double x = a / (double) b >>> 3.33
