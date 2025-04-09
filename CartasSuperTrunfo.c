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

//Função que calcula o Super Poder
float calcula_SuperPoder(unsigned long int populacao, float area, float pib, int pontos_turisticos, float pib_perCapita, float densidade_populacional){
    float super_poder;
    super_poder = (float) populacao + area + pib + pontos_turisticos + pib_perCapita + (1 / densidade_populacional);
    return super_poder;
}

int main() {

    // Declaração das variasveis  

    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
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

    //calulo de superpoder
    float super_poder1 = calcula_SuperPoder(populacao1, area1, pib1, pontos_turisticos1, pib_perCapita1, dens_populacional1);
    float super_poder2 = calcula_SuperPoder(populacao2, area2, pib2, pontos_turisticos2, pib_perCapita2, dens_populacional2);
    

    //Saída

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n",estado1,codigo_carta1,cidade1,populacao1,area1,pib1,pontos_turisticos1,dens_populacional1,pib_perCapita1);
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n",estado2,codigo_carta2,cidade2,populacao2,area2,pib2,pontos_turisticos2,dens_populacional2,pib_perCapita2);

    printf("\n-------------------------------------\n");

    //Código para comparação das duas cartas
    printf("Comparação de Cartas:\n");
    
    if (populacao1 > populacao2)
    {
        printf("População: Carta 1  venceu (1) \n");
    }else if (populacao1 == populacao2)
    {
        printf("População: Empatou\n");
    }else{
        printf("População: Carta 2 venceu (0)\n");
    }

    if (area1 > area2)
    {
        printf("Área: Carta 1  venceu (1) \n");
    }else if (area1 == area2)
    {
        printf("Área: Empatou\n");
    }else{
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2)
    {
        printf("PIB: Carta 1  venceu (1) \n");
    }else if (pib1 == pib2)
    {
        printf("PIB: Empatou\n");
    }else{
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2)
    {
        printf("Pontos Turísticos: Carta 1  venceu (1) \n");
    }else if (pontos_turisticos1 == pontos_turisticos2)
    {
        printf("Pontos Turísticos: Empatou\n");
    }else{
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (dens_populacional1 > dens_populacional2)
    {
        printf("Densidade Populacional: Carta 2  venceu (0) \n");
    }else if (dens_populacional1 == dens_populacional2)
    {
        printf("Densidade Populacional: Empatou\n");
    }else{
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    }

     if (pib_perCapita1 > pib_perCapita2)
    {
        printf("PIB per Capita: Carta 1  venceu (1) \n");
    }else if (pib_perCapita1 == pib_perCapita2)
    {
        printf("PIB per Capita: Empatou\n");
    }else{
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }


    return 0;
}
