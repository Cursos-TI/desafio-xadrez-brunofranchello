#include <stdio.h>

// Constantes de movimentação
const int BISPO_MOV = 5;
const int TORRE_MOV = 5;
const int RAINHA_MOV = 8;

// Protótipos das funções
void moverBispo(int passos);
void moverTorre(int passos);
void moverRainha(int passos);
void moverCavalo();

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE_MOV);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

    moverCavalo();

    return 0;
}

// Função recursiva com loop aninhado para movimentar o Bispo (Cima + Direita)
void moverBispo(int passos) {
    if (passos <= 0) return;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(passos - 1);
}

// Função recursiva para movimentar a Torre (Direita)
void moverTorre(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar a Rainha (Esquerda)
void moverRainha(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função para movimentar o Cavalo (1 vez em L: 2 para cima, 1 para direita)
void moverCavalo() {
    printf("\nMovimentação do Cavalo:\n");

    int cima = 0, direita = 0;
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            cima++;
            if (cima == 1) {
                printf("Cima\n");
                continue;
            }
            printf("Cima\n");
        } else {
            direita++;
            if (direita > 1) break;
            printf("Direita\n");
        }
    }
}