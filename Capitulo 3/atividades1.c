#include <stdio.h>

int main(){

    int numero;

    printf("Digite um Numero: \n");
    scanf("%d", &numero);
    
    if (numero>0)
    {
         printf("Numero Positivo! \n");
    }else if (numero == 0)
    {
        printf("Numero Nulo! \n");
    }else {
        printf("Numero Negativo! \n");
    }
    
    return 0;
    

}