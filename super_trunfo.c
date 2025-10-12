#include <stdio.h>

int main(){
    printf("Desafio cadastro das cartas\n\n");

    //Inicio da declaração das variaveis carta 1
    char estadocarta1;                     // Letra estado da cidade
    char codigocarta1[4];                  // Código identificador
    char nomecidadecarta1[20];             // Nome da cidade 
    int populacao1;                        // População                     
    float areacarta1;                      // Área em km² 
    float pibcarta1;                       // Pib (Produto interno bruto) 
    int pontosturisticos1;                 // Número de pontos turísticos 
    float densidade1;                      // Densidade populacional 
    float pibpercapta1;
    

    //Fim declaração de variaveis carta 1

    //inicio declaração de variaveis carta 2
    char estadocarta2;
    char codigocarta2[4];
    char nomecidadecarta2[20];
    int populacao2;
    float areacarta2;
    float pibcarta2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapta2;


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
    scanf("%d", &populacao1);

    printf("Informe a área em km²: \n");
    scanf("%f", &areacarta1);

    printf("Informe o Pib: \n");
    scanf("%f", &pibcarta1);

    printf("Insira a quantidade de pontos turistícos: \n");
    scanf("%d", &pontosturisticos1);

    densidade1 = (float) populacao1 / areacarta1;
    pibpercapta1 = (float) pibcarta1 / populacao1;

    printf("=== insira os dados da carta 2 ===\n\n");

    //Entrada de dados carta2.
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadocarta2);
    
    printf("Digite o código (01-04): \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidadecarta2);
    
    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Informe a área em km²: \n");
    scanf(" %f", &areacarta2);

    printf("Informe o Pib: \n");
    scanf("%f", &pibcarta2);

    printf("Insira a quantidade de pontos turistícos: \n");
    scanf("%d", &pontosturisticos2);

    densidade2 = (float) populacao2 / areacarta2;
    pibpercapta2 = (float) pibcarta2 / populacao2;

    printf("==== Carta 1 ====\n");

    //Saída de dados carta 1.
    printf("Estado: %c \n", estadocarta1);

    printf("Código: %c%s \n", estadocarta1, codigocarta1);

    printf("Cidade: %s \n", nomecidadecarta1);

    printf("População: %d\n", populacao1);

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

    printf("População: %d\n", populacao2);

    printf("Área: %.2f Km².\n", areacarta2);

    printf("Pib: %.2f bilhões de Reais.\n", pibcarta2);

    printf("Número de pontos turisticos: %d\n", pontosturisticos2);

    printf("Densidade populacional: %.2f hab/Km².\n", densidade2);

    printf("Pib per Capta: %.2f reais.\n", pibpercapta2);
    //Fim saída carta 2
    
    //Fim o programa

    return 0;
}