#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Captura os números do usuário
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int A01, A01a, A01b, A01e, A02, A02a, A02b, A02e;
    float A01c, A01d, A01f, A01g, A02c, A02d, A02f, A02g;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Escreva o Código da cidade 1: ");
    scanf("%s", &A01);
    printf("Escreva o Nome da cidade 1: ");
    scanf("%s", &A01a);
    printf("Registre a população da cidade 1: ");
    scanf("%s", &A01b);
    printf("Registre a área da cidade 1: ");
    scanf("%s", &A01c);
    printf("Registre o PIB da cidade 1: ");
    scanf("%s", &A01d);
    printf("Registre o número de pontos turisticos da cidade 1: ");
    scanf("%s", &A01e);

    printf("Escreva o Código da cidade 2: ");
    scanf("%s", &A02);
    printf("Escreva o Nome da cidade 2: ");
    scanf("%s", &A02a);
    printf("Registre a população da cidade 2: ");
    scanf("%s", &A02b);
    printf("Registre a área da cidade 2: ");
    scanf("%s", &A02c);
    printf("Registre o PIB da cidade 2: ");
    scanf("%s", &A02d);
    printf("Registre o número de pontos turisticos da cidade 2: ");
    scanf("%s", &A02e);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da Cidade: %s", &A01);
    printf("Nome da Cidade: %s", &A01a);
    printf("População: %s", &A01b);
    printf("Área: %s", &A01c);
    printf("PIB: %s", &A01d);
    printf("Número de pontos turisticos: %s", &A01e);
    printf("Densidade Populacional: %s", &A01f);
    printf("PIB per capita: %s", &A01g);

    printf("Código da Cidade: %s", &A02);
    printf("Nome da Cidade: %s", &A02a);
    printf("População: %s", &A02b);
    printf("Área: %s", &A02c);
    printf("PIB: %s", &A02d);
    printf("Número de pontos turisticos: %s", &A02e);
    printf("Densidade Populacional: %s", &A02f);
    printf("PIB per capita: %s", &A02g);
    
    return 0;
}
