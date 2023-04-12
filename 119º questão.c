#include <stdio.h>

int main() {
    int i, j;
    int matriz1[4][4], matriz2[4][4], matriz3[4][4];
    
    //Leitura da matriz1
    printf("Digite os valores da matriz1:\n");
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    //Leitura da matriz2
    printf("Digite os valores da matriz2:\n");
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    //Cálculo da matriz3
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            if(matriz1[i][j] > matriz2[i][j])
                matriz3[i][j] = matriz1[i][j];
            else
                matriz3[i][j] = matriz2[i][j];
        }
    }
    
    //Impressão da matriz3
    printf("Matriz resultante:\n");
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
