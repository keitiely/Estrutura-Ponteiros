/*10- Sistema de Ordenação Polimórfico. Desenvolva um programa que possa
ordenar um vetor de inteirosde diferentes maneiras
(ordem crescente, ordem decrescente e ordem absoluta) usando ponteiros de função.
*/
#include <stdio.h>
#define ABS(n) ((n) < 0 ? -(n) : (n))

void crescente(int *a, int *b){
    int c;
    if(*b < *a){
    c = *b;
    *b = *a;
    *a = c;
    }
};

void decrescente(int *a, int *b){
    int c;
    if(*a < *b){
    c = *a;
    *a = *b;
    *b = c;
    }
    
};

void absoluta(int *a, int *b){
    int c;
   if (ABS(*a) > ABS(*b)) { //compara o valor absoluto sem considerar o sinal 
        c = *a;
        *a = *b;
        *b = c;//depois de comparar retorna em ordem crescente mantendo o sinal
        //mantem o sinal pois nao chamei a funcao abs no corpo do if
   }

};

 int main() {
    int num1, num2, i;
    static void (*ordem[])(int *num1, int *num2) = {crescente, decrescente, absoluta};
    
    printf(" Escolha a ordem dos numeros\n");
    do{
        printf("\n 0. Crescente");
        printf("\n 1. Decrescente");
        printf("\n 2. Absoluta");
        printf("\n 3. Sair");
        printf("\n\n Digite a opcao: ");
        scanf("%d", &i);
        
        if(i >= 0 && i <= 2){
        printf("\n Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf(" Digite o segundo numero: ");
        scanf("%d", &num2);
        
        ordem[i](&num1, &num2);
        printf("\n Em ordem: %d %d\n", num1, num2);
       
        
        } else if(i != 3)
            printf("\n Opcao invalida, tente novamente! ");
        
    }while(i != 3);
    
    printf("\n Programa encerrado!");
    
   
}
