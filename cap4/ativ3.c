#include <stdio.h>

int main() {
    float valor_compra; 
    float soma_total = 0.0; 

    printf("Calculadora de Soma de Compras\n");
    printf("Digite os valores das compras (digite 0 para finalizar):\n");

    
    do {
        printf("Valor da compra: R$ ");
        scanf("%f", &valor_compra); 
       
        if (valor_compra > 0) { 
            soma_total += valor_compra; 
        } else if (valor_compra < 0) {
            printf("Valor negativo invalido. Por favor, digite um valor nao negativo.\n");
        }

    } while (valor_compra != 0); // A condição para continuar o loop: enquanto o valor não for 0

    printf("\n--- Total das Compras ---\n");
    printf("Soma total das compras: R$ %.2f\n", soma_total); 

    return 0; 
}