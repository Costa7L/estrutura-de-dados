#include <stdio.h>


//Alocacao estatica (Automatica na stack)
void exemplo()
{

    int numero = 10;
    int vetor[100];

    vetor[0] = numero;

    printf("Primeiro elemento: %d\n", vetor[0]);
}

int main()
{

    exemplo();
}