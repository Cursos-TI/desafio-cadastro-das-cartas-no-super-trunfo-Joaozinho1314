#include <stdio.h>

//  Nível Novato: Cadastro Básico
// int main() {
//     // Definindo as variáveis para armazenar os dados das cartas
//     char estado1, estado2;
//     char codigo1[3], codigo2[3];
//     char cidade1[50], cidade2[50];
//     int populacao1, populacao2;
//     float area1, area2, pib1, pib2;
//     int pontos_turisticos1, pontos_turisticos2;

//     // Entrada de dados para a Carta 1
//     printf("Digite os dados da Carta 1:\n");
//     printf("Estado (A a H): ");
//     scanf(" %c", &estado1);  // O espaço antes de %c é para garantir que o \n não seja lido
//     printf("Código da Carta (ex: A01): ");
//     scanf("%s", codigo1);
//     printf("Nome da Cidade: ");
//     scanf(" %[^\n]s", cidade1);  // Lê até a quebra de linha
//     printf("População: ");
//     scanf("%d", &populacao1);
//     printf("Área (em km²): ");
//     scanf("%f", &area1);
//     printf("PIB: ");
//     scanf("%f", &pib1);
//     printf("Número de Pontos Turísticos: ");
//     scanf("%d", &pontos_turisticos1);

//     // Entrada de dados para a Carta 2
//     printf("\nDigite os dados da Carta 2:\n");
//     printf("Estado (A a H): ");
//     scanf(" %c", &estado2);
//     printf("Código da Carta (ex: A01): ");
//     scanf("%s", codigo2);
//     printf("Nome da Cidade: ");
//     scanf(" %[^\n]s", cidade2);
//     printf("População: ");
//     scanf("%d", &populacao2);
//     printf("Área (em km²): ");
//     scanf("%f", &area2);
//     printf("PIB: ");
//     scanf("%f", &pib2);
//     printf("Número de Pontos Turísticos: ");
//     scanf("%d", &pontos_turisticos2);

//     // Exibindo os dados da Carta 1
//     printf("\nCarta 1:\n");
//     printf("Estado: %c\n", estado1);
//     printf("Código: %s\n", codigo1);
//     printf("Nome da Cidade: %s\n", cidade1);
//     printf("População: %d\n", populacao1);
//     printf("Área: %.2f km²\n", area1);
//     printf("PIB: %.2f bilhões de reais\n", pib1);
//     printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

//     // Exibindo os dados da Carta 2
//     printf("\nCarta 2:\n");
//     printf("Estado: %c\n", estado2);
//     printf("Código: %s\n", codigo2);
//     printf("Nome da Cidade: %s\n", cidade2);
//     printf("População: %d\n", populacao2);
//     printf("Área: %.2f km²\n", area2);
//     printf("PIB: %.2f bilhões de reais\n", pib2);
//     printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

//     return 0;
// }


//  Nível Aventureiro: Cálculo de Atributos

// int main() {
//     // Definindo as variáveis para armazenar os dados das cartas
//     char estado1, estado2;
//     char codigo1[3], codigo2[3];
//     char cidade1[50], cidade2[50];
//     int populacao1, populacao2;
//     float area1, area2, pib1, pib2;
//     int pontos_turisticos1, pontos_turisticos2;

//     // Entrada de dados para a Carta 1
//     printf("Digite os dados da Carta 1:\n");
//     printf("Estado (A a H): ");
//     scanf(" %c", &estado1);  // O espaço antes de %c é para garantir que o \n não seja lido
//     printf("Código da Carta (ex: A01): ");
//     scanf("%s", codigo1);
//     printf("Nome da Cidade: ");
//     scanf(" %[^\n]s", cidade1);  // Lê até a quebra de linha
//     printf("População: ");
//     scanf("%d", &populacao1);
//     printf("Área (em km²): ");
//     scanf("%f", &area1);
//     printf("PIB: ");
//     scanf("%f", &pib1);
//     printf("Número de Pontos Turísticos: ");
//     scanf("%d", &pontos_turisticos1);

//     // Entrada de dados para a Carta 2
//     printf("\nDigite os dados da Carta 2:\n");
//     printf("Estado (A a H): ");
//     scanf(" %c", &estado2);
//     printf("Código da Carta (ex: A01): ");
//     scanf("%s", codigo2);
//     printf("Nome da Cidade: ");
//     scanf(" %[^\n]s", cidade2);
//     printf("População: ");
//     scanf("%d", &populacao2);
//     printf("Área (em km²): ");
//     scanf("%f", &area2);
//     printf("PIB: ");
//     scanf("%f", &pib2);
//     printf("Número de Pontos Turísticos: ");
//     scanf("%d", &pontos_turisticos2);

//     // Cálculo da Densidade Populacional
//     float densidade1 = populacao1 / area1;
//     float densidade2 = populacao2 / area2;

//     // Cálculo do PIB per Capita
//     float pib_per_capita1 = pib1 / populacao1;
//     float pib_per_capita2 = pib2 / populacao2;

//     // Exibindo os dados da Carta 1
//     printf("\nCarta 1:\n");
//     printf("Estado: %c\n", estado1);
//     printf("Código: %s\n", codigo1);
//     printf("Nome da Cidade: %s\n", cidade1);
//     printf("População: %d\n", populacao1);
//     printf("Área: %.2f km²\n", area1);
//     printf("PIB: %.2f bilhões de reais\n", pib1);
//     printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
//     printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
//     printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

//     // Exibindo os dados da Carta 2
//     printf("\nCarta 2:\n");
//     printf("Estado: %c\n", estado2);
//     printf("Código: %s\n", codigo2);
//     printf("Nome da Cidade: %s\n", cidade2);
//     printf("População: %d\n", populacao2);
//     printf("Área: %.2f km²\n", area2);
//     printf("PIB: %.2f bilhões de reais\n", pib2);
//     printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
//     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
//     printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

//     return 0;
// }

//Nível Mestre: Comparação e Super Poder

#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, pontos_tur1, pontos_tur2;
    float densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Entrada dos dados para a primeira carta
    printf("Digite os dados para a Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);  
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1); 
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);  
    printf("População: ");
    scanf("%lu", &populacao1);  
    printf("Área (em km²): ");
    scanf("%f", &area1); 
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);  
    printf("Número de Pontos Turísticos: ");
    scanf("%f", &pontos_tur1); 

    // Cálculos para a primeira carta
    densidade_populacional1 = populacao1 / area1;  
    pib_per_capita1 = pib1 * 1e9 / populacao1;  

    // Cálculo do Super Poder (soma dos atributos numéricos com a densidade inversa)
    super_poder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontos_tur1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Entrada dos dados para a segunda carta
    printf("\nDigite os dados para a Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2); 
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2); 
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);  
    printf("População: ");
    scanf("%lu", &populacao2);  
    printf("Área (em km²): ");
    scanf("%f", &area2);  
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);  
    printf("Número de Pontos Turísticos: ");
    scanf("%f", &pontos_tur2);  
    // Cálculos para a segunda carta
    densidade_populacional2 = populacao2 / area2;  // Densidade populacional = população / área
    pib_per_capita2 = pib2 * 1e9 / populacao2;  // PIB per capita = PIB / população (convertido de bilhões para unidades)

    // Cálculo do Super Poder (soma dos atributos numéricos com a densidade inversa)
    super_poder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontos_tur2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibindo os resultados das comparações
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));

    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));

    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos_tur1 > pontos_tur2));

    // Comparando Densidade Populacional
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade_populacional1 < densidade_populacional2));

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita1 > pib_per_capita2));

    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder1 > super_poder2));

    return 0;
}
