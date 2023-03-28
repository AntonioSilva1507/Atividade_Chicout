#include <stdio.h>

int main() {
    int valores[6];
    int i;

    // Lê 6 valores inteiros pares
    for(i = 0; i < 6; i++) {
        do {
            printf("Digite o %dº valor par: ", i+1);
            scanf("%d", &valores[i]);
        } while(valores[i] % 2 != 0);
    }

    // Mostra na tela os valores lidos na ordem inversa
    printf("\nValores lidos na ordem inversa: ");
    for(i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }

    return 0;
}
