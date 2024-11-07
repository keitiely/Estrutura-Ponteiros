/*9- Sistema de Impressão de Mensagens Personalizadas.
Crie um programa que possa imprimir diferentes mensagens personalizadas com base 
em diferentes cenários, como uma mensagem de boas-vindas, uma mensagem de erro
e uma mensagem de despedida. Use ponteiros de função para selecionar a mensagem correta.
*/
#include <stdio.h>
void boasVindas(int){
  printf("\n\n************************************************************\n");
  printf("*                  Ola, seja Bem-vindo!                    *\n");
  printf("* Esperamos que você tenha uma excelente experiência aqui. *\n");
  printf("************************************************************\n\n");

};
void erro(int){
    printf("\n\n*******************************\n");
    printf("*            Erro!            *\n");
    printf("* Por favor, tente novamente..*\n");
    printf("*******************************\n");
};

void despedida(int){
    printf("\n\n*************************************\n");
    printf("* Obrigado por utilizar o programa! *\n");
    printf("*           Até a próxima!          *\n");
    printf("*************************************\n\n");
};

 int main() {
    
    int i;
    static void (*c[])() = {boasVindas, erro, despedida};
    
    printf("\nEscolha a mensagem correta\n");
    do{
        printf("\n0. Boa Vindas");
        printf("\n1. Erros");
        printf("\n2. Despedida");
        printf("\nDigite a opcao: ");
        scanf("%d", &i);
        
        if(i>=0 && i<=2){
            c[i]();
        }else if(i != 2)
        printf("\nOpcao invalida, tente novamente!");
        
        
    }while(i!= 2);
    
}
