#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
        int populacao1, populacao2;
        int turistico1, turistico2;
        float renda1, renda2, area1, area2;
        char codigo1[10], codigo2[10];
        char estado1[10], estado2[10];
        char cidade1[100], cidade2[100];

  // Área para entrada de dados
        //Carta1
        printf("\n");
        printf("***Inicio Desafio!***\n\n");
        printf("Carta 1\n\n");
        printf("Estado de A a H:\n");
        scanf(" %s", &estado1);
        printf("Código de 01 até 04:\n");
        scanf(" %s", &codigo1);
        printf("Nome da Cidade:\n");
        scanf(" %s", cidade1);
        printf("Números de Habitantes:\n");
        scanf(" %d", &populacao1);
        printf("Área da Cidade:\n");
        scanf(" %f", &area1);
        printf("PIB:\n");
        scanf(" %f", &renda1);
        printf("Numeros de Pontos Turistoco:\n");
        scanf(" %d", &turistico1);
        //Carta2
        printf("\n");
        printf("Carta 2\n\n");
        printf("Estado de A a H:\n");
        scanf(" %s", &estado2);
        printf("Código de 01 até 04:\n");
        scanf(" %s", &codigo2);
        printf("Nome da Cidade:\n");
        scanf(" %s", cidade2);
        printf("Números de Habitantes:\n");
        scanf(" %d", &populacao2);
        printf("Área da Cidade:\n");
        scanf(" %f", &area2);
        printf("PIB:\n");
        scanf(" %f", &renda2);
        printf("Numeros de Pontos Turistoco:\n");
        scanf(" %d", &turistico2);
        printf("\n");
  // Área para exibição dos dados da cidade
        printf("Carta 1\n\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s%s\n", estado1, codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2fKm²\n", area1);
        printf("PIB: %.2f Bilhões de Reais\n", renda1);
        printf("Números de Pontos Turístico: %d\n\n", turistico1);

        printf("Carta 2\n\n");
        printf("Estado: %s.\n", estado2);
        printf("Código: %s%s.\n", estado2, codigo2);
        printf("Nome da Cidade: %s.\n", cidade2);
        printf("População: %d.\n", populacao2);
        printf("Área: %.2fKm².\n", area2);
        printf("PIB: %.2f Bilhões de Reais.\n", renda2);
        printf("Números de Pontos Turístico: %d.\n", turistico2);


return 0;
} 
