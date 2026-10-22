// Mostra a posicao em que o numero escolhido esta

#include <stdio.h>
#include <stddef.h>

int busca_linear(const int array[], int chave, size_t tamanho)
{
    for (size_t i = 0; i < tamanho; i++)
    {
        if (array[i] == chave)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int vetor[] = {10, 20, 30, 40, 50};

    int posicao = busca_linear(vetor, 30, 5);

    printf("Posicao: %d\n", posicao);

    return 0;
}
