/*12- Função que Retorna um Ponteiro para o Maior Elemento de um Array.
Escreva uma função chamada encontraMaior que recebe um array de inteiros e seu tamanho,
e retorna um ponteiro para o maior elemento do array.*/

#include <stdio.h>
void maior(int array[], int num){
    int maior = array[0];
    for(int i=0; i<num; i++){
        if(array[i] > maior)
        maior = array[i];
    }
     printf("\n\tO maior e %d", maior);
}

int main(){
     int tam;
    
    printf("\n Digite o tamanho do seu vetor: ");
    scanf("%d", &tam);
     
    int vetor[tam];
    
    for(int i=0; i < tam; i++){
        printf(" Digite o valor da posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    static void (*encontre[])(int vetor[], int tam) = {maior};
    encontre[0](vetor, tam);
    
    

    return 0;
}
