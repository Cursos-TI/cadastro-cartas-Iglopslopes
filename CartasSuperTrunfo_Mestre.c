#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado ,estado2, codigo_carta[4],codigo_carta2[4], cidade[50], cidade2[50];
  int n_pontos_turisticos,n_pontos_turisticos2, opcao;
  unsigned long int populacao,populacao2;
  float area_km2, area_km2_2, PIB, PIB2, Dens_Populacional, Dens_Populacional2, PIBperCapita, PIBperCapita2, inverso_densidade, inverso_densidade2,SUPERPODER_A, SUPERPODER_B;
  int resultado_Populacao, resultado_area, resultado_PIB, resultado_Pontos_turisticos, resultado_densidade, resultado_PIB2,resultado_PIBperCapita,resultado_SUPERPODER;
   
  //entrada de dados para usuário 
  //armazenamento de daodos nas variáveis
  // tirei a quebra de linha  na entrada dos dados, \n pois  é mais bonito visualmente  para o usuário preencher as informações.

    printf("*** Jogo Super Trunfo em C ++ *** \n");
    printf("\n");
    printf("CARTA 1\n");
    printf("\n");

    printf("Digite o nome da cidade: "); 
    scanf("%s", cidade);

    printf("Digite o estado: ");
    scanf(" %c" , &estado);

    printf("Digite o código da carta: ");
    scanf("%3s", codigo_carta);

    printf("Digite o número de habitantes locais: ");
    scanf("%lu", &populacao);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos);

    printf("\n");
    printf("CARTA 2\n");
    printf("\n");

    printf("Digite o nome da  cidade: ");
    scanf("%s", cidade2);

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta: ");
    scanf("%3s", codigo_carta2);
              
    printf("Digite o número de habitantes locais da cidade: ");
    scanf("%lu", &populacao2);
   
    printf("Digite o tamanho da área da  cidade: ");
    scanf("%f", &area_km2_2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos2);
     
    printf("\n");
    printf("\n");

    printf(" *** MENU PRINCIPAL ESCOLHA UMA OPÇÃO PARA COMPARAÇÃO! *** \n");
    printf("\n");
    printf("1. Nome do País: \n");
    printf("2. População: \n");
    printf("3. Área: \n");
    printf("4. PIB: \n");
    printf("5. Nùmero de pontos turísticos: \n");
    printf("6. Densidade demográfica: \n");
    scanf("%d", &opcao);


   // Cálculo para a densidade populacional
  
    Dens_Populacional =  populacao / area_km2;
    Dens_Populacional2 =  populacao2 / area_km2_2;

  // cálculo para o PIB 
     
    PIBperCapita =  PIB /    populacao; 
    PIBperCapita2 =  PIB2 /  populacao2;

  // Criando o Menu de escolhas e testando opções escolhidas.

    switch (opcao)
    {
    case 1:
      printf("Cidades para comparação ( %s ), ( %s ) \n:", cidade, cidade2 );
      break;

    case 2:
          if(populacao > populacao2)
      {
        printf("Populacao Carta 1 venceu. Atributo utilizado POPULAÇÂO: CARTA1 ( %lu ), POPULAÇÂO CARTA2 ( %lu ),  habitantes \n", populacao,populacao2);
      }else if(populacao < populacao2){
        printf("Populacao Carta 2 venceu. Atributo utilizado POPULAÇÂO: CARTA1 ( %lu ), POPULAÇÂO CARTA2 ( %lu ),  habitantes \n", populacao, populacao2);
      }else{
        printf("DEU EMPATE! \n");
      }
      break;

    case 3:
      if(area_km2 > area_km2_2){
        printf("Área km2 da carta 1 venceu. Atributo utilizado: Área Carta1 ( %f ),  Área Carta2 ( %f )km2\n" , area_km2, area_km2_2);
      }else if(area_km2 < area_km2_2){
        printf("Área km2 da carta 2 venceu. Atributo utilizado: Área Carta1 ( %f ),  Área Carta2 ( %f ) km2\n", area_km2, area_km2_2);
      }else{
        printf("DEU EMPATE! \n");
      }   
      break;

    case 4:
      if(PIB > PIB2){
        printf("O PIB da  carta 1 venceu. Atributo utilizado PIB: Carta1 ( %f ), PIB Carta2 ( %f ) \n", PIB, PIB2);
      }else if(PIB < PIB2){
        printf("O PIB da  carta 2 venceu. Atributo utilizado PIB: Carta1 ( %f ), PIB Carta2 ( %f )\n", PIB, PIB2);
      }else
        printf("DEU EMPATE! \n");      
      break;

    case 5:
      if(n_pontos_turisticos > n_pontos_turisticos2){
        printf("A cidade da carta 1 venceu. Tem mais pontos turísticos do que a carta 2:  Carta1 ( %d ) , Carta 2 ( %d ) \n", n_pontos_turisticos, n_pontos_turisticos2);
      }else if(n_pontos_turisticos < n_pontos_turisticos2){ 
        printf("A cidade da carta 2 venceu. Tem mais pontos turísticos do que a carta 1:  Carta1 ( %d ), Carta2 ( %d )\n", n_pontos_turisticos, n_pontos_turisticos2);
      }else{
        printf("DEU EMPATE! \n");  
      }  
      break;

    case 6:
      if(Dens_Populacional < Dens_Populacional2){
        printf("A cidade da carta 1 venceu. Carta1 %f, Carta2 %f \n", Dens_Populacional, Dens_Populacional2);
      }else if(Dens_Populacional > Dens_Populacional2){
        printf("A cidade da carta 2 venceu. Carta1 %f, Carta2 %f \n", Dens_Populacional, Dens_Populacional2);
      }else{
        printf("DEU EMPATE! \n"); 
      }
      break; 


    default:
        printf("Opção Inválida! \n");
      break;
    }

    
  

  //saída de dados para usuário, cidade, estado etc...
 
    /* printf("Carta 1: \n"
            "Estado: %c\n"
            "Código: %s\n"
            "Nome da Cidade: %s\n"
            "População: %lu\n"
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
     
    printf("Densidade Populacional: %.2f hab/km2 \n"
            "PIB per Capita: %.2f, reais \n" ,
            Dens_Populacional,
            PIBperCapita
          );

  // área de respiro entre a saída na tela entre as duas cartas        

    printf("\n");
    printf("\n");

  // saída das informações
    printf("Carta 2: \n"
            "Estado: %c\n"
            "Código: %s\n"
            "Nome da Cidade: %s\n"
            "População: %lu\n"
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

    printf("Densidade Populacional: %.2f hab/km2 \n"      
           "PIB per Capita: %.2f, reais \n",
           Dens_Populacional2,
           PIBperCapita2
           
           );

    printf("\n");
    printf("\n");
    
    printf("*** COMPARAÇÃO DE CARTAS \n: ***");
    printf("\n");
  
    

    
  //cálculo jogo

    resultado_Populacao = populacao > populacao2;
    resultado_area = area_km2 > area_km2_2;
    resultado_PIB = PIB > PIB2;
    resultado_Pontos_turisticos = n_pontos_turisticos > n_pontos_turisticos2;
    resultado_densidade = Dens_Populacional < Dens_Populacional2;
    resultado_PIBperCapita = PIBperCapita > PIBperCapita2;
    resultado_SUPERPODER = SUPERPODER_A > SUPERPODER_B;


    printf("Populacao: Carta %d venceu (%d) \n", 2 - resultado_Populacao, resultado_Populacao); 
    printf("Populacao: Carta %d venceu (%d)\n", 2- resultado_Populacao, resultado_Populacao);
    printf("Area: Carta %d venceu (%d)\n", 2 - resultado_area, resultado_area);
    printf("PIB: Carta %d venceu (%d)\n", 2 - resultado_PIB, resultado_PIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2 - resultado_Pontos_turisticos, resultado_Pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2- resultado_densidade, resultado_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 -resultado_PIBperCapita, resultado_PIBperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultado_SUPERPODER, resultado_SUPERPODER);     
  
    inverso_densidade = 1.0f / Dens_Populacional;
    inverso_densidade2 = 1.0f / Dens_Populacional2;
    
    SUPERPODER_A =  populacao + area_km2 + PIB + n_pontos_turisticos + PIBperCapita + inverso_densidade;  
    SUPERPODER_B =  populacao + area_km2_2 + PIB2 + n_pontos_turisticos2 + PIBperCapita2 + inverso_densidade2;       

   */

return 0;



} 
