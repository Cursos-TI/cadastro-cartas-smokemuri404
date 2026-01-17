#include <stdio.h>

int main(){

    // Cartas 1 //

    char estado1[20], codigo1[20], nome1[20];
    unsigned int populacao1;
    float area1, pib1;
    int pontos1;

    // Cartas 2 //

    char estado2[20], codigo2[20], nome2[20];
    unsigned int populacao2;
    float area2, pib2;
    int pontos2;

    printf("SEJA BEM-VINDO AO DESAFIO MESTRE DO JOGO SUPER TRUNFO EM C!\n");
    printf("Agora suas cartas vão batalhar! Vamos cadastrar as cidades:\n\n");

    // Cadastro Carta 1 //

    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado:\n");
    scanf("%s", estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome1);

    printf("Digite a população:\n");
    scanf("%u", &populacao1);

    printf("Digite a área (km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    printf("\nCARTA 1 CADASTRADA COM SUCESSO!\n\n");

    // Cadastro Carta 2 //

    printf("=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome2);

    printf("Digite a população:\n");
    scanf("%u", &populacao2);

    printf("Digite a área (km²):\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    printf("\n CARTA 2 CADASTRADA COM SUCESSO!\n\n");

    // Calculos Gerais //

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibper1 = (pib1 * 1000000000) / populacao1; // Transforma PIB em bilhões para reais
    float pibper2 = (pib2 * 1e9) / populacao2;

    // Cálculo do Super Poder:
    // Soma todos os atributos numéricos + o inverso da densidade (quanto menor, melhor)

            // Seu cálculo está bom, mas população é um número grande comparado ao resto. Isso faz o “superpoder” ser dominado só por ela ( Sujestão boa do chat GPT :). //


     float superpower1 = populacao1 
                + (area1 / 1000)
                + pib1 
                + pontos1 
                + pibper1 
                + (1.0 / densidade1);

    float superpower2 = populacao2 
                + (area2 / 1000) 
                + pib2 
                + pontos2 
                + pibper2 
                + (1.0 / densidade2);
                
    // Resultados //

    printf("CARTA 1 - %s (%s)\n", nome1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f R$/hab\n", pibper1);
    printf("Super Poder: %.2f\n\n", superpower1);

    printf("CARTA 2 - %s (%s)\n", nome2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f R$/hab\n", pibper2);
    printf("Super Poder: %.2f\n\n", superpower2);

    // Comparações Gerais //

    if (superpower1 > superpower2){

    printf(" Carta 1 (%s) venceu com %.2f pontos!\n", nome1, superpower1);
} else if (superpower2 > superpower1) {
    printf(" Carta 2 (%s) venceu com %.2f pontos!\n", nome2, superpower2);
} else {
    printf(" Empate técnico! Ambas as cartas têm %.2f pontos!\n", superpower1);
}
    
        printf("\n\n=== FIM DA BATALHA ===\n\n");

    return 0;

}
