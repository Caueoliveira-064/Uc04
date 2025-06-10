#include <stdio.h>

int main (){

int a = 1;
int b = 3;
int temp;

printf("Antes da troca:\n");
printf("a = %d\n", a);
printf("b = %d\n", b);

temp = a;
a = b;
b = temp;

printf("Depois da troca:\n");
printf("a = %d\n", a);
printf("b = %d\n", b);

return 0;
}
