typedef struct {
    float menor;
    float maior;
    float meio;
} MaMeMe;

void classifica(MaMeMe* valores) {
    // Ordena os valores usando o algoritmo "bubble sort"
    float temp;
    if (valores->menor > valores->meio) {
        temp = valores->menor;
        valores->menor = valores->meio;
        valores->meio = temp;
    }
    if (valores->menor > valores->maior) {
        temp = valores->menor;
        valores->menor = valores->maior;
        valores->maior = temp;
    }
    if (valores->meio > valores->maior) {
        temp = valores->meio;
        valores->meio = valores->maior;
        valores->maior = temp;
    }
}
