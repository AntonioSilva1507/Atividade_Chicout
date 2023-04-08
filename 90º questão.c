#include <stdio.h>

#define TAM 10

void uniao(int v1[], int v2[], int v3[]);

int main() {
    int v1[TAM], v2[TAM], v3[TAM*2];
    int i;

    // lendo os elementos do primeiro vetor
    printf("Digite %d numeros para o primeiro vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &v1[i]);
    }

    // lendo os elementos do segundo vetor
    printf("Digite %d numeros para o segundo vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &v2[i]);
    }

    // calculando a uniao dos vetores
    uniao(v1, v2, v3);

    // imprimindo o vetor uniao
    printf("Vetor uniao:\n");
    for (i = 0; i < TAM*2; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}

void uniao(int v1[], int v2[], int v3[]) {
    int i, j, k = 0;
    int achou;

    // copiando os elementos do primeiro vetor
    for (i = 0; i < TAM; i++) {
        v3[k++] = v1[i];
    }

    // copiando os elementos do segundo vetor, ignorando os repetidos
    for (i = 0; i < TAM; i++) {
        achou = 0;
        for (j = 0; j < TAM; j++) {
            if (v2[i] == v1[j]) {
                achou = 1;
                break;
            }
        }
        if (!achou) {
            v3[k++] = v2[i];
        }
    }
}
