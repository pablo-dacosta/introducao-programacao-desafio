#include <stdio.h>

int main(){
    printf("Desafio cadastro e comparação de cartas\n\n");

    // Declaração das variáveis - Carta 1
    char estadocarta1;
    char codigocarta1[4];
    char nomecidadecarta1[20];
    unsigned long int populacao1;
    float areacarta1, pibcarta1;
    int pontosturisticos1;
    float densidade1, pibpercapta1;

    // Declaração das variáveis - Carta 2
    char estadocarta2;
    char codigocarta2[4];
    char nomecidadecarta2[20];
    unsigned long int populacao2;
    float areacarta2, pibcarta2;
    int pontosturisticos2;
    float densidade2, pibpercapta2;

    // ===== Entrada de dados carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite Estado (A-H): ");
    scanf(" %c", &estadocarta1);

    printf("Digite o código (01-04): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidadecarta1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a área em km²: ");
    scanf("%f", &areacarta1);

    printf("Informe o PIB: ");
    scanf("%f", &pibcarta1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / areacarta1;
    pibpercapta1 = pibcarta1 / populacao1;

    // ===== Entrada de dados carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite Estado (A-H): ");
    scanf(" %c", &estadocarta2);

    printf("Digite o código (01-04): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidadecarta2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a área em km²: ");
    scanf("%f", &areacarta2);

    printf("Informe o PIB: ");
    scanf("%f", &pibcarta2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / areacarta2;
    pibpercapta2 = pibcarta2 / populacao2;

    // ===== COMPARAÇÃO (apenas 1 atributo: População) =====
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n\n");

    printf("Carta 1 - %s (%c%s): %lu habitantes\n", nomecidadecarta1, estadocarta1, codigocarta1, populacao1);
    printf("Carta 2 - %s (%c%s): %lu habitantes\n\n", nomecidadecarta2, estadocarta2, codigocarta2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidadecarta1);
    } 
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidadecarta2);
    } 
    else {
        printf("Resultado: Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}
