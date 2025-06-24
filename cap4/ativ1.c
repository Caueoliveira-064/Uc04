#include <stdio.h>

int main(){
    int num;
    
    num = 1;
    while(num>0){
        printf("Digite um numero inteiro (negativo para sair):");
        scanf("%d",&num);
        printf("Numero digitado:%d\n",num);
    }
    printf("finalizado.");
    return 0;
}