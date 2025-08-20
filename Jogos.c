#include <stdio.h>

#define TAM 10        // Tamanho do tabuleiro 10x10
#define NAVIO 3       // Valor que representa navio no tabuleiro
#define TAM_NAVIO 3   // Tamanho fixo dos navios (3 posições)

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }
}

// Função para imprimir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n===== TABULEIRO =====\n\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para verificar se o navio cabe e não sobrepõe outro
int podePosicionar(int tabuleiro[TAM][TAM], int linha, int coluna, char orientacao) {
    if (orientacao == 'H') {
        if (coluna + TAM_NAVIO > TAM) return 0; // passa do limite
        for (int j = 0; j < TAM_NAVIO; j++) {
            if (tabuleiro[linha][coluna + j] != 0) return 0; // já tem navio
        }
    } else if (orientacao == 'V') {
        if (linha + TAM_NAVIO > TAM) return 0; // passa do limite
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna] != 0) return 0; // já tem navio
        }
    }
    return 1; // pode posicionar
}

// Função para posicionar o navio no tabuleiro
void posicionarNavio(int tabuleiro[TAM][TAM], int linha, int coluna, char orientacao) {
    if (orientacao == 'H') {
        for (int j = 0; j < TAM_NAVIO; j++) {
            tabuleiro[linha][coluna + j] = NAVIO;
        }
    } else if (orientacao == 'V') {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha + i][coluna] = NAVIO;
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    int linha, coluna;
    char orientacao;

    // Inicializa o tabuleiro
    inicializarTabuleiro(tabuleiro);

    printf("=== BATALHA NAVAL - POSICIONAMENTO DE NAVIOS ===\n");

    // Primeiro navio
    printf("\nDigite a linha (0-9) e coluna (0-9) do navio horizontal (tamanho 3): ");
    scanf("%d %d", &linha, &coluna);
    orientacao = 'H';
    if (podePosicionar(tabuleiro, linha, coluna, orientacao)) {
        posicionarNavio(tabuleiro, linha, coluna, orientacao);
    } else {
        printf("❌ Não foi possível posicionar o navio horizontal!\n");
    }

    // Segundo navio
    printf("\nDigite a linha (0-9) e coluna (0-9) do navio vertical (tamanho 3): ");
    scanf("%d %d", &linha, &coluna);
    orientacao = 'V';
    if (podePosicionar(tabuleiro, linha, coluna, orientacao)) {
        posicionarNavio(tabuleiro, linha, coluna, orientacao);
    } else {
        printf("❌ Não foi possível posicionar o navio vertical!\n");
    }

    // Exibe o tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
