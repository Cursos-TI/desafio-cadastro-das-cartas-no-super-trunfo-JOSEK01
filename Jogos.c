#include <stdio.h>

#define TAM 10        // tamanho do tabuleiro
#define NAVIO 3       // valor que representa navio
#define HABILIDADE 5  // valor que representa habilidade
#define HABIL_TAM 5   // tamanho das matrizes de habilidade (5x5)

// ---------------- Criar matrizes de habilidades ---------------- //
void criarCone(int matriz[HABIL_TAM][HABIL_TAM]) {
    int i, j;
    for (i = 0; i < HABIL_TAM; i++) {
        for (j = 0; j < HABIL_TAM; j++) {
            // Cone: cresce para os lados conforme desce
            if (j >= (HABIL_TAM/2 - i) && j <= (HABIL_TAM/2 + i))
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

void criarCruz(int matriz[HABIL_TAM][HABIL_TAM]) {
    int i, j;
    for (i = 0; i < HABIL_TAM; i++) {
        for (j = 0; j < HABIL_TAM; j++) {
            // Cruz: linha central + coluna central
            if (i == HABIL_TAM/2 || j == HABIL_TAM/2)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

void criarOctaedro(int matriz[HABIL_TAM][HABIL_TAM]) {
    int i, j, centro = HABIL_TAM/2;
    for (i = 0; i < HABIL_TAM; i++) {
        for (j = 0; j < HABIL_TAM; j++) {
            // Octaedro = losango (distância de Manhattan até o centro <= raio)
            if (abs(i-centro) + abs(j-centro) <= centro)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// ---------------- Aplicar habilidades no tabuleiro ---------------- //
void aplicarHabilidade(int tab[TAM][TAM], int matriz[HABIL_TAM][HABIL_TAM], int origemLinha, int origemColuna) {
    int i, j;
    int desloc = HABIL_TAM/2; // para centralizar no ponto de origem
    
    for (i = 0; i < HABIL_TAM; i++) {
        for (j = 0; j < HABIL_TAM; j++) {
            if (matriz[i][j] == 1) {
                int linha = origemLinha + (i - desloc);
                int coluna = origemColuna + (j - desloc);
                
                // verificar limites
                if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM) {
                    if (tab[linha][coluna] == 0) // não sobrescreve navio
                        tab[linha][coluna] = HABILIDADE;
                }
            }
        }
    }
}

// ---------------- Mostrar tabuleiro ---------------- //
void mostrarTabuleiro(int tab[TAM][TAM]) {
    int i, j;
    printf("\n===== TABULEIRO =====\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (tab[i][j] == 0) printf(". ");       // água
            else if (tab[i][j] == NAVIO) printf("N "); // navio
            else if (tab[i][j] == HABILIDADE) printf("* "); // habilidade
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // Inicializa tabuleiro vazio
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Exemplo de navios fixos
    tabuleiro[2][2] = NAVIO;
    tabuleiro[2][3] = NAVIO;
    tabuleiro[2][4] = NAVIO;
    tabuleiro[5][7] = NAVIO;
    tabuleiro[6][7] = NAVIO;
    tabuleiro[7][7] = NAVIO;

    // Matrizes de habilidades
    int cone[HABIL_TAM][HABIL_TAM];
    int cruz[HABIL_TAM][HABIL_TAM];
    int octaedro[HABIL_TAM][HABIL_TAM];

    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Aplicar habilidades em pontos fixos
    aplicarHabilidade(tabuleiro, cone, 1, 1);        // cone no canto superior
    aplicarHabilidade(tabuleiro, cruz, 5, 5);       // cruz no meio
    aplicarHabilidade(tabuleiro, octaedro, 8, 3);   // octaedro mais embaixo

    // Mostrar tabuleiro final
    mostrarTabuleiro(tabuleiro);

    return 0;
}
