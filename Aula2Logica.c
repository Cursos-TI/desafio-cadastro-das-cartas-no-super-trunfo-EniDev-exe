#include <stdio.h>

int main() {
    // Variáveis 
    char codigo_carta[4] = "001"; 
    char codigo_carta2[4] = "002";
    char estado[50] = "Bahia";
    char cidade[50] = "Salvador";
    char pais[50] = "Brasil";
    char estado2[50] = "SP";
    char cidade2[50] = "São Paulo";
    char pais2[50] = "Brasil";
    
    int pontos_turisticos = 7;
    int populacao = 2418000;
    int pontos_turisticos2 = 124;
    int populacao2 = 11890000;
    int escolha;
    
    float pib = 629;
    float area = 693;
    float pib2 = 829;
    float area2 = 1521;

    // Texto inicial 
    printf("Desafio Super Trunfo: Países - Enivaldo Oliveira\n");
    printf("------------------------------------------------\n\n");

    // Escolha
    printf("Escolha qual carta você quer jogar\n");
    printf("Para São Paulo digite 1\n");
    printf("Para Salvador digite 2\n");
    
    scanf("%d", &escolha);
    
    if (escolha == 1) {
        printf("\nVocê escolheu São Paulo!\n");
        printf("Código: %s\n", codigo_carta2);
        printf("País: %s\n", pais2);
        printf("Estado: %s\n", estado2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);  
        printf("PIB: %.2f bilhões\n", pib2);        
        printf("Pontos turísticos: %d\n\n", pontos_turisticos2);
        printf("------------------------------------------------\n\n");
        if (populacao2 > populacao){
            printf("\nVocê venceu! A população de %s é maior que %s\n", cidade2, cidade);
        }
        else{
            printf("\nVocê perdeu! A população de %s é menor que %s\n", cidade2, cidade);
        }

        
    }
    else if (escolha == 2) {
        printf("\nVocê escolheu Salvador!\n");
        printf("Código: %s\n", codigo_carta);
        printf("País: %s\n", pais);
        printf("Estado: %s\n", estado);
        printf("Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);  
        printf("PIB: %.2f bilhões\n", pib);        
        printf("Pontos turísticos: %d\n\n", pontos_turisticos);
        printf("------------------------------------------------\n\n");
        if (populacao > populacao2){
            printf("\nVocê venceu! A população de %s é maior que %s\n", cidade, cidade2);
        }
        else{
            printf("\nVocê perdeu! A população de %s é menor que %s\n", cidade, cidade2);
        }
    }
    else {
        printf("Opção inválida! Digite 1 ou 2.\n");
        return 1; 
    }

}