#include <stdio.h>
#include <string.h>

/* Desafio Super Trunfo - Países
 Tema 1 - Cadastro das Cartas
 OBS: Nível Novato do desafio: focado apenas no cadastro das cartas (Cidade 1 e 2), 
      utilizando as funções scanf para ler os dados e printf para exibi-los.
*/ 

int main() {
    // Definição das variáveis separadas para cada atributo da cidade.
    char  estado_carta1, estado_carta2;
    char  codigoCarta_carta1[4],codigoCarta_carta2[4]; // precisa de 4 posições: "A01" + '\0'
    char  nomeCidade_carta1[50], nomeCidade_carta2[50];
    int   populacao_carta1, populacao_carta2;
    float areaKm_carta1, areaKm_carta2;
    float pib_carta1, pib_carta2;
    int   numPontosTuristicos_carta1, numPontosTuristicos_carta2;
   
    /*
    Cadastrar Cartas - Cidade 1:
    */
    printf("--------------------------------------\n");
    printf("Informe os dados da CARTA 1 (Cidade 1)\n");
    printf("--------------------------------------\n");

    printf("Estado: (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta1);    // espaço antes do "%c" para ignora o enter, tabs e espaços

    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): "); 
    scanf("%3s", codigoCarta_carta1);
 
    printf("Nome da Cidade: ");
    //scanf("%s", nomeCidade_carta1);
    getchar(); // limpa o ENTER que sobrou
    fgets(nomeCidade_carta1, sizeof(nomeCidade_carta1), stdin);
    nomeCidade_carta1[strcspn(nomeCidade_carta1, "\n")] = 0; // remove \n    

    printf("População (O número de habitantes da cidade): "); 
    scanf("%d", &populacao_carta1);
 
    printf("Área (em km²): ");
    scanf("%f", &areaKm_carta1);
 
    printf("PIB (O Produto Interno Bruto da cidade): "); 
    scanf("%f", &pib_carta1);
 
    printf("Número de Pontos Turísticos (A quantidade de pontos turísticos na cidade): "); 
    scanf("%d", &numPontosTuristicos_carta1);

    // Exibição dos Dados da Carta 1
    printf("\n==> RESULTADO\n");
    printf("CARTA 1 \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de pontos turísticos: %d", 
        estado_carta1, 
        codigoCarta_carta1,
        nomeCidade_carta1,
        populacao_carta1,
        areaKm_carta1,
        pib_carta1,
        numPontosTuristicos_carta1
    );

    /*
    Cadastrar Cartas - Cidade 2:
    */
    printf("\n\n");
    printf("--------------------------------------\n");
    printf("Informe os dados da CARTA 2 (Cidade 2)\n");
    printf("--------------------------------------\n");

    printf("Estado: (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta2);   // espaço antes do "%c" para ignora o enter, tabs e espaços

    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): "); 
    scanf("%3s", codigoCarta_carta2);
 
    printf("Nome da Cidade: ");
    //scanf("%s", nomeCidade_carta2);
    getchar(); // limpa o ENTER que sobrou
    fgets(nomeCidade_carta2, sizeof(nomeCidade_carta2), stdin);
    nomeCidade_carta2[strcspn(nomeCidade_carta2, "\n")] = 0; // remove \n    

    printf("População (O número de habitantes da cidade): "); 
    scanf("%d", &populacao_carta2);
 
    printf("Área (em km²): ");
    scanf("%f", &areaKm_carta2);
 
    printf("PIB (O Produto Interno Bruto da cidade): "); 
    scanf("%f", &pib_carta2);
 
    printf("Número de Pontos Turísticos (A quantidade de pontos turísticos na cidade): "); 
    scanf("%d", &numPontosTuristicos_carta2);
    
    // Exibição dos Dados da Carta 2
    printf("\n==> RESULTADO\n");
    printf("CARTA 2 \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de pontos turísticos: %d", 
        estado_carta2, 
        codigoCarta_carta2,
        nomeCidade_carta2,
        populacao_carta2,
        areaKm_carta2,
        pib_carta2,
        numPontosTuristicos_carta2
    );

    return 0;
}
