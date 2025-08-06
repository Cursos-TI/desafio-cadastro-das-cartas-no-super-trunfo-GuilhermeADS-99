#include <stdio.h>

int main(){
    
    // Variáveis para carta 1
    
    char estado_1; //Variável para caracteres
    char codigo_1[5]; // variável para string
    char cidade_1[20]; // variável para string
    float populacao_1, area_1, pib_1; // Variável para pontos flutuantes
    int pontos_1; // Variável para inteiros

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
    
    // Variáveis para carta 2
   
    char estado_2;
    char codigo_2[5];
    char cidade_2[20];
    float populacao_2, area_2, pib_2;
    int pontos_2;
    
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
   
    return 0;

}