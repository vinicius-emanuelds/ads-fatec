# PONTEIROS
## Declaração
```
tipo *nome;
```

##### ATENÇÃO: 
Sempre inicializar ponteiros;
Se ainda não se tem o valor ou para o que apontar, inicializar com NULL.

```
int *p_algo = NULL;
```

***
## Operadores
- "&" : devolve o **ENDEREÇO** na memória do operando
- "*" : devolve o valor (**CONTEÚDO**) da variável localizada no endereço que o segue

***
## Operações Aritméticas
- Incremento: apontar para o próximo endereço de memória;
```
ptr++;
```
- Decremento: apontar para o endereço de memória anterior;
```
ptr--;
```
- Diferença: Distância entre dois endereços de memória
```
ptr1 - ptr2;
```
- Comparação: Comparam se os dois ponteiros apontam para o mesmo endereço de memória
```
ptr1 == ptr2;
```

## Outras definições
- Quando apontamos para um vetor, se não definirmos o índice, ele apontará sempre para a 1ª posição do vetor
```
int v[] = {2, 4, 6, 8, 10};

int *p = &v;
printf("Valor do apontado por p: %d\n", *p); >>> 2
 
int *p = &v[3];
printf("Valor do apontado por p: %d\n", *p); >>> 8
```


