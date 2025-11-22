#include <stdio.h>

void moverTorre(int movTorre) {
    if(movTorre > 0) {
        printf("Cima\n");
        moverTorre(movTorre -1);     
    }    
}

int main() {

    int numb = 5;

    // Movimentação da Torre
    printf("Torre\n");
    printf("\n");
    moverTorre(numb);

    printf("\n");

    // Movimentação do Bispo
    printf("Bispo\n");
    printf("\n");
    numb = 1;
    do {
        printf("Cima, Direita\n");
        numb++;
    } while (numb <= 5);

    printf("\n");

    // Movimentação da Rainha
    printf("Rainha\n");
    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }

    printf("\n");

    // Movimentação do Cavalo
    printf("Cavalo\n");
    printf("\n");

    int j;
    do {
        for (j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    } while (j <= 1);

    return 0;
}
