#include <stdio.h>
#include <math.h>

double power(double base, double expoente) {
    int numerador = (int) round(expoente * 10);
    int denominador = 10;
    
    // Simplifica a razão de inteiros
    for (int i = numerador; i > 1; i--) {
        if (numerador % i == 0 && denominador % i == 0) {
            numerador /= i;
            denominador /= i;
        }
    }
    
    double result = pow(base, numerador);
    result = pow(result, 1.0 / denominador);
    
    // Verifica se basenumerador estourou a faixa dos double
    while (result == HUGE_VAL || result == -HUGE_VAL) {
        numerador /= 10;
        denominador /= 10;
        result = pow(base, numerador);
        result = pow(result, 1.0 / denominador);
    }
    
    if (numerador < 0) {
        result = 1.0 / result;
    }
    
    return result;
}

int main() {
    double base, expoente;
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%lf", &expoente);
    double resultado = power(base, expoente);
    printf("%.2lf elevado a %.2lf = %.2lf\n", base, expoente, resultado);
    return 0;
}
