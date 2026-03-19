#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado ,estado2, codigo_carta[4],codigo_carta2[4], cidade[50], cidade2[50];
  int populacao,populacao2, n_pontos_turisticos,n_pontos_turisticos2;
  float area_km2, area_km22, PIB, PIB2;
 
  
  //entrada de dados para usuário 
  //armazenamento de daodos nas variáveis
  // tirei a quebra de linha na entrada dos dados, \n pois  é mais bonito visualmente  para o usuário preencher as informações.
    printf("Digite o nome da cidade: "); 
    scanf(" %s", cidade);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", cidade2);

    printf("Digite o estado da primeira cidade:");
    scanf(" %c" , &estado);
    printf("Digite do segundo estado:");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%3s", codigo_carta);
    printf("Digite o código da segunda carta: ");
    scanf(" %3s", codigo_carta2);

    printf("Digite o número de habitantes locais:");
    scanf("  %d", &populacao);
    printf("Digite o número de habitantes locais da outra cidade:");
    scanf(" %d", &populacao2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf(" %d", &n_pontos_turisticos);
    printf("Insira o número de pontos turísticos da segunda cidade: ");
    scanf(" %d", &n_pontos_turisticos2);

    printf("Digite o tamanho da área:");
    scanf(" %f", &area_km2);
    printf("Digite o tamanho da área da outra cidade:");
    scanf(" %f", &area_km22);

    printf("Digite o PIB da cidade:");
    scanf(" %f", &PIB);
    printf("Digite o PIB da segunda cidade:");
    scanf(" %f", &PIB2);

  //saída de dados para usuário, cidade, estado etc...
 
     printf ("Carta 1: \n"
            "Estado: %c\n"
            "Código: %2s\n"
            "Nome da Cidade: %s\n"
            "População: %d\n"
            "Área: %f km2\n"
            "PIB: %f bilhões de reais\n "
            "Número de Pontos Turísticos:%d\n",
            estado,
            codigo_carta,
            cidade,
            populacao,
            area_km2,
            PIB,
            n_pontos_turisticos
           
      );

    printf("\n");
    

    printf ("Carta 2: \n"
            "Estado: %c\n"
            "Código: %2s\n"
            "Nome da Cidade: %s\n"
            "População: %d\n"
            "Área: %f km2\n"
            "PIB: %f bilhões de reais\n "
            "Número de Pontos Turísticos:%d\n",
            estado2,
            codigo_carta2,
            cidade2,
            populacao2,
            area_km22,
            PIB2,
            n_pontos_turisticos2
           
    );
return 0;


 


} 
