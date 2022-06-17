#include <stdio.h>

int main()
{

    // Declaramos e inicializamos o array não ordenado
    // e declaramos a variável temporária.
    int array[10] = {1, 4, 2, 9, 6, 8, 7, 3, 10, 5};
    int temp;

    printf("\nArray não ordenado:\t ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    // Loop percorre o array
    for (int i = 0; i < 10; i++)
    {

        // Para cada iteração do loop acima, percorremos um novo loop
        for (int j = 0; j < 10; j++)
        {

            // Verifica se um determinado elemento do array é maior
            // que o elemento seguinte
            if (array[j] > array[j + 1])
            {
                
                // Caso seja verdade, tal elemento é colocado em uma
                // variável temporária (temp). Depois, sua posição é
                // trocada pela do elemento seguinte.
                
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
        }
    }

    printf("\nArray ordenado:\t\t ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}