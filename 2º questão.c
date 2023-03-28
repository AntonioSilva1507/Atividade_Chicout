#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("A media dos valores e: %.2f", media);

    return 0;
}
