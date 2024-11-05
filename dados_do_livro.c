/*1- Codifique um programa para criar uma variável de tipo anônimo,
capaz de armazenar o título, o autor, a editora e o ano de publicação de um livro;
atribuir valores aos seus campos e exibi-la no vídeo.*/

#include <stdio.h>
#include <string.h>
struct{
    char titulo[50];
    char autor[50];
    char editora[50];
    int ano;
}anonimo;

int main(){
    
    strcpy(anonimo.titulo, "Anne of Green Gables");
    strcpy(anonimo.autor, "Lucy Maud Montgomery");
    strcpy(anonimo.editora, "L.C. Page & Company");
    anonimo.ano = 1908;
   
    //imprimindo dados do livro
    printf("\n\tDados do livro");
    printf("\n\t---------------------------");
    printf("\n\tLivro: %s\n\tAutor: %s", anonimo.titulo, anonimo.autor);
    printf("\n\tEditora: %s\n\tAno de publicação: %d\n\t", anonimo.editora, anonimo.ano);
    printf("\n\t---------------------------");
    return 0;
}
