/*13- Função que Retorna um Ponteiro para uma Substring.
Escreva uma função chamada substring que recebe uma string,
um índice inicial e um comprimento,e retorna um ponteiro para
uma nova string que contém a substring especificada.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para extrair uma substring de uma string
char* substring(const char* str, int inicio, int comprimento) {
    // Verificar se os parâmetros de entrada são válidos
    if (str == NULL || inicio < 0 || comprimento <= 0 || inicio >= strlen(str)) {
        return NULL;  // Retornar NULL em caso de erro
    }

    // Alocar memória para a substring, considerando o tamanho do comprimento + 1 (para o terminador '\0')
    char* sub = (char*)malloc((comprimento + 1) * sizeof(char));

    // Verificar se a alocação de memória foi bem-sucedida
    if (sub == NULL) {
        return NULL;  // Retornar NULL se a memória não for alocada
    }

    // Copiar a parte da string original para a substring
    for (int i = 0; i < comprimento && str[inicio + i] != '\0'; i++) {
        sub[i] = str[inicio + i];
    }

    // Adicionar o terminador '\0' no final da substring
    sub[comprimento] = '\0';

    return sub;
}

int main() {
    char* str = "OpenAI";
    int inicio = 2;
    int comprimento = 3;

    // Chamar a função substring
    char* sub = substring(str, inicio, comprimento);

    // Verificar se a substring foi gerada corretamente
    if (sub != NULL) {
        printf("Substring: %s\n", sub);
        free(sub);  // Liberar a memória alocada para a substring
    } else {
        printf("Erro ao extrair a substring.\n");
    }

    return 0;
}
