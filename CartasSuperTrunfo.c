#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

    int main(){
        //Armazenamento de dados das cartas.
        unsigned int populacao1, populacao2;
        int turistico1, turistico2;
        float renda1, renda2, area1, area2;
        char codigo1[10], codigo2[10];
        char estado1[10], estado2[10];
        char cidade1[30], cidade2[30];
        double valorper1;
        double valorper2;
        double densidade1;
        double densidade2;
        double superPoder1, superPoder2;
        int totalPopulacao, totalArea, totalPIB, totalpontos, totalDensidade, totalPercapita, totalPoder;

        //Ler informações
        //Carta Zero
        printf("\n");
        printf("***Inicio Desafio!***\n\n");
        printf("***Carta 0***\n\n");
        printf("Estado de A a H:\n");
        scanf(" %s", estado1);
        printf("Código de 01 até 04:\n");
        scanf(" %s", codigo1);
        printf("Nome da Cidade:\n");
        scanf(" %s", cidade1);
        printf("Números de Habitantes:\n");
        scanf(" %u", &populacao1);
        printf("Área da Cidade:\n");
        scanf(" %f", &area1);
        printf("PIB:\n");
        scanf(" %f", &renda1);
        printf("Numeros de Pontos Turístico:\n");
        scanf(" %d", &turistico1);
        densidade1 = populacao1 / area1;
        valorper1 = renda1 / populacao1;
        //Ler informações
        //Carta Um
        printf("\n");
        printf("***Carta 1***\n\n");
        printf("Estado de A a H:\n");
        scanf(" %s", estado2);
        printf("Código de 01 até 04:\n");
        scanf(" %s", codigo2);
        printf("Nome da Cidade:\n");
        scanf(" %s", cidade2);
        printf("Números de Habitantes:\n");
        scanf(" %u", &populacao2);
        printf("Área da Cidade:\n");
        scanf(" %f", &area2);
        printf("PIB:\n");
        scanf(" %f", &renda2);
        printf("Numeros de Pontos Turístico:\n");
        scanf(" %d", &turistico2);
        densidade2 = populacao2 / area2;
        valorper2 = renda2 / populacao2;
        printf("\n");

        //Leitura das cartas.
        printf("***Carta 0***\n\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s%s\n", estado1, codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %u\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f Bilhões de Reais.\n", renda1);
        printf("Números de Pontos Turístico: %d\n", turistico1);
        printf("Densidade Populacional: %.2f hab/km².\n", densidade1);
        printf("PIB per Capita: %.2f Reais.\n\n", valorper1);

        printf("***Carta 1***\n\n");
        printf("Estado: %s.\n", estado2);
        printf("Código: %s%s.\n", estado2, codigo2);
        printf("Nome da Cidade: %s.\n", cidade2);
        printf("População: %u.\n", populacao2);
        printf("Área: %.2f Km².\n", area2);
        printf("PIB: %.2f Bilhões de Reais.\n", renda2);
        printf("Números de Pontos Turístico: %d.\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km².\n", densidade2);
        printf("PIB per Capita: %.2f Reais.\n", valorper2);
        //Calculo do super poder
        superPoder1 = populacao1 + area1 + renda1 + turistico1 + valorper1 + (1.0 / densidade1);
        superPoder2 = populacao2 + area2 + renda2 + turistico2 + valorper2 + (1.0 / densidade2);
        
        totalPopulacao = populacao1 < populacao2; 
        totalArea = area1 < area2;
        totalPIB = renda1 < renda2;
        totalpontos = turistico1 < turistico2;
        totalDensidade = densidade1 < densidade2;
        totalPercapita = valorper1 < valorper2;
        totalPoder =  superPoder1 < superPoder2;
        //Leitura de qual carta venceu
        printf("\n\n");
        printf("**COMPARAÇÃO DE CARTAS**\n\n");

        printf("População: Carta %d venceu.\n", totalPopulacao);
        printf("Área: Carta %d venceu.\n", totalArea);
        printf("PIB: Carta %d venceu.\n", totalPIB);
        printf("Pontos Turísticos: Carta %d venceu.\n", totalpontos);
        printf("Densidade Populacional: Carta %d venceu.\n", totalDensidade);
        printf("PIB per capita: Carta %d venceu.\n", totalPercapita);
        printf("Super Poder: Carta %d venceu.\n", totalPoder);

        return 0;
    }
