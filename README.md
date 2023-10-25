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
