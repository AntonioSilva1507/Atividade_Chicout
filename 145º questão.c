#include <stdio.h>

int soma_dobro(int *a, int *b) {
    *a = *a * 2; // armazena o dobro de A em A
    *b = *b * 2; // armazena o dobro de B em B
    return (*a + *b); // retorna a soma dos dobros
}

int main() {
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    int resultado = soma_dobro(&a, &b);
    printf("A soma do dobro de A e dobro de B eh: %d\n", resultado);
    printf("O valor de A agora eh: %d\n", a);
    printf("O valor de B agora eh: %d\n", b);
    return 0;
}
