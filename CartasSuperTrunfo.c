#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;     // Torre: direita
    int casasBispo = 5;     // Bispo: cima + direita
    int casasRainha = 8;    // Rainha: esquerda

    // Quantidade de casas do movimento do Cavalo
    int casasBaixo = 2;     // duas casas para baixo
    int casasEsquerda = 1;  // uma casa para a esquerda

    int i; // variável de controle para loops

    // ==========================
    // Movimentação da Torre (for)
    // ==========================
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ==========================
    // Movimentação do Bispo (while)
    // ==========================
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ==========================
    // Movimentação da Rainha (do-while)
    // ==========================
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    // ==========================
    // Movimentação do Cavalo (for + while aninhados)
    // ==========================
    printf("\nMovimento do Cavalo:\n");
    for (i = 1; i <= casasBaixo; i++) { // Loop externo: descidas
        printf("Baixo\n");

        // No último movimento para baixo, fazer o movimento para a esquerda
        if (i == casasBaixo) {
            int j = 1; // controle do while
            while (j <= casasEsquerda) { // Loop interno
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
