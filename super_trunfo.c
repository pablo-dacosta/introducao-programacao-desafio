#include <stdio.h>

int main(){
    printf("Desafio cadastro das cartas\n\n");

    //Inicio da declaração das variaveis carta 1
    char estadocarta1;                     // Letra estado da cidade
    char codigocarta1[4];                  // Código identificador
    char nomecidadecarta1[20];             // Nome da cidade 
    unsigned long int populacao1;                        // População                     
    float areacarta1;                      // Área em km² 
    float pibcarta1;                       // Pib (Produto interno bruto) 
    int pontosturisticos1;                 // Número de pontos turísticos 
    float densidade1;                      // Densidade populacional 
    float pibpercapta1;                    // Pib per capta
    float superpoder1;                     // Super poder

    //Fim declaração de variaveis carta 1

    //inicio declaração de variaveis carta 2
    char estadocarta2;
    char codigocarta2[4];
    char nomecidadecarta2[20];
    unsigned long int populacao2;
    float areacarta2;
    float pibcarta2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapta2;
    float superpoder2;

    //Fim declaração de variaveis carta 2.

    
    //Inicio da entrada de dados (printf e scanf)
   
    printf("insira os dados da carta 1\n\n");

    //Entrada de dados carta1
    printf("Digite Estado (A-H): \n");
    scanf(" %c", &estadocarta1);
    
    printf("Digite o código (01-04): \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidadecarta1);
    
    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área em km²: \n");
    scanf("%f", &areacarta1);

    printf("Informe o Pib: \n");
    scanf("%f", &pibcarta1);

    printf("Insira a quantidade de pontos turistícos: \n");
    scanf("%d", &pontosturisticos1);

   // Cálculos carta 1
    densidade1 = (float) populacao1 / areacarta1;
    pibpercapta1 = pibcarta1 / populacao1;
    superpoder1 = (float)populacao1 + areacarta1 + pibcarta1 + (float)pontosturisticos1 + pibpercapta1 + (1.0 / densidade1);


    printf("=== insira os dados da carta 2 ===\n\n");

    //Entrada de dados carta2.
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadocarta2);
    
    printf("Digite o código (01-04): \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidadecarta2);
    
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área em km²: \n");
    scanf(" %f", &areacarta2);

    printf("Informe o Pib: \n");
    scanf("%f", &pibcarta2);

    printf("Insira a quantidade de pontos turistícos: \n");
    scanf("%d", &pontosturisticos2);

    //Cálculos carta 2
    densidade2 = (float) populacao2 / areacarta2;
    pibpercapta2 = (float) pibcarta2 / populacao2;
    superpoder2 = (float) populacao2 + areacarta2 + pibcarta2 + (float)pontosturisticos2 + pibpercapta2 + (1.0 / densidade2);

    printf("==== Carta 1 ====\n");

    //Saída de dados carta 1.
    printf("Estado: %c \n", estadocarta1);

    printf("Código: %c%s \n", estadocarta1, codigocarta1);

    printf("Cidade: %s \n", nomecidadecarta1);

    printf("População: %lu\n", populacao1);

    printf("Área: %.2f Km²\n", areacarta1);

    printf("Pib: %.2f bilhões de Reais.\n", pibcarta1);

    printf("Número de pontos turisticos: %d\n", pontosturisticos1);

    printf("Densidade populacional: %.2f hab/Km².\n", densidade1);

    printf("Pib per Capta: %.2f reais.\n", pibpercapta1);
    
    //Fim saída carta 1

    printf("==== Carta 2 ====\n");

    //Saída de dados carta 2
    printf("Estado: %c \n", estadocarta2);

    printf("Código: %c%s \n", estadocarta2, codigocarta2);

    printf("Cidade: %s \n", nomecidadecarta2);

    printf("População: %lu\n", populacao2);

    printf("Área: %.2f Km².\n", areacarta2);

    printf("Pib: %.2f bilhões de Reais.\n", pibcarta2);

    printf("Número de pontos turisticos: %d\n", pontosturisticos2);

    printf("Densidade populacional: %.2f hab/Km².\n", densidade2);

    printf("Pib per Capta: %.2f reais.\n", pibpercapta2);
    //Fim saída carta 2

    // Resultados comparativos
    int venceuPopulacao = populacao1 > populacao2;
    int venceuArea = areacarta1 > areacarta2;
    int venceuPib = pibcarta1 > pibcarta2;
    int venceuPontos = pontosturisticos1 > pontosturisticos2;
    int venceuDensidade = densidade1 < densidade2; // menor vence
    int venceuPibPerCapta = pibpercapta1 > pibpercapta2;
    int venceuSuperPoder = superpoder1 > superpoder2;

    printf("\n=== Comparação de Cartas ===\n\n");
    printf("População: Carta 1 venceu (%d)\n", venceuPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", venceuArea);
    printf("PIB: Carta 1 venceu (%d)\n", venceuPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceuPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceuDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceuPibPerCapta);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceuSuperPoder);
    
    //Fim o programa

    return 0;
}