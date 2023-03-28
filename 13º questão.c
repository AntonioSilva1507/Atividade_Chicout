#include <stdio.h>

int main() {
    float horas_trabalhadas, valor_hora, salario;

    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);

    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    }
    else if (horas_trabalhadas <= 60) {
        salario = 40 * valor_hora + (horas_trabalhadas - 40) * (1.5 * valor_hora);
    }
    else {
        salario = 40 * valor_hora + 20 * (1.5 * valor_hora) + (horas_trabalhadas - 60) * (2 * valor_hora);
    }

    printf("O salário semanal é: R$%.2f", salario);

    return 0;
}
