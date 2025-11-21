#include <stdio.h>

int main() {
    int numb = 1;

    // Movimentação da Torre
    printf("Torre\n");
    while (numb <= 5) {
        numb++;
        printf("Cima\n");
    }

    

    // Movimentação do Bispo
    printf("Bispo\n");
    numb = 1;
    do {
        printf("Cima, Direita\n");
        numb++;
    } while (numb <= 5);

    // Movimentação da Rainha
    printf("Rainha\n");
    for (int i = 0; i < 8; i++)
    {
         printf("Esquerda\n");
    }
    

    return 0;
}
