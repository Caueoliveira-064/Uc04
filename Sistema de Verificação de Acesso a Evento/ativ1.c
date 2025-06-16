#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    int possuiIngresso;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Você possui ingresso? (1 para Sim, 0 para Não): ");
    scanf("%d", &possuiIngresso);

    if (idade >= 18 && possuiIngresso == 1) {
        printf("Bem-vindo ao evento, %s!\n", nome);
    } else if (idade < 18) {
        printf("Entrada não permitida para menores de idade.\n");
    } else if (possuiIngresso == 0) {
        printf("É necessário possuir ingresso para entrar.\n");
    } else {
        printf("Informações inválidas. Verifique seus dados.\n");
    }

    return 0;
}