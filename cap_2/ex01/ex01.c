#include <stdio.h>

int main (){

int velocidade, distancia, tempo;

printf("==== Calculo de Velocidade de um Objeto ====\n");
printf("Digite a distância em km\n");
scanf("%d", &distancia);
printf("Digite o tempo \n");
scanf("%d", &tempo);

velocidade=distancia/tempo;
printf("velocidade media=%d \n",velocidade);

return 0;
}



