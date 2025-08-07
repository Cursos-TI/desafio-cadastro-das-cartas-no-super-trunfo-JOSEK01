#include <stdio.h>

int main() {
    // Dados da cidade 1
    int Populacao1;
    float area1;
    float pib1;
    char pontoturistico1[50];

    // Dados da cidade 2
    int Populacao2;
    float area2;
    float pib2;
    char pontoturistico2[50];

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados - cidade 1
    printf("Digite a população1: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área1 (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB1 (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite o ponto turístico1: \n");
    scanf(" %[^\n]s", pontoturistico1);

    // Entrada de dados - cidade 2
    printf("\nDigite a população2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área2 (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB2 (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite o ponto turístico2: \n");
    scanf(" %[^\n]s", pontoturistico2);

    // Cálculos
    densidade1 = Populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / Populacao1;

    densidade2 = Populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / Populacao2;

    // Saída formatada
    printf("\n--- DADOS DA CIDADE 1 ---\n");
    printf("População1: %d\n", Populacao1);
    printf("Área1: %.2f km²\n", area1);
    printf("PIB1: %.2f bilhões\n", pib1);
    printf("Ponto turístico1: %s\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- DADOS DA CIDADE 2 ---\n");
    printf("População2: %d\n", Populacao2);
    printf("Área2: %.2f km²\n", area2);
    printf("PIB2: %.2f bilhões\n", pib2);
    printf("Ponto turístico2: %s\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
