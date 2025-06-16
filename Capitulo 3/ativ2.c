#include <stdio.h>

int main (){

    int numero1, numero2, numero3;

printf("Digite o 1 Numero: \n");
scanf("%d", &numero1);

printf("Digite o 2 Numero: \n");
scanf("%d", &numero2);

printf("Digite o 3 Numero: \n");
scanf("%d", &numero3);

if (numero1>numero2 && numero1>numero3){
    printf(" este e o maior: %d", numero1); 


}if (numero2>numero1 && numero2>numero3){
    
printf(" este e o maior: %d", numero2);

}if (numero3> numero1 && numero3>numero2)
{
printf(" este e o maior: %d", numero3);
}

return 0;

}