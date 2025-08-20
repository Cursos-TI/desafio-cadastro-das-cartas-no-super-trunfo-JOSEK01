#include <stdio.h>

int main() {
    int TAM = 10;          // tamanho do tabuleiro
    int TAM_NAVIO = 3;     // tamanho fixo do navio
    int NAVIO = 3;         // valor que representa navio
    int tabuleiro[10][10]; // tabuleiro 10x10
    
    int linha, coluna;
    int i, j;
    int valido;

    // Inicializar o tabuleiro com 0 (água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("=== BATALHA NAVAL - POSICIONAMENTO DE NAVIOS ===\n");

    // -------- Navio horizontal --------
    while (1) {
        printf("\nDigite a linha (0-9) e coluna (0-9) do navio horizontal (tamanho 3): ");
        scanf("%d %d", &linha, &coluna);

        // Assume que é válido
        valido = 1;

        // Verifica se cabe
        if (coluna + TAM_NAVIO > TAM) {
            valido = 0;
        }

        // Verifica se não sobrepõe
        if (valido == 1) {
            for (j = 0; j < TAM_NAVIO; j++) {
                if (tabuleiro[linha][coluna + j] != 0) {
                    valido = 0;
                }
            }
        }

        // Se válido, posiciona
        if (valido == 1) {
            for (j = 0; j < TAM_NAVIO; j++) {
                tabuleiro[linha][coluna + j] = NAVIO;
            }
            break; // sai do while
        } else {
            printf("❌ Posicao invalida! Tente novamente.\n");
        }
    }

    // -------- Navio vertical --------
    while (1) {
        printf("\nDigite a linha (0-9) e coluna (0-9) do navio vertical (tamanho 3): ");
        scanf("%d %d", &linha, &coluna);

        valido = 1;

        // Verifica se cabe
        if (linha + TAM_NAVIO > TAM) {
            valido = 0;
        }

        // Verifica se não sobrepõe
        if (valido == 1) {
            for (i = 0; i < TAM_NAVIO; i++) {
                if (tabuleiro[linha + i][coluna] != 0) {
                    valido = 0;
                }
            }
        }

        // Se válido, posiciona
        if (valido == 1) {
            for (i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[linha + i][coluna] = NAVIO;
            }
            break;
        } else {
            printf("❌ Posicao invalida! Tente novamente.\n");
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


    }

    return 0;
}
