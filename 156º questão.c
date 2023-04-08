#include <stdio.h>

void frac(float num, int* inteiro, float* frac);

int main() {
    float num, frac_part;
    int int_part;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &int_part, &frac_part);

    printf("Parte inteira: %d\n", int_part);
    printf("Parte fracionaria: %f\n", frac_part);

    return 0;
}

void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int) num;
    *frac = num - *inteiro;
}
