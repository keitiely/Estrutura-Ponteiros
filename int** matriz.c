/*14- Função que Retorna o Endereço de um Elemento em uma Matriz. 
Crie uma função chamada obtemElemento que recebe uma matriz ( int** matriz ), o número de linhas,
o número de colunas, um índice de linha e um índice de coluna. A função deve retornar
um ponteiro para o elemento na posição especificada.*/

#include <stdio.h>
#include <stdlib.h>

// Função que retorna o ponteiro para o elemento na posição especificada
int* obtemElemento(int** matriz, int linhas, int colunas, int linha, int coluna) {
    // Verificar se os índices estão dentro dos limites
    if (linha < 0 || linha >= linhas || coluna < 0 || coluna >= colunas) {
        return NULL;  // Retorna NULL se os índices forem fora dos limites
    }
    // Retorna o ponteiro para o elemento na posição especificada
    return &matriz[linha][coluna];
}

int main() {
    int linhas = 3, colunas = 3;

    // Alocar memória para a matriz 3x3
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    // Inicializar a matriz
    matriz[1][1] = 42;  

    // Chamar a função obtemElemento
    int* elemento = obtemElemento(matriz, linhas, colunas, 1, 1);
    if (elemento != NULL) {
        printf("Elemento encontrado: %d\n", *elemento);  // Imprimir o valor do elemento
    } else {
        printf("Índices fora dos limites.\n");  // Se os índices forem inválidos
    }

    // Liberar a memória alocada para a matriz
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
