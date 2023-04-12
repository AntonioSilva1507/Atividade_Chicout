#include <stdio.h>

int main() {
    int num, i, primo = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    //Verifica se o número é divisível por qualquer número entre 2 e (num-1)
    for(i=2; i<=num/2; i++) {
        if(num%i == 0) {
            primo = 1;
            break;
        }
    }
    
    if(num == 1) {
        printf("1 não é primo.\n");
    }
    else {
        if(primo == 0)
            printf("%d é um número primo.\n", num);
        else
            printf("%d não é um número primo.\n", num);
    }
    return 0;
}
