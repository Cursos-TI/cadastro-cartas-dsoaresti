#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char pais1 [10] = "brasil";
      char estado1 [10] = "ceara";
      char cidade1 [10] = "fortaleza";
      double populacao1;
      double area1;
      double pib1;
      int pontos1;

      char pais2 [10] = "brasil";
      char estado2 [10] = "ceara";
      char cidade2 [10] = "fortaleza";
      double populacao2;
      double area2;
      double pib2;
      int pontos2;


  // Área para entrada de dados
      printf("Digite o país da carta 1:\n");
      scanf("%s", &pais1);
      printf("Digite o estado da carta 1:\n");
      scanf("%s", &estado1);
      printf("Digite a cidade da carta 1:\n");
      scanf("%s", &cidade1);
      printf("Digite a população da carta 1:\n");
      scanf("%f", &populacao1);
      printf("Digite a área da carta 1:\n");
      scanf("%f", &area1);
      printf("Digite o PIB da carta 1:\n");
      scanf("%f", &pib1);
      printf("Digite o número de pontos turísticos da carta 1:\n");
      scanf("%d", &pontos1);


      printf("Digite o país da carta 2:\n");
      scanf("%s", &pais2);
      printf("Digite o estado da carta 2:\n");
      scanf("%s", &estado2);
      printf("Digite a cidade da carta 2:\n");
      scanf("%s", &cidade2);
      printf("Digite a população da carta 2:\n");
      scanf("%f", &populacao2);
      printf("Digite a área da carta 2:\n");
      scanf("%f", &area2);
      printf("Digite o PIB da carta 2:\n");
      scanf("%f", &pib2);
      printf("Digite o número de pontos turísticos da carta 2:\n");
      scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade
      printf("##### Carta 1 #####\n");
      printf("País: %s\n", &pais1);
      printf("Estado: %s\n", &estado1);
      printf("Cidade: %s\n", &cidade1);
      printf("População: %f\n", &populacao1);
      printf("Área: %f\n", &area1);
      printf("PIB: %f\n", &pib1);
      printf("Número de pontos turísticos: %d\n", &pontos1);
      printf("\n"); 
      printf("\n"); 
      printf("##### Carta 2 #####\n");
      printf("País: %s\n", &pais2);
      printf("Estado: %s\n", &estado2);
      printf("Cidade: %s\n", &cidade2);
      printf("População: %f\n", &populacao2);
      printf("Área: %f\n", &area2);
      printf("PIB: %f\n", &pib2);
      printf("Número de pontos turísticos: %d\n", &pontos2);


return 0;
} 
