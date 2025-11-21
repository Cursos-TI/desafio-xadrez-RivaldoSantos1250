#include <stdio.h>

int main() {
    int numb = 1;

    // Movimentação da Torre
    while (numb <= 5) {
        numb++;
        printf("Cima\n");
    }

    printf("+========================+\n");

    // Movimentação do Bispo
    numb = 1;
    do {
        printf("Cima, Direita\n");
        numb++;
    } while (numb <= 5);

    return 0;
}
