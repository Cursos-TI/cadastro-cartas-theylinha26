#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, codigoCarta1[4], codigoCarta2[4], cidade1[30], cidade2[30];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;
  
  // Área para entrada de dados da cidade 1
    printf("\nVamos digitar os dados da Carta 1!\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o estado (letras de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (letra do estado+Número de 01 a 04): ");
    scanf(" %s", &codigoCarta1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km\u00B2: ");
    scanf("%f", &area1);

    printf("Digite o o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Área para exibição dos dados da cidade 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km\u00B2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos1);

// Área para entrada de dados da cidade 2
  
    printf("\n\nVamos digitar os dados da Carta 2!\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o estado (letras de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (letra do estado+Número de 01 a 04): ");
    scanf(" %s", &codigoCarta2);

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite a area em km\u00B2: ");
    scanf(" %f", &area2);

    printf("Digite o o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km\u00B2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos2);
  
return 0;
} 
