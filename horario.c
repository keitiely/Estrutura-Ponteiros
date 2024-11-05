/*5- Defina um tipo de estrutura para armazenar um horário composto de hora,
minutos e segundos. Crie e inicialize uma variável desse tipo e,
em seguida, mostre seu valor no vídeo usando o formato "99:99:99".*/

#include <stdio.h>

typedef struct{
    int hora;
    int minutos;
    int segundos;
}horario;

int main(){
    
  horario hours = {17, 30, 46 };
  
  printf("\n\tHora definida: %d:%d:%d", hours.hora, hours.minutos, hours.segundos);

    return 0;
}
