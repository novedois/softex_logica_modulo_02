#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tamanho, *vetor;

    // Declara o tamanho do vetor
    tamanho = 22;

    // Função inicializada para poder usar rand depois
    srand(time(NULL));

    // Gera a quantidade de memória necessária para o vetor com tamanho indicado (22 inteiros)
    vetor = malloc(tamanho * sizeof(int));

    // Caso de sucesso (vetor = true)
    if (vetor)
    {

        printf("\nMemoria alocada com sucesso!\n");

        // Popula o vetor com números aleatórios entre 1 e 100
        for (int i = 0; i < tamanho; i++)
            *(vetor + i) = rand() % 100;

        // Imprime o vetor
        for (int i = 0; i < tamanho; i++)
            printf("%d ", *(vetor + i));
        printf("\n\n");
    }
    // Caso de erro
    else
    {
        printf("\nErro ao alocar memoria!\n");
    }

    free(vetor);
    return 0;
}