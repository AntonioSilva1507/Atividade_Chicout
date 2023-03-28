#include <stdio.h>

int main()
{
    int numeros[10], impares[10], i, j=0;
    
    // Lendo e armazenando os números inteiros no vetor 'numeros'
    for(i=0; i<10; i++)
    {
        printf("Digite um numero inteiro entre 0 e 50: ");
        scanf("%d", &numeros[i]);
        
        // Verificando se o número lido está dentro do intervalo
        while(numeros[i] < 0 || numeros[i] > 50)
        {
            printf("Numero invalido! Digite um numero inteiro entre 0 e 50: ");
            scanf("%d", &numeros[i]);
        }
    }
    
    // Preenchendo o vetor 'impares' com os números ímpares do vetor 'numeros'
    for(i=0; i<10; i++)
    {
        if(numeros[i] % 2 != 0)
        {
            impares[j] = numeros[i];
            j++;
        }
    }
    
    // Imprimindo os vetores
    printf("\nNumeros pares digitados: ");
    for(i=0; i<10; i++)
    {
        if(numeros[i] % 2 == 0)
        {
            printf("%d ", numeros[i]);
        }
    }
    
    printf("\nNumeros impares digitados: ");
    for(i=0; i<j; i++)
    {
        printf("%d ", impares[i]);
    }
    
    return 0;
}
