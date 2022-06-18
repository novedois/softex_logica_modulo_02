#include <stdio.h>

int main()
{
    // Declara um vetor com 30 itens
    int vetor[] = {
        1, 7, 3, 5, 9, 11, 21, 33, 53, 19,
        15, 17, 33, 23, 41, 99, 55, 77, 29, 27,
        45, 53, 29, 33, 31, 39, 61, 69, 71, 83
    };

    // Pega o tamanho do vetor (kkk super simples)
    int TAMANHO = sizeof vetor / sizeof vetor[0];

    int j, aux;

    printf("\nVetor não ordenado:\t");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetor[i]);
    }

    // Loop para percorrer o array
    for (int i = 1; i <= 30 - 1; i++)
    {
        // Isso imprime passo a passo a execução do algoritmo
        // Deixando comentado para limpar a saída 
        // printf("\n[%d] ", i);

        aux = vetor[i];
        j = i - 1;
        
        // Para cada iteração do loop, fazemos outro loop
        while (j >= 0 && aux < vetor[j])
        {
            // printf("%d, ", j);
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = aux;
    }

    // Imprime o vetor ordenado
    printf("\nVetor ordenado:\t\t");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}