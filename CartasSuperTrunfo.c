#include <stdio.h>

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
    char estado;
    int cidade, populacao, pontos_turisticos;
    float area, pib;

    printf("---------------DESAFIO SUPER TRUNFO - NOVATO---------------\n");
    printf("Inicializando o cadastro de cartas...\n");

    printf("Qual o estado? (Escolha uma letra entre A e H)\n");
    scanf(" %c", &estado);

    printf("Qual é a cidade? (Escolha um número entre 01 e 04)\n");
    scanf("%d", &cidade);

    printf("Qual é a população?\n");
    scanf("%d", &populacao);

    printf("Qual é a area?\n");
    scanf("%f", &area);

    printf("Qual é o PIB?\n");
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turisticos?\n");
    scanf("%d", &pontos_turisticos);

    printf("---------------Exibindo os valores das cartas---------------\n");
    printf("CARTA: %c%d\nPOPULACAO: %d\nAREA: %.2f\nPIB: %.2f\nQTD DE PONTOS TURISTICOS: %d", estado, cidade, populacao, area, pib, pontos_turisticos);

    return 0;
}
