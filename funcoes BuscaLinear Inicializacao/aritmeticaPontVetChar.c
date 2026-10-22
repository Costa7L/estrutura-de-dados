// Mostra o endereco de memoria de cada caractere da string

#include <stdio.h>

void imprimir_caracteres(const char *ptr)
{
    // enquanto o caractere apontado por ptr nao for o nulo ('\0')
    while (*ptr != '\0')
    {
        printf("Caractere %c | Endereço: %p\n", *ptr, (void *)ptr);
        ptr++; // avanca exatamente 1 byte na memoria ram
    }
}

int main()
{

    char nome[] = "Leo";

    imprimir_caracteres(nome);

    return 0;
}