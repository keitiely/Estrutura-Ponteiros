/*3- Defina um tipo de estrutura nomeada para representar pontos
no plano através de suas coordenadas cartesianas. Em seguida,
crie uma função para calcular a distância entre dois pontos e 
codifique um programa para testar seu funcionamento. Use a função scanf()
para inicializar os campos membros das variáveis com valores lidos do teclado.
Dica: a distância entre dois pontos P e Q, conforme ilustração ao lado, é dada pela seguinte fórmula:*/

#include <stdio.h>
#include <math.h>
typedef struct{
    float x; //coordenada x de P e Q
    float y; //coordenada y de P e Q
}pontos;

pontos distancia(pontos num1, pontos num2){
    pontos resultado;
    resultado = sqrt(pow(num1.x - num2.x, 2) * pow(num1.y - num2.y, 2) );
    return resultado;
}

int main(){
   pontos p[2];
   char l[2]={'P', 'Q'};
    
   printf("\tCalcular a distancia de dois Pontos P e Q\n");
   for(int i=0; i<2; i++){
   printf("\n Digite a coordenada x do Ponto %c: ",l[i]);
   scanf("%f", &p[i].x);
   printf("\n Digite a coordenada y do Ponto %c: ", l[i]);
   scanf("%f", &p[i].y);
   }
   
   //chamando funcao distancia
   pontos resultado= distancia(p[0], p[1]);
   
   printf("A Distancia dos pontos P e Q e: %.2f", resultado);
    
    return 0;
}


