#include <stdio.h>

// Codigo Aventureiro = Adiciona movimentação do cavalo

// Constantes para movimentação
const int BISPO_MOV = 5;
const int TORRE_MOV = 5;
const int RAINHA_MOV = 8;
const int CAVALO_MOV = 3; // Número de movimentos em L

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

    // Movimentação do Cavalo (L: 2 para baixo + 1 para esquerda)
    // Loops aninhados: For + while
    printf("\nMovimentação do Cavalo:\n");
    for (int m = 0; m < CAVALO_MOV; m++) {
        printf("Movimento em L %d:\n", m + 1);

        // Loop interno para mover 2 casas para baixo
        int n = 0;
        while (n < 2) {
            printf("Baixo\n");
            n++;
        }

        // Movimento final para esquerda
        printf("Esquerda\n");
        printf("\n"); // Separador entre movimentos
    }

    return 0;
}