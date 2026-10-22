// le as strings mesmo com espaco

#include <stdio.h>

int main()
{
    char nome[11]; // capacidade para 10 caracteres + \0

    printf("Digite o seu nome: ");
    // le no maximo 10 caracteres (reserva a ultima posicao para o \0)
    fgets(nome, sizeof(nome), stdin);

    printf("Nome inserido: %s\n", nome);
    return 0;
}