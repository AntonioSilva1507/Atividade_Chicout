#include <stdio.h>

int somatorio(int n) {
    if (n == 1) { // caso base: somatório de 1 é 1
        return 1;
    } else { // caso recursivo: somatório de n é n + somatório de n-1
        return n + somatorio(n-1);
    }
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("O somatório dos números de 1 a %d é %d\n", n, somatorio(n));
    return 0;
}
