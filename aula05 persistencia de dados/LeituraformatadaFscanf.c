#include <stdio.h>

// Apenas le dados de um arquivo já existente, não salva os valores em um arquivo
int main()
{

    int matricula;
    char nome[50];
    float nota;

    FILE *fp = fopen("alunos.txt", "r");
    if (fp != NULL)
    {
        // fscanf retorna o numero de campos lidos com sucesso
        while (fscanf(fp, "%d %49s %f", &matricula, nome, &nota) == 3)
        {
            printf("Matricula: %d | Nome: %s | Nota: %.2f\n", matricula, nome, nota);
        }
        fclose(fp);
    }
}