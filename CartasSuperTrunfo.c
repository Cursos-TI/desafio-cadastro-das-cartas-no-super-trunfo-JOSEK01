#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int Populacao1;
    float area1;
    float pib1;
    char pontoturistico1[50];

    printf("digite a população1: \n");
    scanf("%d", &Populacao1);

    printf("digite a area1: \n");
    scanf("%f", &area1);

    printf("digite pib1: \n");
    scanf("%f", &pib1);

    printf("digite ponto turistico1: \n");
    scanf("%d", &pontoturistico1 );

    printf("população1: %d \n - area1: %f\n", Populacao1, area1);
    printf("pib1: %f\n - pontoturistico1: %s\n", pib1, pontoturistico1);

    

        int Populacao;
        float area;
        float pib;
        char pontoturistico[50];

    printf("digite a população: \n");
    scanf("%d", &Populacao);

    printf("digite a area: \n");
    scanf("%f", &area);

    printf("digite pib: \n");
    scanf("%f", &pib);

    printf("digite ponto turistico: \n");
    scanf("%d", &pontoturistico);

    printf("população: %d \n - area: %f\n", populacao);
    printf("pib: %f\n - pontoturistico: %s\n", pib, pontoturistico);




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}