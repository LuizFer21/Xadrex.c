#include <stdio.h>

#define MOVIMENTOS 3  // número de casas que a peça pode se mover

// Função recursiva para movimentar a Torre
void moverTorreCima(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    moverTorreCima(passos - 1);
}

void moverTorreBaixo(int passos) {
    if (passos == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(passos - 1);
}

void moverTorreDireita(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreDireita(passos - 1);
}

void moverTorreEsquerda(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverTorreEsquerda(passos - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispoDiagonal(int vert, int horiz) {
    if (vert == 0 || horiz == 0) return;
    printf("Diagonal (Cima-Direita)\n");
    moverBispoDiagonal(vert - 1, horiz - 1);
}

// Loop aninhado para simular movimentação do Bispo
void bispoComLoops() {
    printf("\nMovimentos do Bispo com Loops:\n");
    for (int i = 0; i < MOVIMENTOS; i++) { // vertical
        for (int j = 0; j < MOVIMENTOS; j++) { // horizontal
            if (i == j) {
                printf("Diagonal (Cima-Direita)\n");
            }
        }
    }
}

// Função recursiva para a Rainha: combina torre e bispo
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha - Direita\n");
    moverRainha(passos - 1);
}

// Movimento do Cavalo com loops complexos
void moverCavalo() {
    printf("\nMovimentos do Cavalo (2 cima, 1 direita):\n");
    for (int i = 0; i < 3; i++) { // tentativas
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo move: 2 Cima e 1 Direita\n");
                break;
            } else {
                continue; // ignora outras combinações
            }
        }
    }
}

int main() {
    printf("Movimentos da Torre:\n");
    moverTorreCima(MOVIMENTOS);
    moverTorreBaixo(MOVIMENTOS);
    moverTorreDireita(MOVIMENTOS);
    moverTorreEsquerda(MOVIMENTOS);

    printf("\nMovimentos do Bispo (Recursivo):\n");
    moverBispoDiagonal(MOVIMENTOS, MOVIMENTOS);

    bispoComLoops();

    printf("\nMovimentos da Rainha:\n");
    moverRainha(MOVIMENTOS);

    moverCavalo();

    return 0;
}
