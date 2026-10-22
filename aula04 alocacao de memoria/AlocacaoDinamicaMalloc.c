#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Alocação dinŝmica de um vetor de tamanho 'n'
    int *vetor = (int *)malloc(n * sizeof(int));

    // Verificacao de seguranca (ponteiro nulo)
    if (vetor == NULL)
    {
        printf("Erro: Memória insuficiente!\n");
        return 1;
    }

    // uso normal do vetor
    vetor[0] = 42;

    // liberação obrigatória
    free(vetor);
    vetor = NULL; // evita ponteiro solto (dangling pointer)
    return 0;
}