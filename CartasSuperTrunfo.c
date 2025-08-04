#include <stdio.h>

int main(){
    
    //Variáveis para carta 1
   
    char estado_1; // Variável para representar um estado com letra de A a H.
    char codigo_1[30]; // Variável para o código da carta
    char cidade_1[30];// Variável para o nome da cidade.
    int populacao_1;// Variável para o número de habitantes
    float area_1;//Variável da área em km²
    float pib_1;// Variável para o produto interno bruto da cidade
    int numero_1;// Variável para a quantidade de pontos turísticos

    // Variáveis para carta 2

    char estado_2; 
    char codigo_2[30]; 
    char cidade_2[30];
    int populacao_2;
    float area_2;
    float pib_2;
    int numero_2;

    //Dados da carta 1

    printf("Carta 1:\n");
   
    //Pedindo ao usuário que coloque a letra do Estado sendo de "A" a "H"
    printf("Estado: ");
    scanf("%s", &estado_1);
    
    //Pedindo ao usuário que coloque o código da carta 
    printf("Código: ");
    scanf("%s", &codigo_1);
    
    //Pedindo ao usuário que coloque o nome da cidade
    printf("Nome da Cidade: ");
    scanf("%s", &cidade_1);
    
    //Pedindo ao usuário que coloque o número da população
    printf("População: ");
    scanf("%d", &populacao_1);
    
    //Pedindo ao usuário que coloque a área em km²
    printf("Área: ");
    scanf("%f", &area_1);
    
    //Pedindo ao usuário que coloque o produto interno bruto da cidade
    printf("PIB: ");
    scanf("%f", &pib_1);
   
    //Pedindo ao usuário que coloque a quantidade de pontos turísticos 
    printf("Número de Pontos Turísticos:\n\n ");
    scanf("%d", &numero_1);

    //Dados da carta 2, com os mesmos requisitos da carta 1
   
    printf("Carta 2: ");
    printf("Estado:\n "); 
    scanf("%s", &estado_2);

    printf("Código: ");
    scanf("%s", &codigo_2);
    
    printf("Nome da Cidade: ");
    scanf("%s", &cidade_2);

    printf("População: ");
    scanf("%d", &populacao_2);
    printf("Área: ");
    scanf("%f", &area_2);

    printf("PIB: ");
    scanf("%f", &pib_2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_2);

    return 0;

}
