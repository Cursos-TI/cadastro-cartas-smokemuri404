#include <stdio.h>


int main() {

    char Estado[20];
    char Codigo[20];
    char Nome[50];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_Turisticos;

    printf("SEJA BEM-VINDO AO DESENVOLVIMENTO DO JOGO SUPER TRUNFO EM C!\n");
    printf("Nessa etapa você irá cadastrar dados de uma cidade com suas características que pontuarão no game!\n");
    printf("Bora lá!\n\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado);

    printf("Digite o código que deseja dar à carta:\n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", Nome);  // permite nomes com espaço dica legal da net

    printf("Digite sua população:\n");
    scanf("%d", &Populacao);

    printf("Digite sua área em km²:\n");
    scanf("%f", &Area);

    printf("Digite seu PIB:\n");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos existem:\n");
    scanf("%d", &Pontos_Turisticos);

    printf("CARTA 1 CADASTRADA!\n");
    printf("ESTADO: %s\n", Estado);
    printf("CÓDIGO: %s\n", Codigo);
    printf("CIDADE: %s\n", Nome);
    printf("POPULAÇÃO: %d\n", Populacao);
    printf("ÁREA: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("PONTOS TURÍSTICOS: %d\n", Pontos_Turisticos);
    
    printf("Perfeito!!! \n Agora vamos cadastrar mais uma carta!\n");

    printf("Bora lá!\n\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado);

    printf("Digite o código que deseja dar à carta:\n");
    scanf("%s",  Codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", Nome);  // permite nomes com espaço dica legal da net

    printf("Digite sua população:\n");
    scanf("%d", &Populacao);

    printf("Digite sua área em km²:\n");
    scanf("%f", &Area);

    printf("Digite seu PIB:\n");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos existem:\n");
    scanf("%d", &Pontos_Turisticos);

    printf("CARTA 2 CADASTRADA!\n");
    printf("ESTADO: %s\n", Estado);
    printf("CÓDIGO: %s\n", Codigo);
    printf("CIDADE: %s\n", Nome);
    printf("POPULAÇÃO: %d\n", Populacao);
    printf("ÁREA: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("PONTOS TURÍSTICOS: %d\n", Pontos_Turisticos);

    return 0;
}
