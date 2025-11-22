#include <stdio.h>

// Resursividade para da torre.
void moverTorre(int movTorre) {
    if (movTorre > 0) {
        printf("Cima\n");
        moverTorre(movTorre - 1);
    }
}

// Resursividade para o bispo com loops aninhados.
void moverBispo(int movBispo) {
    if (movBispo > 0) {
        printf("Cima\n");

        for (int i = 0; i < 3; i++) {
            if (i == i) { 
                printf("Direita\n");
                break;
            }
        }

        moverBispo(movBispo - 1);
    }
}

// Resursividade para a rainha.
void moverRainha(int movRainha) {
    if (movRainha > 0) {
        printf("Esquerda\n");
        moverRainha(movRainha - 1);
    }
}

int main() {

    int torre = 3;

    // Movimentação da Torre
    printf("Torre:\n");
    moverTorre(torre);
    printf("\n");

    // Movimentação do Bispo
    int bispo = 5;
    printf("Bispo:\n");
    moverBispo(bispo);
    printf("\n");

    // Movimentação da Rainha
    int rainha = 8;
    printf("Rainha:\n");
    moverRainha(rainha);
    printf("\n");

    // Movimentação do Cavalo
    int j;
    printf("Cavalo:\n");
    do {
        for (j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    } while (j <= 1);

    return 0;
}
