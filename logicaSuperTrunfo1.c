#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[] = "SP";
    char codigo1[] = "001";
    char nome1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.2e9;
    int pontos_turisticos1 = 200;
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // Carta 2
    char estado2[] = "RJ";
    char codigo2[] = "002";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1182.3;
    float pib2 = 635.1e9;
    int pontos_turisticos2 = 150;
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibir os dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n\n", pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n\n", pib_per_capita2);

    // Comparar as cartas com base em um atributo (População neste exemplo)
    char atributo = 'P'; // Pode ser alterado para 'A', 'I', 'D' ou 'B'

    if (atributo == 'P') { // Comparar População
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d\n", nome1, populacao1);
        printf("Carta 2 - %s: %d\n", nome2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo == 'A') { // Comparar Área
        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f\n", nome1, area1);
        printf("Carta 2 - %s: %.2f\n", nome2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo == 'I') { // Comparar PIB
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f\n", nome1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo == 'D') { // Comparar Densidade Populacional (menor vence)
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s: %.2f\n", nome1, densidade_populacional1);
        printf("Carta 2 - %s: %.2f\n", nome2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (densidade_populacional2 < densidade_populacional1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (atributo == 'B') { // Comparar PIB per capita
        printf("Comparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s: %.2f\n", nome1, pib_per_capita1);
        printf("Carta 2 - %s: %.2f\n", nome2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}
