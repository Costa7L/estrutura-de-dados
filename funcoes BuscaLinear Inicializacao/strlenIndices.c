// tamanho da string (nome)

#include <stdio.h>

int my_strlen_indice(const char str[])
{
    int tamanho = 0;

    while (str[tamanho] != '\0')
    {
        tamanho++;
    }
    return tamanho;
}

int main()
{
    char nome[] = "Leandro";

    int tamanho = my_strlen_indice(nome);

    printf("Tamanho: %d\n", tamanho);

    return 0;
}