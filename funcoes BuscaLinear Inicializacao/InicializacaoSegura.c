#include <stdio.h>
#define LIMITE 10 // uso de constante simbólica facilira a manuntenção

int main(void)
{
    // 1. inicializa todas as posicoes com zero
    int vetor_seguro[LIMITE] = {0};

    // 2. inicializa parcial (demais posicoes viram zero automaticamnet)
    int vetor_parcial[LIMITE] = {1, 2, 3}; // pos 3 a 9 conterao 0

    // 3. inicializa implicita (compilador calcula o tamanho)
    int vetor_implicito[] = {10, 20, 30, 40}; // tamanho = 4

    return 0;
}