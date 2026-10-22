// mostra o tamnho da string (nome)

#include <stdio.h>

int my_strlen_ponteiro(const char *str)
{
    const char *ptr_inicial = str;
    while (*str != '\0')
    {
        str++; // avanca o endereco
    }

    return str - ptr_inicial; // subtracao de ponteiros retorna o tamanho
}

int main()
{

    char nome[] = "Leandro";

    int tamanho = my_strlen_ponteiro(nome);

    printf("Tamanho: %d\n", tamanho);

    return 0;
}