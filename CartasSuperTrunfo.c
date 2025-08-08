#include <stdio.h>

int main(){
    
    // Variáveis para carta 1
    
    char estado_1; //Variável para caracteres
    char codigo_1[5]; // variável para string
    char cidade_1[20]; // variável para string
    float populacao_1, area_1, pib_1, densidade_1, percapita_1, superPoder_1; // Variável para pontos flutuantes
    int pontos_1; // Variável para inteiros
    int soma_1;
    
    //Dados da carta 1
    
    printf("Carta 1:\n");

    printf("Estado: ");
    scanf("%c", &estado_1);
    
    fflush(stdin); //Função para remover o buffer causado pelo scanf
    
    printf("Código: ");
    scanf("%s", codigo_1);
    
    fflush(stdin);

    printf("Nome da cidade: ");
    scanf("%s", cidade_1);
    
    fflush(stdin);

    printf("População: ");
    scanf("%f", &populacao_1);
    
    fflush(stdin);
    
    printf("Área: ");
    scanf("%f", &area_1);
    
    fflush(stdin);
    
    printf("PIB: ");
    scanf("%f", &pib_1);
    
    fflush(stdin);
    
    printf("Número de Pontos turísticos: ");
    scanf("%d", &pontos_1);
    
    fflush(stdin);

    densidade_1 = populacao_1 / area_1;
    percapita_1 = pib_1 / populacao_1;
    
    printf("Densidade populacional: %.15f\n", densidade_1);
    printf("PIB per capita: %.15f\n", percapita_1);

    fflush(stdin);

    soma_1 = populacao_1 + area_1 + pib_1 + percapita_1 + pontos_1 + (densidade_1 / 1);

    printf("Super poder: %.21f\n", soma_1);

    fflush(stdin);

    // Variáveis para carta 2
    
    char estado_2;
    char codigo_2[5];
    char cidade_2[20];
    float populacao_2, area_2, pib_2, densidade_2, percapita_2, superPoder_2;
    int pontos_2;
    int soma_2;
     
    //Dados da carta 2
   
    printf("\n\nCarta 2:\n");

    printf("Estado: ");
    scanf("%c", &estado_2);
    
    fflush(stdin);
    
    printf("Código: ");
    scanf("%s", codigo_2);
    
    fflush(stdin);

    printf("Nome da cidade: ");
    scanf("%s", cidade_2);
    
    fflush(stdin);

    printf("População: ");
    scanf("%f", &populacao_2);
    
    fflush(stdin);
    
    printf("Área: ");
    scanf("%f", &area_2);
    
    fflush(stdin);
    
    printf("PIB: ");
    scanf("%f", &pib_2);
    
    fflush(stdin);
    
    printf("Número de Pontos turísticos: ");
    scanf("%d", &pontos_2);
    
    fflush(stdin);

    densidade_2 = populacao_2 / area_2;
    percapita_2 = pib_2 / populacao_2;
    
    printf("Densidade populacional: %.15f\n", densidade_2);
    printf("PIB per capita: %.15f\n", percapita_2);

    fflush(stdin);

    soma_2 = populacao_2 + area_2 + pib_2 + percapita_2 + pontos_2 + (densidade_2 / 1);

    printf("Super poder: %.21f\n", soma_2);

    fflush(stdin);

    printf("\n\n***Comparação de Cartas***\n\n");

    printf("População: %d\n", populacao_1 > populacao_2);
    printf("Área: %d\n", area_1 > area_2);
    printf("PIB: %d\n", area_1 > area_2);
    printf("Pontos turísticos: %d\n", pontos_1 > pontos_2);
    printf("Densidade Populacional: %d\n", densidade_1 > densidade_2);
    printf("PIB per capita: %d\n", percapita_1 > percapita_2);
    printf("Super poder: %d\n", superPoder_1 > superPoder_2);

    fflush(stdin);

    return 0;

}