#include <stdio.h>

void moverTorre(int casas, int direcao) {
    // Recursividade para movimentação da Torre
    if (casas <= 0) return;
    
    if (direcao == 1) {
        printf("Cima\n");
    } else if (direcao == 2) {
        printf("Baixo\n");
    } else if (direcao == 3) {
        printf("Esquerda\n");
    } else if (direcao == 4) {
        printf("Direita\n");
    }

    moverTorre(casas - 1, direcao); // Chamada recursiva
}

void moverBispo(int casas, int direcaoVertical, int direcaoHorizontal) {
    // Recursividade + loops aninhados para movimentação do Bispo
    if (casas <= 0) return;

    // Loop externo para movimento vertical (Cima/Baixo)
    for (int i = 0; i < casas; i++) {
        if (direcaoVertical == 1) {
            printf("Cima\n");
        } else if (direcaoVertical == 2) {
            printf("Baixo\n");
        }
        
        // Loop interno para movimento horizontal (Esquerda/Direita)
        for (int j = 0; j < casas; j++) {
            if (direcaoHorizontal == 3) {
                printf("Esquerda\n");
            } else if
