#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado ,estado2, codigo_carta[4],codigo_carta2[4], cidade[50], cidade2[50];
  int n_pontos_turisticos,n_pontos_turisticos2;
  unsigned long int populacao,populacao2,SUPERPODER_A, SUPERPODER_B;
  float area_km2, area_km2_2, PIB, PIB2, Dens_Populacional, Dens_Populacional2, PIBperCapita, PIBperCapita2, inverso_densidade, inverso_densidade2;
  
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

    // Informacoes Carta 2

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

    
  // Cálculo para a densidade populacional
  
    Dens_Populacional =  populacao / area_km2;
    Dens_Populacional2 =  populacao2 / area_km2_2;

  // cálculo para o PIB 
     
    PIBperCapita =  PIB /    populacao; 
    PIBperCapita2 =  PIB2 /  populacao2;


  // Demais cálculos:

    inverso_densidade = 1.0f / Dens_Populacional;
    inverso_densidade2 = 1.0f / Dens_Populacional2;
    
    SUPERPODER_A =  populacao + area_km2 + PIB + n_pontos_turisticos + PIBperCapita + inverso_densidade;  
    SUPERPODER_B =  populacao + area_km2_2 + PIB2 + n_pontos_turisticos2 + PIBperCapita2 + inverso_densidade2;       


    // saída das informações carta 1
 
     printf("Carta 1: \n"
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

  // saída das informações carta 2
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

  // Testando Condições IF
  
  //Estudo condições 

    if (populacao > populacao2){
        printf("Carta 1 venceu! População:  %lu \n", populacao);
    }else{
        printf("carta 2 venceu! População: %lu \n", populacao2);
    }


    if (area_km2 > area_km2_2){
        printf("Carta 1 venceu! Área: %.3f \n", area_km2);
    }else{
        printf("Carta 2 venceu! Área: %.3f \n", area_km2_2);
    }

    if (PIB > PIB2){
        printf("Carta 1 venceu! PIB: %f \n", PIB);
    }else{
        printf("Carta 2 venceu! %f PIB \n", PIB2);        
    }

    if (n_pontos_turisticos > n_pontos_turisticos2){
        printf("Carta 1 venceu! %d Número de pontos turísticos: \n", n_pontos_turisticos);
    }else{
        printf("Carta 1 venceu! %d Número de pontos turísticos: \n", n_pontos_turisticos2);
    }

    if (Dens_Populacional < Dens_Populacional2){
        printf("Carta 1 venceu! %.3f Densidade Populacional:  \n", Dens_Populacional);
    }else{
        printf("Carta 1 venceu! %.3f Densidade Populacional: \n", Dens_Populacional2);
    }
    
    if (PIBperCapita > PIBperCapita2){
        printf("Carta 1 venceu! %.3f PIB Percápta: \n", PIBperCapita);
    }else{
        printf("Carta 1 venceu! %.3f PIB Percápta: \n", PIBperCapita2);
    }
   
    if(SUPERPODER_A > SUPERPODER_B){
        printf("CARTA 1 VENCEU!! CARTA_SUPER_TRUNFO: %ul \n", SUPERPODER_A);
    }else{
        printf("CARTA 1 VENCEU!! CARTA_SUPER_TRUNFO: %ul \n", SUPERPODER_B);
    }

   

return 0;



} 