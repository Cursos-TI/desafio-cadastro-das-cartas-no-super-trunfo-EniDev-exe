#include <stdio.h>

int main() {

    //VARIÁVEIS
    char codigo_carta[3], estado[50], cidade[50], pais[50];
    int pontos_turisticos, populacao, area, pib;

    //TEXTO INICIAL
    printf("Desafio Super Trunfo: Países - Enivaldo Oliveira\n");
    printf("------------------------------------------------\n");
    printf("        \n");

    //FORMULÁRIO
    printf("Qual o país da carta?\n");
    scanf("%s", pais);

    printf("Qual o estado da carta?\n");
    scanf(" %s", estado);

    printf("Qual a cidade da carta?\n");
    scanf(" %s", cidade);

    printf("Qual o código da carta?\n");
    scanf(" %s", codigo_carta);

    printf("Qual a popoulação da carta?\n");
    scanf(" %i", &populacao);

    printf("Qual a área em km da carta?\n");
    scanf(" %i", &area);

    printf("Qual o PIB da carta?\n");
    scanf(" %i", &pib);

    printf("Quantos pontos turísticos ela tem?\n");
    scanf(" %i", &pontos_turisticos);


    //RESULTADO DA CARTA REGISTRADA
    printf(" \n");
    printf(" \n");
    printf("Parabéns, todos os dados foram computados!\n");
    printf(" \n");
    printf("Sua carta é:\n");
    printf(" \n");
    printf("Código: %s\n", codigo_carta);
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %i\n", area);
    printf("PIB: %i\n", pib);
    printf("Pontos turísticos: %i\n", pontos_turisticos);
    printf(" \n");
    printf("Espero que tenha se divertido.\n");
    return 0;
}
