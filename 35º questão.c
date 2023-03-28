#include <stdio.h>

int primo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (int i = num - 1; i > 1; i--) {
        if (primo(i)) {
            printf("Maior numero primo menor que %d: %d\n", num, i);
            return 0;
        }
    }

    printf("Nao existe numero primo menor que %d.\n", num);
    return 0;
}
