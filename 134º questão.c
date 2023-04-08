#include <stdio.h>

void somaMatrizes(float matriz1[2][2], float matriz2[2][2], float resultado[3][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtraiMatrizes(float matriz1[2][2], float matriz2[2][2], float resultado[3][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz2[i][j] - matriz1[i][j];
        }
    }
}

void adicionaConstante(float matriz[2][2], float constante) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] += constante;
        }
    }
}

void imprimeMatriz(float matriz[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[2][2], matriz2[2][2], resultado[3][3];
    float constante;

    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matriz2[i][j]);
        }
    }

    int opcao;
    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Somar as duas matrizes\n");
        printf("2 - Subtrair a primeira matriz da segunda\n");
        printf("3 - Adicionar uma constante as duas matrizes\n");
        printf("4 - Imprimir as matrizes\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                somaMatrizes(matriz1, matriz2, resultado);
                printf("\nResultado da soma:\n");
                imprimeMatriz(resultado);
                break;
            case 2:
                subtraiMatrizes(matriz1, matriz2, resultado);
                printf("\nResultado da subtracao:\n");
                imprimeMatriz(resultado);
                break;
            case 3:
                printf("\nDigite a constante a ser adicionada: ");
                scanf("%f", &constante);
                adicionaConstante(matriz1, constante);
                adicionaConstante(matriz2, constante);
                printf("\nConstante adicionada com sucesso!\n");
                break;
            case 4:
                printf("\nMatriz 1:\n");
                imprimeMatriz(matriz1);
        }
    }
}
