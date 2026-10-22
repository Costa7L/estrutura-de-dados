#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *nome = malloc(20 * sizeof(char));

    nome[0] = 'B';
    nome[1] = 'o';
    nome[2] = 'l';
    nome[3] = 'o';
    nome[4] = '\0';

    printf(nome);
}