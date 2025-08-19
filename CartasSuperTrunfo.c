#include <stdio.h>

int main(){
    int NumeroDePontosTuristicos1;
    unsigned long int Populacao1;
    float Area1, PIB1, DensidadePopulacional1, PIBperCapita1, SuperPoder1;
    char Estado1[30], CodigoDaCarta1[10], NomeDaCidade1[50];


    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", CodigoDaCarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomeDaCidade1);

    printf("Informe a População: \n");
    scanf("%lu", &Populacao1);
    
    printf("Digite a Área: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB (em Bilhões de reais): \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    DensidadePopulacional1 = (float)(Populacao1 / Area1);
    PIBperCapita1 = (float)((PIB1 * 1000000000.0f) / Populacao1);
    SuperPoder1 = (float) (Populacao1 + Area1 + PIB1 + PIBperCapita1 + (1 / DensidadePopulacional1) + NumeroDePontosTuristicos1);

    int NumeroDePontosTuristicos2;
    unsigned long int Populacao2;
    float Area2, PIB2, DensidadePopulacional2, PIBperCapita2, SuperPoder2;
    char Estado2[30], CodigoDaCarta2[10], NomeDaCidade2[50];

    printf("Vamos cadastrar a segunda carta \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomeDaCidade2);

    printf("Informe a População: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB (em Bilhões de reais): \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos2);

    DensidadePopulacional2 = (float)(Populacao2 / Area2);
    PIBperCapita2 = (float)((PIB2 * 1000000000.0f) / Populacao2);
    SuperPoder2 = (float) (Populacao2 + Area2 + PIB2 + PIBperCapita2 + (1 / DensidadePopulacional2) + NumeroDePontosTuristicos2);
    
    printf("Carta 1: \n");
    printf("Nome do Estado: %s \n", Estado1);
    printf("Codigo da carta: %s \n", CodigoDaCarta1);
    printf("Nome da Cidade: %s \n", NomeDaCidade1);
    printf("População: %lu \n", Populacao1);
    printf("Área: %.2f \n", Area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional1);
    printf("PIB per Capita: R$ %.2f \n", PIBperCapita1);
    printf("O Super Poder tem valor: %.2f \n", SuperPoder1);

    printf("Carta 2: \n");
    printf("Nome do Estado: %s \n", Estado2);
    printf("Código da carta: %s \n", CodigoDaCarta2);
    printf("Nome da Cidade: %s \n", NomeDaCidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %.2f \n", Area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos2);
    printf("Densidade populacional: %.2f \n", DensidadePopulacional2);
    printf("PIB per Capita: R$%.2f \n", PIBperCapita2);
    printf("O Super Poder tem valor: %.2f \n", SuperPoder2);

    //Comparações

    printf("A População da carta 1 é maior que a População da carta 2? %d\n", Populacao1 > Populacao2);
    printf("A Área da carta 1 é maior que a Área da carta 2? %d\n", Area1 > Area2);
    printf("O PIB da carta um é maior que o PIB da segunda carta? %d\n", PIB1 > PIB2);
    printf("A carta um apresenta um número maior de pontos turísticos? %d\n", NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2);
    printf("A melhor densidade populacional é da carta 1? %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("A carta 1 apresenta um maior PIB per Capita? %d\n", PIBperCapita1 > PIBperCapita2);
    printf("A carta um tem o Super Poder mais alto que a carta 2? %d\n", SuperPoder1 > SuperPoder2);


    return 0;



}
