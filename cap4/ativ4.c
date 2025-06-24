#include <stdio.h> 

int main() {
    int numero;

   
    do {
        printf("Digite um numero inteiro entre 1 e 10 para ver sua tabuada: ");
        scanf("%d", &numero); 

        if (numero < 1 || numero > 10) { 
            printf("Numero invalido! Por favor, digite um numero entre 1 e 10.\n");
        }
    } while (numero < 1 || numero > 10); 

    printf("\n--- Tabuada do %d ---\n", numero);

    // Loop para gerar e exibir a tabuada (de 1 a 10)
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0; 
}