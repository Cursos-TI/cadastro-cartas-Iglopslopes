#include <stdio.h>

int main() {
    // Variáveis das Cartas
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int pontos1, pontos2;
    
    // Variáveis de Controle
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("*** Jogo Super Trunfo - Nível Mestre ***\n\n");

    // --- CADASTRO SIMPLIFICADO  ---
    printf("Cadastro da CARTA 1:\n");
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;

    printf("\nCadastro da CARTA 2:\n");
    printf("Cidade: "); 
    scanf("%s", cidade2);
    printf("População: "); 
    scanf("%lu", &populacao2);
    printf("Área (km²): "); 
    scanf("%f", &area2);
    printf("PIB: "); 
    scanf("%f", &pib2);
    printf("Pontos Turísticos: "); 
    scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;

    // --- MENU DINÂMICO 1 ---
    printf("\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    // Atribuição do primeiro valor usando Switch
    switch(opcao1) {
        case 1: valor1_carta1 = populacao1;
                valor1_carta2 = populacao2;
        break;
        case 2: valor1_carta1 = area1;
                valor1_carta2 = area2; 
        break;
        case 3: valor1_carta1 = pib1;
                valor1_carta2 = pib2; 
        break;
        case 4: valor1_carta1 = pontos1; 
                valor1_carta2 = pontos2; 
        break;
        case 5: valor1_carta1 = densidade1; 
                valor1_carta2 = densidade2; 
        break;
        default: printf("Opção inválida!"); 
        return 0;
    }

    // --- MENU DINÂMICO 2  ---
    printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");
    if(opcao1 != 1) 
    printf("1. População\n");
    if(opcao1 != 2) 
    printf("2. Área\n");
    if(opcao1 != 3) 
    printf("3. PIB\n");
    if(opcao1 != 4) 
    printf("4. Pontos Turísticos\n");
    if(opcao1 != 5) 
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2) {
        printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Atribuição do segundo valor
    switch(opcao2) {
        case 1: valor2_carta1 = populacao1; 
        valor2_carta2 = populacao2; 
        break;
        case 2: valor2_carta1 = area1; 
        valor2_carta2 = area2; 
        break;
        case 3: valor2_carta1 = pib1;
         valor2_carta2 = pib2; 
        break;
        case 4: valor2_carta1 = pontos1; 
        valor2_carta2 = pontos2; 
        break;
        case 5: valor2_carta1 = densidade1; 
        valor2_carta2 = densidade2; 
        break;
        default: printf("Opção inválida!"); return 0;
    }

    // --- LÓGICA DE SOMA (Tratando a Densidade) ---
    // Se for densidade (opção 5), usei o valor negativo ou invertido para a soma, 
    // pois na densidade, o menor valor é que deve "pontuar" mais.
    
    soma1 = (opcao1 == 5 ? -valor1_carta1 : valor1_carta1) + (opcao2 == 5 ? -valor2_carta1 : valor2_carta1);
    soma2 = (opcao1 == 5 ? -valor1_carta2 : valor1_carta2) + (opcao2 == 5 ? -valor2_carta2 : valor2_carta2);

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n=============================\n");
    printf("RESULTADO DA COMPARAÇÃO\n");
    printf("=============================\n");
    printf("País 1: %s | País 2: %s\n", cidade1, cidade2);
    printf("Atributo 1 (Valor): %.2f vs %.2f\n", valor1_carta1, valor1_carta2);
    printf("Atributo 2 (Valor): %.2f vs %.2f\n", valor2_carta1, valor2_carta2);
    
       
    printf("Soma Total: %.2f vs %.2f\n", soma1, soma2);
    printf("-----------------------------\n");

    if (soma1 > soma2) {
        printf("VENCEDOR: %s (Carta 1)\n", cidade1);
    } else if (soma2 > soma1) {
        printf("VENCEDOR: %s (Carta 2)\n", cidade2);
    } else {
        printf("RESULTADO: Empate!\n");
    }

    return 0;
}