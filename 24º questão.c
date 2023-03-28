#include <stdio.h>

int main() {
    int num1, num2, resto;

    do {
        printf("Digite o primeiro numero (ou 0 para sair): ");
        scanf("%d", &num1);

        printf("Digite o segundo numero (ou 0 para sair): ");
        scanf("%d", &num2);

        // Calcula o MDC usando o método de Euclides
        while (num2 != 0) {
            resto = num1 % num2;
            num1 = num2;
            num2 = resto;
        }

        printf("O MDC e: %d\n", num1);

    } while (num1 != 0 && num2 != 0);

    return 0;
}
