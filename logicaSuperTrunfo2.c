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

    // Menu interativo
    int opcao;
    do {
        printf("\nEscolha o atributo para comparar as cartas:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade Populacional\n");
        printf("5. PIB per capita\n");
        printf("6. Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: { // Comparar População
                printf("\nComparação de cartas (Atributo: População):\n");
                printf("Carta 1 - %s: %d\n", nome1, populacao1);
                printf("Carta 2 - %s: %d\n", nome2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                } else if (populacao2 > populacao1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }

            case 2: { // Comparar Área
                printf("\nComparação de cartas (Atributo: Área):\n");
                printf("Carta 1 - %s: %.2f km²\n", nome1, area1);
                printf("Carta 2 - %s: %.2f km²\n", nome2, area2);
                if (area1 > area2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                } else if (area2 > area1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }

            case 3: { // Comparar PIB
                printf("\nComparação de cartas (Atributo: PIB):\n");
                printf("Carta 1 - %s: %.2f\n", nome1, pib1);
                printf("Carta 2 - %s: %.2f\n", nome2, pib2);
                if (pib1 > pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                } else if (pib2 > pib1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }

            case 4: { // Comparar Densidade Populacional (menor vence)
                printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
                printf("Carta 1 - %s: %.2f habitantes/km²\n", nome1, densidade_populacional1);
                printf("Carta 2 - %s: %.2f habitantes/km²\n", nome2, densidade_populacional2);
                if (densidade_populacional1 < densidade_populacional2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                } else if (densidade_populacional2 < densidade_populacional1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }

            case 5: { // Comparar PIB per capita
                printf("\nComparação de cartas (Atributo: PIB per capita):\n");
                printf("Carta 1 - %s: %.2f\n", nome1, pib_per_capita1);
                printf("Carta 2 - %s: %.2f\n", nome2, pib_per_capita2);
                if (pib_per_capita1 > pib_per_capita2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                } else if (pib_per_capita2 > pib_per_capita1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }

            case 6:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 6); // Continua até o jogador escolher sair (opção 6)

    return 0;
}
