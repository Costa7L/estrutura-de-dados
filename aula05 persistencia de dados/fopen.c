#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fopen(const char *caminho_arquivo, const char *modo);

    // Exemplo de uso defensivo

    FILE *fp = fopen("dados.txt", "w"); // abre o arquivo para escrita

    // verifica se o arquivo foi aberto
    if (fp == NULL)
    {
        perror("Erro critico ao abrir o arquivo");
        exit(EXIT_FAILURE); // Biblioteca stdlib - Encerra o programa indicando uma falha
    }
}