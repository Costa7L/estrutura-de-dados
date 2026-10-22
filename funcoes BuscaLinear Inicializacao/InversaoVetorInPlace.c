 // inverte os valores

#include <stdio.h>

void inverter_vetor(int vetor[], int tamanho)
{
    int inicio = 0;
    int fim = tamanho - 1;

    // caminha convergindo para o centro do vetor
    while (inicio < fim)
    {
        // permuta fisica dos elementos simetricos
        int temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;

        // move os limitadores
        inicio++;
        fim--;
    }
}

int main()
{
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    inverter_vetor(vetor, tamanho);

    printf("Vetor invertido:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}