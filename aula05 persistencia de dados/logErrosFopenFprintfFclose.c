#include <stdio.h>
#include <time.h>

void registrar_log(const char *mensagem)
{
    FILE *log_file = fopen("sistema.log", "a"); // modo anexo
    if (log_file != NULL)
    {
        time_t agora = time(NULL);       // obtem o horario atual
        char *data_hora = ctime(&agora); // converte o horario para uma string legivel
        data_hora[24] = '\0';            // remove o \n automatico do ctime

        fprintf(log_file, "[%s] - LOG %s\n", data_hora, mensagem);
        fclose(log_file); // fecha a gravacao
    }
}

int main()
{
    registrar_log("Programa iniciado");
    registrar_log("Usuario realizou login");
    registrar_log("Operacao concluida");

    printf("Logs registrados. Verifique o arquivo sistema.log.\n");

    return 0;
}