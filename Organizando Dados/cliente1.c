#include <stdio.h>

int main(){
    int pontuacoes_clientes[5];

    pontuacoes_clientes[0] = 90;
    pontuacoes_clientes[1] = 75;
    pontuacoes_clientes[2] =100;
    pontuacoes_clientes[3] = 80;
    pontuacoes_clientes[4] = 95;

    printf("Pontuacoes dos Clientes:\n");
    printf(" Clientes 1 (indice 0): %d\n", pontuacoes_clientes[0]);
    printf(" Clientes 2 (indice 1): %d\n", pontuacoes_clientes[1]);
    printf(" Clientes 3 (indice 2): %d\n", pontuacoes_clientes[2]);
    printf(" Clientes 4 (indice 3): %d\n", pontuacoes_clientes[3]);
    printf(" Clientes 5 (indice 4): %d\n", pontuacoes_clientes[4]);

    int soma_pontuacoes = 0;
    soma_pontuacoes = pontuacoes_clientes[0] + pontuacoes_clientes[1] +
                      pontuacoes_clientes[2] + pontuacoes_clientes[3] + 
                      pontuacoes_clientes[4];

   double media_pontuacoes = (double)soma_pontuacoes / 5;
   printf("\nMedia de pontuacoes: %.2f\n", media_pontuacoes);

   return 0;                    

}