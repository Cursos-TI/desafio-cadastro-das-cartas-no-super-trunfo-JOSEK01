#include <stdio.h>

#define TAM 10        // tamanho do tabuleiro
#define TAM_NAVIO 3   // tamanho fixo dos navios
#define NAVIO 3       // valor que representa navio no tabuleiro

int main() {
    int tabuleiro[TAM][TAM]; // tabuleiro 10x10
    
    int i, j;
    int valido;

    // -------- Inicializar o tabuleiro com água (0) --------
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ===============================================
    // Navio 1 - Horizontal (linha 2, colunas 1 a 3)
    // ===============================================
    valido = 1;
    if (1 + TAM_NAVIO <= TAM) {
        for (j = 0; j < TAM_NAVIO; j++) {
            if (tabuleiro[2][1 + j] != 0) valido = 0;
        }
        if (valido) {
            for (j = 0; j < TAM_NAVIO; j++) {
                tabuleiro[2][1 + j] = NAVIO;
            }
        }
    }

    // ===============================================
    // Navio 2 - Vertical (coluna 6, linhas 4 a 6)
    // ===============================================
    valido = 1;
    if (4 + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[4 + i][6] != 0) valido = 0;
        }
        if (valido) {
            for (i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[4 + i][6] = NAVIO;
            }
        }
    }

    // ===============================================
    // Navio 3 - Diagonal ↘ (linha 0,coluna 0 até 2,2)
    // ===============================================
    valido = 1;
    if (0 + TAM_NAVIO <= TAM && 0 + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[0 + i][0 + i] != 0) valido = 0;
        }
        if (valido) {
            for (i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[0 + i][0 + i] = NAVIO;
            }
        }
    }

    // ===============================================
    // Navio 4 - Diagonal ↙ (linha 9,coluna 9 até 7,7)
    // ===============================================
    valido = 1;
    if (9 - (TAM_NAVIO - 1) >= 0 && 9 - (TAM_NAVIO - 1) >= 0) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[9 - i][9 - i] != 0) valido = 0;
        }
        if (valido) {
            for (i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[9 - i][9 - i] = NAVIO;
            }
        }
    }

    // -------- Mostrar o tabuleiro --------
    printf("\n===== TABULEIRO FINAL =====\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
