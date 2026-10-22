#include <stdio.h>

void modos_binarios()
{

    // modos binarios principais
    FILE *f_bin1 = fopen("datas.dat", "rb");  // leitura binaria
    FILE *f_bin2 = fopen("datas.dat", "wb");  // Escrita binaria (sobrescreve)
    FILE *f_bin3 = fopen("datas.dat", "ab");  // Anexo binario no fim
    FILE *f_bin4 = fopen("datas.dat", "rb+"); // Atualizacao binaria (leitura e escrita)
}