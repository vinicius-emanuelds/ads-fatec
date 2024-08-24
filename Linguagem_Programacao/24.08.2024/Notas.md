
# VETORES
### Declaração
**- Inteiros** <br>
    ```
    int numeros[5];
    ```

**- Float** <br>
    ```
    float notas[5];
    ```

**- Caracteres (Strings)** <br>
Inclui o caractere nulo \0 que indica o fim da string <br>
    ```
    char nome[50];
    ```

### Outros Conceitos
**- Inicialização na declaração:**  Declara e inicializa um vetor de inteiros.
```
int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
```
**-Tamanho automático:** Declara um vetor de inteiros e deixa o compilador determinar seu 
tamanho com base na inicialização.
```
int algunsNumeros[] = {2, 4, 6, 8, 10};
```
**-Vetor de strings:** Declara um vetor de strings, onde cada string pode ter até 20 caracteres.
```
char nomes[5][20];
``` 

*** 

# STRINGS
### Manipulação de Strings
* **strcpy (_Destino_, _Origem_)**: Copia uma string para outra.
* **strncpy (_Destino_, _Origem_, _Contador_)**: Copia um número específico de caracteres de uma string para outra.
* **strcat(_Destino_, _Origem_)**: Concatena (anexa) uma string ao final de outra. 
* **strncat (_Destino_, _Origem_, _Contador_)**: Concatena um número específico de caracteres de uma string ao final de outra.
* **strlen ()**: Retorna o comprimento de uma string.