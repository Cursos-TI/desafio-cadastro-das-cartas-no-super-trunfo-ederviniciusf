#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char cidade1[50], cidade2[50];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("Digite o estado da carta 1: ");
    scanf(" %c",&estado1);

    printf("Digite o código da carta 1: ");
    scanf(" ");
    fgets(codigo_carta1, sizeof(codigo_carta1), stdin);
    codigo_carta1[strcspn(codigo_carta1, "\n")] = 0;

    printf("Digite o nome da cidade 1: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a população aproximada: ");
    scanf("%d",&populacao1);

    printf("Digite a area em m2 da cidade: ");
    scanf("%f",&area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d",&pontos_turisticos1);

    printf("\n-------------------------------------\n");

    printf("Digite o estado da carta 2: ");
    scanf(" %c",&estado2);

    printf("Digite o código da carta 1: ");
    scanf(" ");
    fgets(codigo_carta2, sizeof(codigo_carta2), stdin);
    codigo_carta2[strcspn(codigo_carta2, "\n")] = 0;

    printf("Digite o nome da cidade 1: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população aproximada: ");
    scanf("%d",&populacao2);

    printf("Digite a area em m2 da cidade: ");
    scanf("%f",&area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d",&pontos_turisticos2);

    printf("\n-------------------------------------\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de pontos Turísticos: %d\n\n",estado1,codigo_carta1,cidade1,populacao1,area1,pib1,pontos_turisticos1 );
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de pontos Turísticos: %d\n\n",estado2,codigo_carta2,cidade2,populacao2,area2,pib2,pontos_turisticos2 );


    return 0;
}
