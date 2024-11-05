/*7-Defina um tipo de estrutura, para representar livros,
contendo título, autor e ano de publicação. Em seguida,
codifique uma função para preencher uma tal estrutura com dados obtidos via teclado.
Codifique uma função para preencher uma tabela cujos elementos são estruturas representando livros.
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[100];
    char autor[100];
    int ano;
}livros;

void preencher(int qntd, livros livro[]){
    for(int i=0; i<qntd; i++){
    printf("\n Dados do livro %d: ", i+1);
    printf("\n Titulo: ");
    getchar();  // Para limpar o buffer do scanf anterior
      
    fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);
    livro[i].titulo[strcspn(livro[i].titulo, "\n")] = 0;  // Remove o newline
      
    printf(" Autor: ");
    fgets(livro[i].autor, sizeof(livro[i].autor), stdin);
    livro[i].autor[strcspn(livro[i].autor, "\n")] = 0;
    
    printf(" Ano de Publicacao: ");
    scanf("%d", &livro[i].ano);
    }
 
};

void imprimir(int qntd, livros livro[]){
    
    for(int i=0; i<qntd; i++){
    printf("\n\t---------------------------");
    printf("\n\tLivro %d", i+1);
    printf("\n\tTitulo: %s\n\tAutor: %s", livro[i].titulo, livro[i].autor);
    printf("\n\tAno de publicação: %d\n\t", livro[i].ano);
     printf("\n\t---------------------------");
    }
    printf("\n");
};
int main() {
    int qntd;
    printf("\n\t Lista de Livros ");
    printf("\n\t Quantos livros deseja inserir? ");
    scanf("%d", &qntd);
    
    livros livro[qntd];
    preencher(qntd, livro);
    imprimir(qntd, livro);
    return 0;
}
