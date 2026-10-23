#include <stdio.h>


int main(){

    //modo errado (anti-pattern clássico)
    while (!feof(fp)){
        fscanf(fp "%s", nome);
        printf("Nome: %s\n", nome); //Imprime o último nome duas vezes
    }

    //FORMA CORRETA DE TESTAR

    //forma 1: Usando retorno do fscanf
    while (fscanf(fp, "%d %49s", &id, nome) == 2){
        printf("ID: %d | Nome: %s\n", id, nome);
    }

    //forma 2: Usando retorno do fgets
    while (fgets(buffer, sizeof(buffer), fp) != NULL{
        printf("%s", buffer);
    }

    //forma 3: Usando fgetc
    int ch;
    while ((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }
}