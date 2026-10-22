#include <stdio.h>

int my_stcmp(const char *str1, const char *str2)
{
    // percorre enquanto as duas strings forem iguais e nenhuma tiver terminado

    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }

    // retorna a difernca de valores ASCIi dos caracteres atuais
    return *(const unsigned char *)str1 - *(const unsigned char *)str2;
}

int main()
{

    char str1[6];
    char str2[6];

    printf("Digite uma palvra com quatro caracteres: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite outra palavra com quatro caracters: ");
    fgets(str2, sizeof(str2), stdin);

    int resultado = my_strmp(str1, str2);

    printf("resultado: %d\n", resultado);

    return 0;
}