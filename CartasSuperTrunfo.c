#include <stdio.h>

// ==========================
// Funções Recursivas
// ==========================

// Torre: linha reta horizontal (Direita)
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha: linha reta horizontal (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo: diagonal (Cima, Direita) com loops aninhados
void moverBispo(int casasVertical, int casasHorizontal) {
    if (casasVertical == 0) return; // condição de parada

    // Loop interno: horizontal
    for (int h = 0; h < casasHorizontal; h++) {
        printf("Cima, Direita\n");
    }

    // Chamada recursiva para o próximo passo vertical
    moverBispo(casasVertical - 1, casasHorizontal);
}

// ==========================
// Função Principal
// ==========================
int main() {
    // Definindo número de casas para recursão
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Definindo movimento do Cavalo (duas casas para cima, uma para direita)
    int casasCavaloVertical = 2;
    int casasCavaloHorizontal = 1;

    // ==========================
    // Movimentação da Torre
    // ==========================
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ==========================
    // Movimentação do Bispo
    // ==========================
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, 1); // 1 casa horizontal por passo vertical

    // ==========================
    // Movimentação da Rainha
    // ==========================
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ==========================
    // Movimentação do Cavalo (loops complexos)
    // ==========================
    printf("\nMovimento do Cavalo:\n");
    int v = 0; // controle vertical
    while (v < casasCavaloVertical) {
        printf("Cima\n");
        v++;

        int h = 0; // controle horizontal dentro do loop vertical
        while (v == casasCavaloVertical) { // só na última iteração vertical
            if (h < casasCavaloHorizontal) {
                printf("Direita\n");
                h++;
                continue; // garante que o loop continue caso haja mais horizontais
            }
            break; // sai do loop interno quando completar o movimento horizontal
        }
    }

    return 0;
}
