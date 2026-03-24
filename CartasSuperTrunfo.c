#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado ,estado2, codigo_carta[4],codigo_carta2[4], cidade[50], cidade2[50];
  int populacao,populacao2, n_pontos_turisticos,n_pontos_turisticos2;
  float area_km2, area_km2_2, PIB, PIB2, Dens_Populacional, Dens_Populacional2, PIBperCapita, PIBperCapita2;
   
  //entrada de dados para usuário 
  //armazenamento de daodos nas variáveis
  // tirei a quebra de linha  na entrada dos dados, \n pois  é mais bonito visualmente  para o usuário preencher as informações.

    printf("*** Jogo Super Trunfo em C ++ *** \n");
    printf("\n");
    printf("CARTA 1\n");
    printf("\n");

    printf("Digite o estado: ");
    scanf(" %c" , &estado);

    printf("Digite o código da carta: ");
    scanf("%3s", codigo_carta);

    printf("Digite o nome da cidade: "); 
    scanf("%s", cidade);

    printf("Digite o número de habitantes locais: ");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos);

    printf("\n");
    printf("CARTA 2\n");
    printf("\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta: ");
    scanf("%3s", codigo_carta2);
       
    printf("Digite o nome da  cidade: ");
    scanf("%s", cidade2);
       
    printf("Digite o número de habitantes locais da cidade: ");
    scanf("%d", &populacao2);
   
    printf("Digite o tamanho da área da  cidade: ");
    scanf("%f", &area_km2_2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos2);

    
  // Cálculo para a densidade populacional
  
    Dens_Populacional = (float) populacao / area_km2;
    Dens_Populacional2 = (float) populacao2 / area_km2;

  // cálculo para o PIB 
     
    PIBperCapita = (float) PIB / populacao; 
    PIBperCapita2 = (float) PIB2 / populacao2;


  //saída de dados para usuário, cidade, estado etc...
 
     printf("Carta 1: \n"
            "Estado: %c\n"
            "Código: %s\n"
            "Nome da Cidade: %s\n"
            "População: %d\n"
            "Área: %.2f km2\n"
            "PIB: %.2f bilhões de reais\n"
            "Número de Pontos Turísticos: %d\n",
            estado,
            codigo_carta,
            cidade,
            populacao,
            area_km2,
            PIB,
            n_pontos_turisticos
           
          );         
     
    printf("Densidade Populacional: %.2f hab/km2 \n",
            "PIB per Capita: %.2f, reais \n" ,
            Dens_Populacional,
            PIBperCapita
          );

  // área de respiro entre a saída na tela entre as duas cartas        

    printf("\n");
    printf("\n");

  // saída resultado na área        

    printf("Carta 2: \n"
            "Estado: %c\n"
            "Código: %s\n"
            "Nome da Cidade: %s\n"
            "População: %d\n"
            "Área: %.2f km2\n"
            "PIB: %.2f bilhões de reais\n"
            "Número de Pontos Turísticos: %d\n",
            estado2,
            codigo_carta2,
            cidade2,
            populacao2,
            area_km2_2,
            PIB2,
            n_pontos_turisticos2
           
    );

    printf("Densidade Populacional: %.2f hab/km2 \n",       
           "PIB per Capita: %.2f, reais \n",
           Dens_Populacional2,
           PIBperCapita2
           
           );

return 0;



} 
