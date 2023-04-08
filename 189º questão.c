#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_PALAVRAS 10
#define TAM_MAX_PALAVRA 20
#define TEMPO_TESTE 60

int main() {
    char palavras[NUM_PALAVRAS][TAM_MAX_PALAVRA] = {"gato", "cachorro", "papagaio", "bicicleta", "computador", "celular", "caneca", "televisao", "sofa", "livro"};
    int acertos = 0, erros = 0;
    time_t inicio, agora;

    srand(time(NULL));

    printf("Teste de velocidade de digitação!\n");
    printf("Você tem 1 minuto para digitar o máximo de palavras corretas que puder.\n\n");

    inicio = time(NULL);
    agora = time(NULL);

    while(difftime(agora, inicio) < TEMPO_TESTE) {
        int idx_palavra = rand() % NUM_PALAVRAS;
        printf("Digite a palavra: %s\n", palavras[idx_palavra]);

        char palavra_digitada[TAM_MAX_PALAVRA];
        fgets(palavra_digitada, TAM_MAX_PALAVRA, stdin);

        if(strcmp(palavras[idx_palavra], palavra_digitada) == 0) {
            printf("Correto!\n");
            acertos++;
        } else {
            printf("Incorreto! A palavra correta era: %s\n", palavras[idx_palavra]);
            erros++;
        }

        agora = time(NULL);
    }

    printf("\nFim do teste!\n");
    printf("Palavras corretas: %d\n", acertos);
    printf("Palavras incorretas: %d\n", erros);

    return 0;
}
