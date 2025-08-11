#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char carta1_id_estado[2], carta2_id_estado[2];
    char carta1_codigo[4], carta2_codigo[4];
    char carta1_nome[21], carta2_nome[21];
    unsigned long carta1_populacao, carta2_populacao;
    float carta1_area, carta2_area;
    float carta1_pib, carta2_pib;
    float carta1_pib_per_capita, carta2_pib_per_capita;
    int carta1_pontos_turisticos, carta2_pontos_turisticos;
    float carta1_densidade_populacional, carta2_densidade_populacional;
    float carta1_super_poder, carta2_super_poder;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // carta_1
    printf("===== Registrando primeira carta =====\n");
    printf("- Digite o identificador de estado: (Ex: A)\n");
    scanf(" %c", carta1_id_estado);
    printf("- Digite o código da carta: (Ex: A01)\n");
    scanf(" %s", carta1_codigo);
    printf("- Digite o nome da carta: (Ex: Rio de Janeiro)\n");
    scanf(" %[^\n]", carta1_nome);
    printf("- Digite o número da população: (Ex: 1600000)\n");
    scanf("%ld", &carta1_populacao);
    printf("- Digite a área em km²: (Ex: 1200.50)\n");
    scanf("%f", &carta1_area);
    printf("- Digite o PIB: (Ex: 949300000000)\n");
    scanf("%f", &carta1_pib);
    printf("- Digite o número de pontos turísticos: (Ex: 100)\n");
    scanf("%d", &carta1_pontos_turisticos);
    carta1_pib_per_capita = carta1_pib / (float)carta1_populacao;
    carta1_densidade_populacional = (float)carta1_populacao / carta1_area;
    carta1_super_poder = carta1_populacao + carta1_area + carta1_pib + carta1_pib_per_capita + ((float)1 / carta1_densidade_populacional) + carta1_pontos_turisticos;

    // carta_2
    printf("===== Registrando segunda carta =====\n");
    printf("- Digite o identificador de estado: (Ex: A)\n");
    scanf(" %c", carta2_id_estado);
    printf("- Digite o código da carta: (Ex: A01)\n");
    scanf(" %s", carta2_codigo);
    printf("- Digite o nome da carta: (Ex: Rio de Janeiro)\n");
    scanf(" %[^\n]", carta2_nome);
    printf("- Digite o número da população: (Ex: 1600000)\n");
    scanf("%ld", &carta2_populacao);
    printf("- Digite a área em km²: (Ex: 1200.50)\n");
    scanf("%f", &carta2_area);
    printf("- Digite o PIB: (Ex: 949300000000)\n");
    scanf("%f", &carta2_pib);
    printf("- Digite o número de pontos turísticos: (Ex: 100)\n");
    scanf("%d", &carta2_pontos_turisticos);
    carta2_pib_per_capita = carta2_pib / (float)carta2_populacao;
    carta2_densidade_populacional = (float)carta2_populacao / carta2_area;
    carta2_super_poder = carta2_populacao + carta2_area + carta2_pib + carta2_pib_per_capita + ((float)1 / carta2_densidade_populacional) + carta2_pontos_turisticos;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // carta_1
    printf("===== [%s] %s =====\n", carta1_codigo, carta1_nome);
    printf("- População: %ld habitantes\n", carta1_populacao);
    printf("- Área: %.2fkm²\n", carta1_area);
    printf("- Densidade Populacional: %.2f habitantes/km²\n", carta1_densidade_populacional);
    printf("- PIB: R$%.2f bilhões\n", carta1_pib/1000000000);
    printf("- PIB (per capita): R$%.2f mil\n", carta1_pib_per_capita/1000);
    printf("- Pontos turísticos: %d+\n", carta1_pontos_turisticos);
    printf("- Super Poder: %.2f\n", carta1_super_poder);

    // carta_2
    printf("===== [%s] %s =====\n", carta2_codigo, carta2_nome);
    printf("- População: %ld habitantes\n", carta2_populacao);
    printf("- Área: %.2fkm²\n", carta2_area);
    printf("- Densidade Populacional: %.2f habitantes/km²\n", carta2_densidade_populacional);
    printf("- PIB: R$%.2f bilhões\n", carta2_pib/1000000000);
    printf("- PIB (per capita): R$%.2f mil\n", carta2_pib_per_capita/1000);
    printf("- Pontos turísticos: %d+\n", carta2_pontos_turisticos);
    printf("- Super Poder: %.2f\n", carta2_super_poder);

    // comparação
    printf("===== [%s] VS [%s] =====\n", carta1_codigo, carta2_codigo);
    printf("- Vencedor em População: Carta %d\n", (carta1_populacao < carta2_populacao)+1);
    printf("- Vencedor em Área: Carta %d\n", (carta1_area < carta2_area)+1);
    printf("- Vencedor em Densidade Populacional: Carta %d\n", (carta1_densidade_populacional < carta2_densidade_populacional)+1);
    printf("- Vencedor em PIB: Carta %d\n", (carta1_pib < carta2_pib)+1);
    printf("- Vencedor em PIB (per capita): Carta %d\n", (carta1_pib_per_capita < carta2_pib_per_capita)+1);
    printf("- Vencedor em Pontos turísticos: Carta %d\n", (carta1_pontos_turisticos < carta2_pontos_turisticos)+1);
    printf("- Vencedor em Super Poder: Carta %d\n", (carta1_super_poder < carta2_super_poder)+1);

    return 0;
}