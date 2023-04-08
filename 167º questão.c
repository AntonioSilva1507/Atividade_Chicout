#include <stdio.h>

int decompor_em_fatores_primos(int n, int* vetor, int* x) {
    int i, j, count;
    count = 0; // Inicializa a contagem de fatores primos encontrados em 0
    for (i = 2; i <= n; i++) { // Loop de 2 até n para encontrar os fatores primos
        while (n % i == 0) { // Enquanto i é um fator primo de n
            if (count == 10) { // Se o vetor está completo com 10 fatores primos
                *x = 10; // Atribui 10 a x
                return 1; // Retorna 1 indicando que o vetor está completo
            }
            vetor[count++] = i; // Adiciona i ao vetor e incrementa a contagem
            n /= i; // Divide n por i para continuar a busca pelos fatores primos
        }
    }
    *x = count; // Atribui a contagem de fatores primos encontrados a x
    return 0; // Retorna 0 indicando que todos os fatores primos foram encontrados
}

int main() {
    int n = 90; // Define o valor de teste de n
    int vetor[10]; // Define o vetor que armazenará os fatores primos
    int x; // Variável que receberá o número de fatores primos encontrados
    int i, is_overflow;
    
    is_overflow = decompor_em_fatores_primos(n, vetor, &x); // Chama a função para decompor n em fatores primos
    
    if (is_overflow) { // Se o vetor está completo com 10 fatores primos
        printf("O vetor foi preenchido apenas com os primeiros 10 fatores primos:\n"); // Exibe uma mensagem de alerta
    }
    
    for (i = 0; i < x; i++) { // Loop para exibir os fatores primos encontrados
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
