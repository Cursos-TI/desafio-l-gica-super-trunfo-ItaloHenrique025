#include <stdio.h>

int main() {
    // Definição das variáveis
    int atributo1, atributo2;
    int codigoCarta1, codigoCarta2;
    float pop1, area1, pib1, densidade1; // Atributos para São Paulo
    float pop2, area2, pib2, densidade2; // Atributos para Rio de Janeiro
    float somaCarta1, somaCarta2;

    // Atributos do estado 1 - São Paulo
    pop1 = 12300000;        // População
    area1 = 1521.11;        // Área (km²)
    pib1 = 699.2e9;         // PIB (milhões)
    densidade1 = 8072.92;   // Densidade Demográfica (hab/km²)

    // Atributos do estado 2 - Rio de Janeiro
    pop2 = 6000000;
    area2 = 1182.3;
    pib2 = 635.1e9;
    densidade2 = 5089.69;

    // Menu interativo para escolher os atributos
    printf("Escolha dois atributos para a comparação:\n");

    // Atributos disponíveis
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");

    // Seleção do primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Seleção do segundo atributo (não pode ser o mesmo que o primeiro)
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    // Validação para garantir que o segundo atributo não é igual ao primeiro
    if (atributo1 == atributo2) {
        printf("Erro: Você não pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    // Comparar os atributos selecionados
    printf("\nComparando os atributos entre os estados...\n");

    // Comparação do primeiro atributo
    float resultado1 = 0, resultado2 = 0;
    switch (atributo1) {
        case 1:  // População
            resultado1 = pop1;
            resultado2 = pop2;
            break;
        case 2:  // Área
            resultado1 = area1;
            resultado2 = area2;
            break;
        case 3:  // PIB
            resultado1 = pib1;
            resultado2 = pib2;
            break;
        case 4:  // Densidade Demográfica
            resultado1 = densidade1;
            resultado2 = densidade2;
            break;
        default:
            printf("Erro: Atributo inválido!\n");
            return 1;
    }

    // Comparação do segundo atributo
    float resultado1b = 0, resultado2b = 0;
    switch (atributo2) {
        case 1:  // População
            resultado1b = pop1;
            resultado2b = pop2;
            break;
        case 2:  // Área
            resultado1b = area1;
            resultado2b = area2;
            break;
        case 3:  // PIB
            resultado1b = pib1;
            resultado2b = pib2;
            break;
        case 4:  // Densidade Demográfica
            resultado1b = densidade1;
            resultado2b = densidade2;
            break;
        default:
            printf("Erro: Atributo inválido!\n");
            return 1;
    }

    // Aplicando regras de comparação para a densidade demográfica
    if (atributo1 == 4) { // Densidade Demográfica: menor valor vence
        if (resultado1 > resultado2) {
            resultado1 = 0;  // Oponente vence
        } else {
            resultado2 = 0;
        }
    }
    if (atributo2 == 4) { // Densidade Demográfica: menor valor vence
        if (resultado1b > resultado2b) {
            resultado1b = 0;  // Oponente vence
        } else {
            resultado2b = 0;
        }
    }

    // Soma dos Atributos
    somaCarta1 = resultado1 + resultado1b;
    somaCarta2 = resultado2 + resultado2b;

    // Exibindo os resultados
    printf("\nResultado da Comparação entre as Cartas:\n");
    printf("Carta 1: Atributo 1 = %.2f, Atributo 2 = %.2f\n", resultado1, resultado1b);
    printf("Carta 2: Atributo 1 = %.2f, Atributo 2 = %.2f\n", resultado2, resultado2b);

    // Determinando quem venceu
    if (somaCarta1 > somaCarta2) {
        printf("\nVencedor: Carta 1 (São Paulo)\n");
    } else if (somaCarta2 > somaCarta1) {
        printf("\nVencedor: Carta 2 (Rio de Janeiro)\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
