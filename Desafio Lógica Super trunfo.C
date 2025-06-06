#include <stdio.h>

// Estrutura para representar uma carta com dados de um país
typedef struct {
    char nome_pais[50];          // Nome do país
    int populacao;               // População do país
    float area;                  // Área do país em km²
    float pib;                   // PIB do país em trilhões
    int pontos_turisticos;       // Número de pontos turísticos do país
    float densidade_demografica; // Densidade demográfica (habitantes por km²)
} Carta;

int main() {
    Carta carta1, carta2; // Declaração de duas cartas
    int opcao;            // Variável para armazenar a opção do menu de comparação

    // =========================
    // Cadastro dos dados da Carta 1
    // =========================
    printf("\nCadastro da Carta 1:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", carta1.nome_pais); // Lê string com espaços
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km^2): ");
    scanf("%f", &carta1.area);
    printf("PIB (em trilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculo automático da densidade demográfica
    carta1.densidade_demografica = carta1.populacao / carta1.area;


    // =========================
    // Cadastro dos dados da Carta 2
    // =========================
    printf("\nCadastro da Carta 2:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", carta2.nome_pais);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km^2): ");
    scanf("%f", &carta2.area);
    printf("PIB (em trilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo automático da densidade demográfica
    carta2.densidade_demografica = carta2.populacao / carta2.area;


    // =========================
    // Menu de seleção do atributo para comparar
    // =========================
    printf("\n=========== MENU DE COMPARAÇÃO ===========\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);


    // =========================
    // Resultado da comparação
    // =========================
    printf("\n=========== RESULTADO DA COMPARACAO ===========\n");
    printf("Paises: %s x %s\n", carta1.nome_pais, carta2.nome_pais);

    // Estrutura switch para avaliar a opção escolhida
    switch(opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d | %s: %d\n", carta1.nome_pais, carta1.populacao, carta2.nome_pais, carta2.populacao);

            // Comparação direta: maior valor vence
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome_pais);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Vencedor: %s\n", carta2.nome_pais);
            } else {
                printf("Empate!\n");
            }
            break;


        case 2: // Área
            printf("Atributo: Area (km^2)\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.nome_pais, carta1.area, carta2.nome_pais, carta2.area);

            // Maior área vence
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome_pais);
            } else if (carta1.area < carta2.area) {
                printf("Vencedor: %s\n", carta2.nome_pais);
            } else {
                printf("Empate!\n");
            }
            break;


        case 3: // PIB
            printf("Atributo: PIB (trilhoes)\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.nome_pais, carta1.pib, carta2.nome_pais, carta2.pib);

            // Maior PIB vence
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nome_pais);
            } else if (carta1.pib < carta2.pib) {
                printf("Vencedor: %s\n", carta2.nome_pais);
            } else {
                printf("Empate!\n");
            }
            break;


        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d | %s: %d\n", carta1.nome_pais, carta1.pontos_turisticos, carta2.nome_pais, carta2.pontos_turisticos);

            // Maior número de pontos turísticos vence
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta1.nome_pais);
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta2.nome_pais);
            } else {
                printf("Empate!\n");
            }
            break;


        case 5: // Densidade Demográfica (MENOR vence)
            printf("Atributo: Densidade Demografica (hab/km^2)\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.nome_pais, carta1.densidade_demografica, carta2.nome_pais, carta2.densidade_demografica);

            // Aqui a lógica se inverte: MENOR densidade vence
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("Vencedor: %s\n", carta1.nome_pais);
            } else if (carta1.densidade_demografica > carta2.densidade_demografica) {
                printf("Vencedor: %s\n", carta2.nome_pais);
            } else {
                printf("Empate!\n");
            }
            break;


        default: // Caso o usuário digite uma opção inválida
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
