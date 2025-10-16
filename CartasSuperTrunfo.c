#include <stdio.h>


int main() {

    char estado[20];
    char codigo[20];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade;
    float capita;

    printf("SEJA BEM-VINDO AO DESENVOLVIMENTO DO JOGO SUPER TRUNFO EM C!\n");
    printf("Nessa etapa você irá cadastrar dados de uma cidade com suas características que pontuarão no game!\n");
    printf("Bora lá!\n\n");

    printf("Digite o estado:\n");
    scanf("%s", estado);

    printf("Digite o código que deseja dar à carta:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome);  // permite nomes com espaço dica legal da net

    printf("Digite sua população:\n");
    scanf("%d", &populacao);

    printf("Digite sua área em km²:\n");
    scanf("%f", &area);

    printf("Digite seu PIB:\n");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos existem:\n");
    scanf("%d", &pontos_turisticos);
    
    densidade = populacao / area;
    capita = PIB / populacao;

    printf("CARTA 1 CADASTRADA!\n");
    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("CIDADE: %s\n", nome);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade);
    printf("PIB PER CAPITA: R$ %.2f\n", capita);
    
    printf("Perfeito!!! \n Agora vamos cadastrar mais uma carta!\n");

    printf("Bora lá!\n\n");

    printf("Digite o estado:\n");
    scanf("%s", estado);

    printf("Digite o código que deseja dar à carta:\n");
    scanf("%s",  codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome);  // permite nomes com espaço dica legal da net

    printf("Digite sua população:\n");
    scanf("%d", &populacao);

    printf("Digite sua área em km²:\n");
    scanf("%f", &area);

    printf("Digite seu PIB:\n");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos existem:\n");
    scanf("%d", &pontos_turisticos);
    
    densidade = populacao / area;
    capita = PIB / populacao;

    printf("CARTA 2 CADASTRADA!\n");
    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("CIDADE: %s\n", nome);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade);
    printf("PIB PER CAPITA: R$ %.2f\n", capita);

    return 0;
}
