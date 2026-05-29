
#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1, superpoder1;

    // Carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2, superpoder2;

    // Densidade populacional e PIB per capita
    float densidade1, pib_per_capita1, densidade_inversa1;
    float densidade2, pib_per_capita2, densidade_inversa2;

    // Entrada de dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos1);


    // Entrada de dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos2);

    // Cálculo da densidade populacional e PIB per capita
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    densidade_inversa1 = area1 / populacao1;
    densidade_inversa2 = area2 / populacao2;

    // Exibição dos dados - Carta 1
    printf("\n=== Carta %c%s ===\n", estado1, codigo1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais/hab\n", pib_per_capita1);
    printf("Superpoder: %.2f\n", superpoder1 = (pib_per_capita1 + area1 + pib1 + pontos1 + densidade_inversa1));

    // Exibição dos dados - Carta 2
    printf("\n=== Carta %c%s ===\n", estado2, codigo2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais/hab\n", pib_per_capita2);
    printf("Superpoder: %.2f\n", superpoder2 = (pib_per_capita2 + area2 + pib2 + pontos2 + densidade_inversa2));

    // Comparação das cartas
    printf("\n=== Comparação das Cartas ===\n");
    if (populacao1 > populacao2) {
        printf("Carta %c%s é mais populosa que Carta %c%s\n", estado1, codigo1, estado2, codigo2);
    } else if (populacao2 > populacao1) {
        printf("Carta %c%s é mais populosa que Carta %c%s\n", estado2, codigo2, estado1, codigo1);
    } else {
        printf("As cartas %c%s e %c%s têm o mesmo número de habitantes\n", estado1, codigo1, estado2, codigo2);
    }
    if (area1 > area2)
    {
        printf("Carta %c%s tem uma área maior que Carta %c%s\n", estado1, codigo1, estado2, codigo2);
    }
    else if (area2 > area1)
    {
        printf("Carta %c%s tem uma área maior que Carta %c%s\n", estado2, codigo2, estado1, codigo1);
    }
    else {
        printf("As cartas %c%s e %c%s têm a mesma área\n", estado1, codigo1, estado2, codigo2);
    }
    if (pib1 > pib2)
    {
        printf("Carta %c%s tem um PIB maior que Carta %c%s\n", estado1, codigo1, estado2, codigo2);
    }
    else if (pib2 > pib1)
    {
        printf("Carta %c%s tem um PIB maior que Carta %c%s\n", estado2, codigo2, estado1, codigo1);
    }
    else {
        printf("As cartas %c%s e %c%s têm o mesmo PIB\n", estado1, codigo1, estado2, codigo2);
    }
    if (pontos1 > pontos2)
    {
        printf("Carta %c%s tem mais pontos turísticos que Carta %c%s\n", estado1, codigo1, estado2, codigo2);
    }
    else if (pontos2 > pontos1)
    {
        printf("Carta %c%s tem mais pontos turísticos que Carta %c%s\n", estado2, codigo2, estado1, codigo1);
    }
    else {
        printf("As cartas %c%s e %c%s têm o mesmo número de pontos turísticos\n", estado1, codigo1, estado2, codigo2);
    }

    if (densidade1 > densidade2)
    {
        printf("Carta %c%s tem uma densidade populacional maior que Carta %c%s\n", estado1, codigo1, estado2, codigo2);
    }
    else if (densidade2 > densidade1)
    {
        printf("Carta %c%s tem uma densidade populacional maior que Carta %c%s\n", estado2, codigo2, estado1, codigo1);
    }
    else {
        printf("As cartas %c%s e %c%s têm a mesma densidade populacional\n", estado1, codigo1, estado2, codigo2);
    }
     if (pib_per_capita1 > pib_per_capita2)
    {
        printf("Carta %c%s tem um PIB per capita maior que Carta %c%s\n", estado1, codigo1, estado2, codigo2);
    }
    else if (pib_per_capita2 > pib_per_capita1)
    {
        printf("Carta %c%s tem um PIB per capita maior que Carta %c%s\n", estado2, codigo2, estado1, codigo1);
    }
    else {
        printf("As cartas %c%s e %c%s têm o mesmo PIB per capita\n", estado1, codigo1, estado2, codigo2);
    }
    if (superpoder1 > superpoder2)
    {
        printf("Carta %c%s é mais poderosa que Carta %c%s\n", estado1, codigo1, estado2, codigo2);
    }
    else if (superpoder2 > superpoder1)
    {
        printf("Carta %c%s é mais poderosa que Carta %c%s\n", estado2, codigo2, estado1, codigo1);
    }
    else {
        printf("As cartas %c%s e %c%s têm o mesmo poder\n", estado1, codigo1, estado2, codigo2);
    }
    
    
    return 0;
}
