/*8- Calculadora Polimórfica com Ponteiros de Funções.
Crie um programa que simule uma calculadora básica que pode realizar operações diferentes
(adição, subtração, multiplicação e divisão) usando ponteiros de função. O usuário escolhe a
operação que deseja realizar e o programa chama a função correspondente.
*/
#include <stdio.h>
float soma(int a, int b){
   return a + b;
};
float sub(int a, int b){
    return a - b;
};
float mult(int a, int b){
    return a * b;
};
float divi(int a, int b){
    if(b!=0)
    return a / b;
    else
    printf("\nNao existe divisao por zero");
    return 0;
};


 int main() {
    int num1, num2, i;
    static float (*c[])(int num1, int num2) = {soma, sub, mult, divi};
    
    printf("\n\tCalculadora Polimorfica com ponteiros");
   
    do{
        printf("\n\n  0. Somar ");
        printf("\n  1. Subtrair ");
        printf("\n  2. Multiplicar ");
        printf("\n  3. Dividir ");
        printf("\n  4. Fechar ");
        printf("\n\n Digite a opcao: ");
        scanf("%d", &i);
    
        
        if(i>=0 && i<=3){
            printf("\n Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf(" Digite o segundo numero: ");
            scanf("%d", &num2);
            printf("\n Resultado: %.2f", c[i](num1, num2));
        } else if(i != 4){
            printf("\n Numero invalido, tente novamente! ");
        }
     

    }while(i != 4);
    printf("\n Calculadora encerrada!");
 
}
