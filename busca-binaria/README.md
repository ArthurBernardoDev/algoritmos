# Desafio da Busca Binária

## Descrição do Problema

Dado um array de inteiros `nums` que está ordenado em ordem crescente, e um inteiro `target`, sua tarefa é escrever uma função para buscar o `target` em `nums`. Se o `target` existir, retorne seu índice. Caso contrário, retorne `-1`.

**O algoritmo deve possuir uma complexidade de tempo O(log n).**

### Exemplo 1:

- **Entrada**: nums = [-1,0,3,5,9,12], target = 9
- **Saída**: 4
- **Explicação**: O número 9 existe em nums e seu índice é 4.

### Exemplo 2:

- **Entrada**: nums = [-1,0,3,5,9,12], target = 2
- **Saída**: -1
- **Explicação**: O número 2 não existe em nums, por isso retorne -1.

### Restrições:

- 1 <= tamanho de nums <= 10^4
- -10^4 < nums[i], target < 10^4
- Todos os inteiros em nums são únicos.
- nums está ordenado em ordem crescente.

### Solução em JavaScript

A solução utiliza o conceito de busca binária, que é uma técnica eficiente para encontrar elementos em listas ordenadas. A ideia é reduzir pela metade o número de elementos a serem verificados a cada iteração.

```javascript
var search = function(nums, target) {
    let inicio = 0;
    let final = nums.length - 1;
    let meio;

    while (inicio <= final) {
        meio = (inicio + final) >> 1;

        if (nums[meio] === target) return meio;

        if (nums[meio] < target) {
            inicio = meio + 1;
        } else {
            final = meio - 1;
        }
    }

    return -1;
};
```
### resultado no leetcode
![image](https://github.com/ArthurBernardoDev/algoritmos/assets/58444730/cbfbaddf-fb0f-4275-bea3-e7d293f501b9)

## Explicação da Solução

Nesta solução:

- **Início**: Começamos com `inicio` e `final` apontando para o começo e o fim do array, respectivamente.
- **Cálculo do Meio**: Em cada iteração, calculamos o índice do meio usando uma operação de deslocamento à direita, que é mais rápida do que uma divisão regular.
- **Comparação**: Comparamos o elemento em `meio` com `target`.
  - **Igualdade**: Se forem iguais, retornamos `meio`.
  - **Menor que Target**: Se o elemento em `meio` for menor que `target`, movemos `inicio` para `meio + 1`.
  - **Maior que Target**: Caso contrário, movemos `final` para `meio - 1`.
- **Resultado**: Se o loop terminar sem retornar, isso significa que `target` não está em `nums`, e retornamos `-1`.

## Estatísticas

- **Aceitos**: 2.1M
- **Submissões**: 3.6M
- **Taxa de Aceitação**: 56.7%
