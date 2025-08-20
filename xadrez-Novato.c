#include <stdio.h>

// Constantes para movimentação
const int BISPO_MOV = 5;
const int TORRE_MOV = 5;
const int RAINHA_MOV = 8;

int main() {
    // Movimentação do Bispo (Diagonal superior direita = Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre (Somente Direita)
    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < TORRE_MOV) {
        printf("Direita\n");
        j++;
    }

    // Movimentação da Rainha (Somente Esquerda)
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOV);

    return 0;
}