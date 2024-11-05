/*4- Usando o tipo definido no exercício anterior,
para armazenamento de pontos do plano cartesiano,
defina um tipo de estrutura para representar segmentos
de retas através dos seus extremos. Crie uma função para
determinar o comprimento de um tal segmento e faça um programa para testá-la.*/

#include <stdio.h>
#include <math.h>


typedef struct {
    float x; // coordenada x
    float y; // coordenada y
} Ponto;


typedef struct {
    Ponto p; // ponto inicial do segmento
    Ponto q; // ponto final do segmento
} Segmento;


float distancia(Segmento c) {
    return sqrt(pow(c.q.x - c.p.x, 2) + pow(c.q.y - c.p.y, 2));
}

void exibirSegmento(int tam) {
    printf("\n\t");
    for (int i = 0; i < tam; i++) {
        printf("-");
    }
    printf("\n");
}

int main() {
    Segmento reta;

    
    printf("\tCalcular a distância entre dois pontos P e Q\n");

    printf("\nDigite a coordenada x do ponto P: ");
    scanf("%f", &reta.p.x);
    printf("Digite a coordenada y do ponto P: ");
    scanf("%f", &reta.p.y);

    printf("\nDigite a coordenada x do ponto Q: ");
    scanf("%f", &reta.q.x);
    printf("Digite a coordenada y do ponto Q: ");
    scanf("%f", &reta.q.y);

    // Calculando e exibindo o comprimento do segmento
    float tam = distancia(reta);
    printf("\nComprimento do segmento P e Q e: %.2f", tam);
    
    
    exibirSegmento((int)tam);

    return 0;
}

