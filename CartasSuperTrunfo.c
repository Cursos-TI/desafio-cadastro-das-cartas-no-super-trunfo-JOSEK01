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

    // Cálculos
    densidade1 = Populacao1 / area1;
    densidade2 = Populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / Populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / Populacao2;

    superPoder1 = (float)Populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)Populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibir dados
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

    // Menu interativo
    int atributo;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &atributo);

    printf("\n--- COMPARAÇÃO FINAL ---\n");

    switch (atributo) {
        case 1:
            printf("Atributo: População\n");
            printf("Cidade 1: %lu | Cidade 2: %lu\n", Populacao1, Populacao2);
            if (Populacao1 > Populacao2)
                printf("Resultado: Cidade 1 venceu!\n");
            else if (Populacao2 > Populacao1)
                printf("Resultado: Cidade 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Cidade 1: %.2f | Cidade 2: %.2f\n", area1, area2);
            if (area1 > area2)
                printf("Resultado: Cidade 1 venceu!\n");
            else if (area2 > area1)
                printf("Resultado: Cidade 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Cidade 1: %.2f | Cidade 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Resultado: Cidade 1 venceu!\n");
            else if (pib2 > pib1)
                printf("Resultado: Cidade 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Densidade Populacional (menor vence)\n");
            printf("Cidade 1: %.2f | Cidade 2: %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: Cidade 1 venceu!\n");
            else if (densidade2 < densidade1)
                printf("Resultado: Cidade 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: PIB per Capita\n");
            printf("Cidade 1: %.2f | Cidade 2: %.2f\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Cidade 1 venceu!\n");
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: Cidade 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("Atributo: Super Poder\n");
            printf("Cidade 1: %.2f | Cidade 2: %.2f\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Resultado: Cidade 1 venceu!\n");
            else if (superPoder2 > superPoder1)
                printf("Resultado: Cidade 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
