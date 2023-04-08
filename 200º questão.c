#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *unidades[] = {"", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez",
                    "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
char *centenas[] = {"", "cem", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};

char *extenso(int n)
{
    static char buf[256];
    buf[0] = '\0';
    if (n < 0 || n > 1000)
    {
        return "Número inválido";
    }
    if (n == 0)
    {
        return "zero";
    }
    if (n == 1000)
    {
        return "mil";
    }
    if (n >= 100)
    {
        strcat(buf, centenas[n / 100]);
        n %= 100;
        if (n != 0)
        {
            strcat(buf, " e ");
        }
    }
    if (n >= 20)
    {
        strcat(buf, dezenas[n / 10]);
        n %= 10;
        if (n != 0)
        {
            strcat(buf, " e ");
        }
    }
    if (n < 20)
    {
        strcat(buf, unidades[n]);
    }
    return buf;
}

int main()
{
    int valor;
    char valor_extenso[100];
    char valor_cheque[100];

    printf("Digite o valor do cheque: ");
    scanf("%d", &valor);

    if (valor > 10000)
    {
        printf("Valor do cheque excede o limite de R$ 10.000,00\n");
        return 1;
    }

    sprintf(valor_cheque, "%05d", valor); // preenche com zeros a esquerda para garantir 5 digitos

    // substitui as dezenas nao utilizadas por asteriscos
    valor_cheque[3] = '*';
    valor_cheque[4] = '*';

    printf("Valor numérico do cheque: %s\n", valor_cheque);
    printf("Valor por extenso: %s reais\n", extenso(valor));

    return 0;
}
