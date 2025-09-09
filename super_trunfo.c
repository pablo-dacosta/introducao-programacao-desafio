#include <stdio.h>

int main(){
    printf("Desafio cadastro das cartas\n\n");

    //Inicio da declaração das variaveis carta 1
    char estadocarta1;                     // Letra estado da da cidade
    char codigocarta1[4];                  // Código identificador
    char nomecidadecarta1[20];             // Nome da cidade 
    int populacao1;                        // População                     
    float areacarta1;                      // Área em km² 
    float pibcarta1;                       // Pib (Produto interno bruto) 
    int numeropontosturisticos1;           // Número de pontos turísticos 
    //Fim declaração de variaveis carta 1

    //inicio declaração de variaveis carta 2
    char estadocarta2;
    char codigocarta2[4];
    char nomecidadecarta2[20];
    int populacao2;
    float areacarta2;
    float pibcarta2;
    int numeropontosturisticos2;
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
    scanf("%d", &numeropontosturisticos1);


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
    scanf("%d", &numeropontosturisticos2);

    printf("==== Carta 1 ====\n");

    //Saída de dados carta 1.
    printf("Estado: %c \n", estadocarta1);

    printf("Código: %c%s \n", estadocarta1, codigocarta1);

    printf("Cidade: %s \n", nomecidadecarta1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f Km²\n", areacarta1);

    printf("Pib: %.2f Reais.\n", pibcarta1);

    printf("Número de pontos turisticos: %d\n\n", numeropontosturisticos1);
    
    //Fim saída carta 1

    printf("==== Carta 2 ====\n");

    //Saída de dados carta 2
    printf("Estado: %c \n", estadocarta2);

    printf("Código: %c%s \n", estadocarta2, codigocarta2);

    printf("Cidade: %s \n", nomecidadecarta2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f Km².\n", areacarta2);

    printf("Pib: %.2f Reais.\n", pibcarta2);

    printf("Número de pontos turisticos: %d\n", numeropontosturisticos2);
    //Fim saída carta 2
    

    //Fim o programa

    return 0;

}