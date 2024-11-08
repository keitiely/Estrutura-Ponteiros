/*11- Sistema de Manipulação de Strings com Operações Polimórficas.
Crie um programa que permita manipular uma string de diferentes maneiras
(converter para maiúsculas, minúsculas e inverter a string) usando ponteiros de função.*/

#include <stdio.h>
void maiusculas(char *string){
    
  while(*string) {
   
    if(*string >= 'a' && *string <='z'){
        *string= *string - ('a' - 'A');
    }
    
    string++;
  }
}

void minusculas(char *string){
     while(*string) {
   
    if(*string >= 'A' && *string <='Z'){
        *string = *string + ('a' - 'A');
    }
    
    string++;
  }
}

void inverter(char *string){
    int i=0;
    char *fim = string;
    while(*fim){
       fim++;
       i++;
    }
    fim--;
    
    while(string < fim){
        char temp = *string;
        *string = *fim;
        *fim = temp;
        
        string++;
        fim--;
    }
    
}

int main(){
    int i;
    char nome[50]= "Hello World";
    static void (*str[])(char *string) = {maiusculas, minusculas, inverter};
    
    printf("Escolha qual converter: ");
    do{
        printf("\n 0. Maiuculas");
        printf("\n 1. minusculas");
        printf("\n 2. Inverter");
        printf("\n Digite a opcao: ");
        scanf("%d", &i);
        
        str[i](nome);
        printf("\n %s\n", nome);
            
        
    }while(i != 3);
    

    return 0;
}
