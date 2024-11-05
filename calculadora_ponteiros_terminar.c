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
    return a / b;
};


 int main() {
    static float (*c[])(int num1, int num2) = {soma, sub, mult, divi};
    printf("\n\tCalculadora Polimorfica com ponteiros");
    printf("\nDigite qual operacao fazer: ");
    int i;
    do{
        printf("\n0. Somar ");
        printf("\n1. Subtrair ");
        printf("\n2. Multiplicar ");
        printf("\n3. Dividir ");
        printf("\n4. Fechar ");
        
        
        if (i>=0 && i<=3)
            c[i](num1, num2);
    }while(i != 4);
 
}
