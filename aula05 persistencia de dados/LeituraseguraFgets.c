#include <stdio.h>

//Faz uma leitura de linhas usando fgets (apenas le linhas já existentes em um arquivo existente)
int main()
{

    char *fgets(char *str, int tamanho, FILE *stream);

    FILE *fp = fopen("mensagem.txt", "r");
    char linha[100];

    if (fp != NULL)
    {
        while (fgets(linha, sizeof(linha), fp) != NULL)
        {
            printf("Linha lida: %s", linha);
        }
        fclose(fp);
    }
}