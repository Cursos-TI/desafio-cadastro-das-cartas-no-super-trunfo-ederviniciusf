#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Nível aventureiro


//Função que calcula a densidade populacional
float densidade_populacional(float area, float populacao){
    float densidade;

    densidade = populacao / area;

    return densidade;
}

//Função que calcula o PIB per Capita
float calcula_PIB(float pib, float populacao){
    float pib_perCapita = pib / populacao;

    return pib_perCapita;
}

int main() {

    // Declaração das variasveis  

    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char cidade1[50], cidade2[50];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    
   
    // Cadastro das Cartas:
   
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

    printf("Informe o PIB da cidade (em bilhões de reais: ");
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

    // Calculo de Densidade e PIB
    float dens_populacional1 = densidade_populacional(area1, (float) populacao1);
    float pib_perCapita1 = calcula_PIB((pib1*1000000000),(float) populacao1);
    
    float dens_populacional2 = densidade_populacional(area2,(float)populacao2);
    float pib_perCapita2 = calcula_PIB((pib2*1000000000),(float) populacao2);
    

    //Saída

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n",estado1,codigo_carta1,cidade1,populacao1,area1,pib1,pontos_turisticos1,dens_populacional1,pib_perCapita1);
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n",estado2,codigo_carta2,cidade2,populacao2,area2,pib2,pontos_turisticos2,dens_populacional2,pib_perCapita2);

    return 0;
}
