#include <stdio.h>

void my_strcpy(char *destino, const char *origem)
{
    // copia o caractere atual de origem para destino
    // o laco para assim que ocaractere copiado for o terminador \0
    while ((*destino = *origem) != '\0')
    {
        destino++;
        origem++;
    }
}

int main()
{

    char origem[50];
    char destino[50];

    printf("Digite uma palavra: ");
    scanf("%49s", origem);

    my_strcpy(destino, origem);

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);

    return 0;
}