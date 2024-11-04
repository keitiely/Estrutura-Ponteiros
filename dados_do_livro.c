/*1- Codifique um programa para criar uma variável de tipo anônimo,
capaz de armazenar o título, o autor, a editora e o ano de publicação de um livro;
atribuir valores aos seus campos e exibi-la no vídeo.*/

#include <stdio.h>
struct{
    char titulo[50];
    char autor[50];
    char editora[50];
    int ano;
}anonimo;

int main(){
    //leitura dos dados do livro
    printf("Digite os dados do livro\n\nTitulo: ");
    fgets(anonimo.titulo, sizeof(anonimo.titulo), stdin);
    printf("Autor: ");
    fgets(anonimo.autor, sizeof(anonimo.autor), stdin);
    printf("Editora: ");
    fgets(anonimo.editora, sizeof(anonimo.editora), stdin);
    printf("Ano de Publicacao: ");
    scanf("%d", &anonimo.ano);
    
    //imprimindo dados do livro
    printf("\n\tDados do livro");
    printf("\n\t---------------------------");
    printf("\n\tLivro: %s\n\tAutor: %s", anonimo.titulo, anonimo.autor);
    printf("\n\tEditora: %s\n\tAno de publicação: %d\n\t", anonimo.editora, anonimo.ano);
    printf("\n\t---------------------------");
    return 0;
}
