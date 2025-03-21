#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado_carta1, estado_carta2;
    int cidade_carta1, populacao_carta1, pontos_turisticos_carta1, cidade_carta2, populacao_carta2, pontos_turisticos_carta2;
    double area_carta1, pib_carta1, densidade_pop_carta1, pib_per_capita_carta1, area_carta2, pib_carta2, densidade_pop_carta2, pib_per_capita_carta2;

    printf("---------------DESAFIO SUPER TRUNFO - AVENTUREIRO---------------\n");
    printf("---------------Inicializando o cadastro da carta 1---------------\n");

    printf("Qual o estado? (Escolha uma letra entre A e H)\n");
    scanf(" %c", &estado_carta1);

    printf("Qual é o número da cidade? (Escolha um número entre 01 e 04)\n");
    scanf("%d", &cidade_carta1);

    printf("Qual é a populacao?\n");
    scanf("%d", &populacao_carta1);

    printf("Qual é a area em km²?\n");
    scanf("%lf", &area_carta1);

    printf("Qual é o PIB em bilhoes de reais?\n");
    scanf("%lf", &pib_carta1);

    printf("Qual a quantidade de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos_carta1);

    printf("---------------Inicializando o cadastro da carta 2---------------\n");

    printf("Qual o estado? (Escolha uma letra entre A e H)\n");
    scanf(" %c", &estado_carta2);

    printf("Qual é o número da cidade? (Escolha um número entre 01 e 04)\n");
    scanf("%d", &cidade_carta2);

    printf("Qual é a populacao?\n");
    scanf("%d", &populacao_carta2);

    printf("Qual é a area em km²?\n");
    scanf("%lf", &area_carta2);

    printf("Qual é o PIB em bilhoes de reais?\n");
    scanf("%lf", &pib_carta2);

    printf("Qual a quantidade de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos_carta2);

    // Calculando propriedades compostas:
    pib_per_capita_carta1 = (pib_carta1 * 1000000000) / populacao_carta1; // Convertendo PIB para reais
    pib_per_capita_carta2 = (pib_carta2 * 1000000000) / populacao_carta2; // Convertendo PIB para reais
    densidade_pop_carta1 = populacao_carta1 / area_carta1;
    densidade_pop_carta2 = populacao_carta2 / area_carta2;

    printf("---------------Exibindo os valores das cartas---------------\n");
    printf("Carta 1:\nEstado: %c\nCODIGO: %c%d\nPOPULACAO: %d\nAREA: %.2f km²\nPIB: %.2f bilhoes de reais\nQTD DE PONTOS TURISTICOS: %d\nDENSIDADE POPULACIONAL: %.2f hab/km²\nPIB PER CAPITA: %.2f reais\n",
           estado_carta1, estado_carta1, cidade_carta1, populacao_carta1, area_carta1, pib_carta1, pontos_turisticos_carta1, densidade_pop_carta1, pib_per_capita_carta1);

    printf("Carta 2:\nEstado: %c\nCODIGO: %c%d\nPOPULACAO: %d\nAREA: %.2f km²\nPIB: %.2f bilhoes de reais\nQTD DE PONTOS TURISTICOS: %d\nDENSIDADE POPULACIONAL: %.2f hab/km²\nPIB PER CAPITA: %.2f reais\n",
           estado_carta2, estado_carta2, cidade_carta2, populacao_carta2, area_carta2, pib_carta2, pontos_turisticos_carta2, densidade_pop_carta2, pib_per_capita_carta2);

    return 0;
}