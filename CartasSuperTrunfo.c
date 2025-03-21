#include <stdio.h>

int main() {

    // variáreis para os dados da carta número 1
    
    char estado1;
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    // variáreis para os dados da carta número 2
    
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    // inserção dos dados da primeira carta
    
    printf("Cadastre a primeira carta:\n");
    
    printf("Digite uma letra:\n");
    scanf(" %c", &letra1);
    
    printf("Digite um código (a letra digitada anteriormente + dois números):\n");
    scanf("%s", codigo1);
    
    printf("Digite uma cidade:\n");
    scanf("%s", cidade1);
    
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &turisticos1);

    printf("--------------------------\n");
    printf("Primeira carta cadastrada.\n");
    printf("--------------------------\n");

    // inserção dos dados da segunda carta
    
    printf("Cadastre a segunda carta:\n");
    
    printf("Digite uma letra:\n");
    scanf(" %c", &letra2);
    
    printf("Digite um código (a letra digitada anteriormente + dois números):\n");
    scanf("%s", codigo2);
    
    printf("Digite uma cidade:\n");
    scanf("%s", cidade2);
    
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &turisticos2);
    
    printf("--------------------------\n");
    printf("Cartas cadastradas:\n");
    printf("--------------------------\n");

    // exibição dos dados de ambas as cartas no terminal
    
    printf(" Carta 1:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d habitantes\n Área: %.2fkm²\n PIB: R$%.2f bi\n Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turisticos1);
    
    printf("--------------------------\n");
    
    printf(" Carta 2:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d habitantes\n Área: %.2fkm²\n PIB: R$%.2f bi\n Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, turisticos2);
    
    return 0;
}
