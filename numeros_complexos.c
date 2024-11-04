/*2- Defina um tipo de estrutura rotulada para representar números
complexos da forma a+b⋅i , sendo a a parte real e b a imaginária.
Em seguida, crie uma função para calcular a soma de dois números complexos
e codifique um programa para testar seu funcionamento. Use atribuição para
inicializar os campos membros das variáveis.*/

#include <stdio.h>
typedef struct{
    float a; //parte real
    float b; //parte imaginaria
}complexos;

complexos soma(complexos num1, complexos num2){
    complexos resultado;
    resultado.a= num1.a + num2.a;
    resultado.b= num1.b + num2.b;
    return resultado;
}
int main(){
    complexos c[2];
    
   printf("\tRealizar soma de dois numeros complexos\n");
   for(int i=0; i<2; i++){
   printf("\n Digite o numero real %d: ", i+1);
   scanf("%f", &c[i].a);
   printf(" Digite o numero imaginario %d: ", i+1);
   scanf("%f", &c[i].b);
   
   }
     /*teste soma atribuindo valores sem pedir para o usuario
    Complexos c1 = {2.5, 3.0};
    Complexos c2 = {1.5, 4.5};

     //calculando soma
    Complexo resultado = soma(c1, c2);
    */
    
    //chamando a funcao soma;
    complexos resultado= soma(c[0], c[1]);
     
    // Exibindo o resultado da soma
     printf("------------------------------");
    printf("\n A soma dos complexos é: %.1f + %.1fi\n", resultado.a, resultado.b);
   
    return 0;
}
