#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* empacotaString(char* string) {
    int len = strlen(string);
    char* novaString = malloc(len + 1); // Aloca memória para a nova string
    if (novaString == NULL) {
        printf("Erro: não foi possível alocar memória para a nova string.\n");
        exit(1);
    }
    strcpy(novaString, string); // Copia a string original para a nova string
    return novaString; // Retorna a nova string alocada dinamicamente
}

int main() {
    char buffer[1024];
    printf("Digite uma string: ");
    fgets(buffer, 1024, stdin);
    char* string = empacotaString(buffer); // Chama a função para empacotar a string
    printf("String empacotada: %s", string);
    free(string); // Desaloca a nova string alocada dinamicamente
    return 0;
}
