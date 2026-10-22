// mostra a posicao em que o valor digitado esta

#include <stdio.h>

/*
    Busca Linear com Sentinela

    Vantagem:
    Durante a busca, o laço faz apenas uma comparação
    por iteração (array[i] != chave), tornando-o um
    pouco mais eficiente que a busca linear tradicional.
*/

int busca_sentinela(int array[], int chave, size_t tamanho)
{
    /*
        1. Coloca a chave na posição extra do vetor.
        Essa posição é a sentinela.
    */
    array[tamanho] = chave;

    /*
        2. Começa a busca a partir do primeiro elemento.
    */
    size_t i = 0;

    /*
        3. Percorre o vetor até encontrar a chave.
        A busca sempre termina porque a chave foi
        colocada na sentinela.
    */
    while (array[i] != chave)
    {
        i++;
    }

    /*
        4. Se a posição encontrada estiver dentro da
        parte útil do vetor, a chave existe.
    */
    if (i < tamanho)
    {
        return i;
    }

    /*
        5. Se chegou à sentinela, a chave não estava
        originalmente no vetor.
    */
    return -1;
}

int main()
{
    /*
        O vetor possui 6 posições.

        Índices:
        0  1  2  3  4  5

        As posições 0 a 4 contêm os dados.
        A posição 5 fica reservada para a sentinela.
    */
    int vetor[6] = {10, 20, 30, 40, 50};

    int chave;

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &chave);

    /*
        Busca nos 5 elementos úteis do vetor.
    */
    int posicao = busca_sentinela(vetor, chave, 5);

    if (posicao != -1)
    {
        printf("Valor encontrado na posicao %d\n", posicao);
    }
    else
    {
        printf("Valor nao encontrado\n");
    }

    return 0;
}
