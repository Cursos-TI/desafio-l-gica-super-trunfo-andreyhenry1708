#include <stdio.h>

int main() {

    // Carta 1 //
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2 //
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro Carta 1 //
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculando densidade e PIB per capita para a Carta 1 //
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // Calculando super poder para a Carta 1 //
    superPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1));

    // Cadastro Carta 2 //
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando densidade e PIB per capita para a Carta 2 //
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Calculando super poder para a Carta 2 //
    superPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2));

    //Exibição das cartas//
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais/habitante\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais/habitante\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

        // Comparação avançada das cartas //
    
    int opcao1, opcao2;
    
    float valor1Carta1 = 0;
    float valor1Carta2 = 0;
    float valor2Carta1 = 0;
    float valor2Carta2 = 0;
    
    float somaCarta1;
    float somaCarta2;
    
    char atributo1[40];
    char atributo2[40];
    
    printf("\n=== SUPER TRUNFO - COMPARAÇÃO AVANÇADA ===\n");
    
    // Primeiro atributo
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);
    
    // Verifica a primeira opção
    switch (opcao1) {
    
        case 1:
            printf("Primeiro atributo escolhido: População\n");
            break;
    
        case 2:
            printf("Primeiro atributo escolhido: Área\n");
            break;
    
        case 3:
            printf("Primeiro atributo escolhido: PIB\n");
            break;
    
        case 4:
            printf("Primeiro atributo escolhido: Pontos Turísticos\n");
            break;
    
        case 5:
            printf("Primeiro atributo escolhido: Densidade Demográfica\n");
            break;
    
        default:
            printf("Opção inválida!\n");
            return 1;
    }
    
    // Segundo atributo - menu dinâmico
    printf("\nEscolha o segundo atributo:\n");
    
    if (opcao1 != 1) {
        printf("1 - População\n");
    }
    
    if (opcao1 != 2) {
        printf("2 - Área\n");
    }
    
    if (opcao1 != 3) {
        printf("3 - PIB\n");
    }
    
    if (opcao1 != 4) {
        printf("4 - Número de Pontos Turísticos\n");
    }
    
    if (opcao1 != 5) {
        printf("5 - Densidade Demográfica\n");
    }
    
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);
    
    // Impede escolher o mesmo atributo
    if (opcao1 == opcao2) {
        printf("Erro: você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }
    
    // Primeiro atributo
    switch (opcao1) {
    
        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            sprintf(atributo1, "População");
            break;
    
        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            sprintf(atributo1, "Área");
            break;
    
        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            sprintf(atributo1, "PIB");
            break;
    
        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            sprintf(atributo1, "Pontos Turísticos");
            break;
    
        case 5:
            // Como menor densidade vence,
            // usamos o inverso para a soma.
            valor1Carta1 = 1.0 / densidade1;
            valor1Carta2 = 1.0 / densidade2;
            sprintf(atributo1, "Densidade Demográfica");
            break;
    
        default:
            printf("Opção inválida!\n");
            return 1;
    }
    
    // Segundo atributo
    switch (opcao2) {
    
        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            sprintf(atributo2, "População");
            break;
    
        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            sprintf(atributo2, "Área");
            break;
    
        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            sprintf(atributo2, "PIB");
            break;
    
        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            sprintf(atributo2, "Pontos Turísticos");
            break;
    
        case 5:
            valor2Carta1 = 1.0 / densidade1;
            valor2Carta2 = 1.0 / densidade2;
            sprintf(atributo2, "Densidade Demográfica");
            break;
    
        default:
            printf("Opção inválida!\n");
            return 1;
    }
    
    // Soma dos atributos
    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;
    
    // Exibição do resultado
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    
    printf("\nCarta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);
    
    printf("\nAtributos escolhidos:\n");
    printf("1º atributo: %s\n", atributo1);
    printf("2º atributo: %s\n", atributo2);
    
    // Exibição do primeiro atributo
    printf("\n=== %s ===\n", atributo1);
    
    switch (opcao1) {
    
        case 1:
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            break;
    
        case 2:
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            break;
    
        case 3:
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            break;
    
        case 4:
            printf("%s: %d pontos turísticos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontosTuristicos2);
            break;
    
        case 5:
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            break;
    }
    
    // Exibição do segundo atributo
    printf("\n=== %s ===\n", atributo2);
    
    switch (opcao2) {
    
        case 1:
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            break;
    
        case 2:
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            break;
    
        case 3:
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            break;
    
        case 4:
            printf("%s: %d pontos turísticos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontosTuristicos2);
            break;
    
        case 5:
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            break;
    }
    
    // Soma
    printf("\n=== SOMA DOS ATRIBUTOS ===\n");
    printf("%s: %.2f\n", cidade1, somaCarta1);
    printf("%s: %.2f\n", cidade2, somaCarta2);
    
    // Resultado final usando operador ternário
    printf("\n=== RESULTADO FINAL ===\n");
    
    if (somaCarta1 == somaCarta2) {
        printf("Empate!\n");
    } else {
    
        printf("Vencedor: %s\n",
               somaCarta1 > somaCarta2 ? cidade1 : cidade2);
    }

    return 0;
}
