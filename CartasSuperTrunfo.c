#include <stdio.h>

int main() {
    
    //variáveis para os dados da primeira carta

    char letra1;
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    float densidade1; // adicionada variável para o cálculo da densidade populacional da 1ª cidade
    float capita1; // adicionada variável para o cálculo do PIB per capita da 1ª cidade

    //variáveis para os dados da segunda carta

    char letra2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    float densidade2; // adicionada variável para o cálculo da densidade populacional da 2ª cidade
    float capita2; // adicionada variável para o cálculo do PIB per capita da 2ª cidade
    
    printf("---Cadastre a primeira carta---\n");

    // início do cadastro da primeira carta
    
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

    densidade1 = populacao1 / area1; // cálculo da densidade populacional da cidade n° 1
    capita1 = pib1 * 1000000000 / populacao1;

    /* cálculo do PIB per capita da cidade n° 1;
    PIB multiplicado por 1 bilhão para que o valor do PIB seja inserido na forma abreviada (123.456 bi).
    */

    printf("--------------------------\n");
    printf("Primeira carta cadastrada.\n");
    printf("--------------------------\n");

    // fim do cadastro da primeira carta

    // início do cadastro da segunda carta
    
    printf("---Cadastre a segunda carta---\n");
    
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

    densidade2 = populacao2 / area2; // cálculo da densidade populacional da cidade n° 1
    capita2 = pib2 * 1000000000 / populacao2;

    /* cálculo do PIB per capita da cidade n° 1;
    PIB multiplicado por 1 bilhão para que o valor do PIB seja inserido na forma abreviada (123.456 bi).
    */
    
    printf("--------------------------\n");
    printf("Cartas cadastradas:\n");
    printf("--------------------------\n");
    
    printf(" Carta 1:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d habitantes\n Área: %.2fkm²\n PIB: R$ %.2f bi\n Pontos Turísticos: %d\n Densidade populacional: %.2f hab./km²\n PIB per capita: R$ %.2f\n", letra1, codigo1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, capita1);
    
    printf("--------------------------\n");
    
    printf(" Carta 2:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d habitantes\n Área: %.2fkm²\n PIB: R$ %.2f bi\n Pontos Turísticos: %d\n Densidade populacional: %.2f hab./km²\n PIB per capita: R$ %.2f\n", letra2, codigo2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, capita2);
    
    return 0;
}
