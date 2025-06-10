#include <stdio.h>

float raiz_quadrada(float n) {
    float x = n;
    float y = 1.0;
    float e = 0.00001;
    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz real: x = %.2f\n", x1);
    } else {
        float raiz_delta = raiz_quadrada(delta);
        x1 = (-b + raiz_delta) / (2 * a);
        x2 = (-b - raiz_delta) / (2 * a);
        printf("A equação possui duas raízes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}

