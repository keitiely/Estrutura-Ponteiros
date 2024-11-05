/*6- Defina um tipo de estrutura para armazenar os dados de um vôo como,
por exemplo, os nomes das cidades de origem e destino, datas e horários
de partida e chegada. Crie uma variável desse tipo e atribua valores aos
seus membros usando a notação de ponto e, depois, inicialização.
Usando o tipo de estrutura, crie e inicialize uma tabela com os dados
de todos os vôos de um aeroporto e codifique uma rotina para exibi-la em vídeo.*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome_origem[100];
    char nome_destino[100];
    int data_dia, data_mes, data_ano;
    int horario_hora, hora_min, hora_seg;
}voos;


int main(){
    voos rotina[2];
    //atribuindo valores
    strcpy(rotina[0].nome_origem, "Minas Gerais");
    strcpy(rotina[0].nome_destino, "Sao Paulo");
    rotina[0].data_dia = 12;
    rotina[0].data_mes = 5;
    rotina[0].data_ano = 2025;
    rotina[0].horario_hora = 14;
    rotina[0].hora_min = 36;
    rotina[0].hora_seg = 43;
    
    strcpy(rotina[1].nome_origem, "Bahia");
    strcpy(rotina[1].nome_destino, "Rio de Janeiro");
    rotina[1].data_dia = 20;
    rotina[1].data_mes = 8;
    rotina[1].data_ano = 2027;
    rotina[1].horario_hora = 15;
    rotina[1].hora_min = 48;
    rotina[1].hora_seg = 12;
    
    
    printf("\n\t Dados dos voos: ");
    printf("\n\t-----------------------------");
    for(int i=0; i<2; i++){
    printf("\n\t voo %d:", i+1 );
    printf("\n\t Local de Origem: %s",rotina[i].nome_origem);
    printf("\n\t Local de Destino: %s", rotina[i].nome_destino);
    printf("\n\t Data %d/%02d/%d ", rotina[i].data_dia, rotina[i].data_mes, rotina[i].data_ano);
    printf("\n\t Horario %d:%d:%d ", rotina[i].horario_hora, rotina[i].hora_min, rotina[i].hora_seg);
    printf("\n\t-----------------------------");
    }
    
    return 0;
 
}
