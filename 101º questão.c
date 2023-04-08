#include <stdio.h>

#define TAM 10

int main() {
    int v[TAM], pares[TAM], impares[TAM];
    int i, j = 0, k = 0;

    // lendo os elementos do vetor
    printf("Digite %d numeros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &v[i]);
    }

    // separando os pares e os impares em vetores diferentes
    for (i = 0; i < TAM; i++) {
        if (v[i] % 2 == 0) {
            pares[j++] = v[i];
        } else {
            impares[k++] = v[i];
        }
    }

    // imprimindo o vetor de pares
    printf("Pares:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    // imprimindo o vetor de impares
    printf("Impares:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}
