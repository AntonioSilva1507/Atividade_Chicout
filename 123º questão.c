#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    
    // Lendo a matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Calculando a soma da diagonal principal
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }
    
    // Exibindo o resultado
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    
    return 0;
}
