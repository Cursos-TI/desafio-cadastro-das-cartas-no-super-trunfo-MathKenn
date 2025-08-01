#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste

int main(){
    int Populacao1, NumeroDePontosTuristicos1;
    float Area1, PIB1;
    char Estado1[30], CodigoDaCarta1[10], NomeDaCidade1[50];

    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", &CodigoDaCarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &NomeDaCidade1);

    printf("Informe a População: \n");
    scanf("%d", &Populacao1);
    
    printf("Digite a Área: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    int Populacao2, NumeroDePontosTuristicos2;
    float Area2, PIB2;
    char Estado2[30], CodigoDaCarta2[10], NomeDaCidade2[50];

    printf("Vamos cadastrar a segunda carta \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", &CodigoDaCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &NomeDaCidade2);

    printf("Informe a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos2);
    
    printf("Carta 1: \n");
    printf("Codigo da carta: %s \n", CodigoDaCarta1);
    printf("Nome da Cidade: %s \n", NomeDaCidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f \n", Area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Numero de Pontos Turisticos: %d", NumeroDePontosTuristicos1);

    printf("Carta 2: \n");
    printf("Código da carta: %s \n", CodigoDaCarta2);
    printf("Nome da Cidade: %s \n", NomeDaCidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f \n", Area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Numero de Pontos Turisticos: %d", NumeroDePontosTuristicos2);

    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
