#include <stdio.h>

int main() {
    // Dados da cidade 1
    unsigned long int Populacao1;
    float area1, pib1;
    int pontos1;
    char pontoTuristico1[50];

    // Dados da cidade 2
    unsigned long int Populacao2;
    float area2, pib2;
    int pontos2;
    char pontoTuristico2[50];

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada - cidade 1
    printf("Digite a população1: ");
    scanf("%lu", &Populacao1);

    printf("Digite a área1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos1: ");
    scanf("%d", &pontos1);

    printf("Digite um ponto turístico1: ");
    scanf(" %[^\n]s", pontoTuristico1);

    // Entrada - cidade 2
    printf("\nDigite a população2: ");
    scanf("%lu", &Populacao2);

    printf("Digite a área2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos2: ");
    scanf("%d", &pontos2);

    printf("Digite um ponto turístico2: ");
    scanf(" %[^\n]s", pontoTuristico2);

    // Cálculos - carta 1
    densidade1 = Populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / Populacao1;
    superPoder1 = (float)Populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + (1.0f / densidade1);

    // Cálculos - carta 2
    densidade2 = Populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / Populacao2;
    superPoder2 = (float)Populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibir os dados
    printf("\n--- DADOS DA CIDADE 1 ---\n");
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Ponto turístico: %s\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- DADOS DA CIDADE 2 ---\n");
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Ponto turístico: %s\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    int vPop = Populacao1 > Populacao2;
    int vArea = area1 > area2;
    int vPIB = pib1 > pib2;
    int vPontos = pontos1 > pontos2;
    int vDensidade = densidade1 < densidade2; // MENOR vence!
    int vPIBpc = pibPerCapita1 > pibPerCapita2;
    int vSuperPoder = superPoder1 > superPoder2;

    // Exibição das comparações
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");
    printf("População: Carta 1 venceu (%d)\n", vPop);
    printf("Área: Carta 1 venceu (%d)\n", vArea);
    printf("PIB: Carta 1 venceu (%d)\n", vPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPIBpc);
    printf("Super Poder: Carta 1 venceu (%d)\n", vSuperPoder);

    return 0;
}
