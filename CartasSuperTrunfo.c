#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    char nomeA01[20] = "novafriburgo";
    float codigoA01 = 2525, populacaoA01 = 25.258, areaA01 = 258.258;
    double pibA01 = 25.258258;
    int ptA01 = 32;

    printf ("Bem vindo ao jogo Super Trunfo - Países \nA seguir, insira as informações das cartas:\n\n");
    //printf ("Nome da cidade: ");
    //scanf ("%s", &nomeA01);
    printf ("Código: ");
    scanf ("%4f", &codigoA01);
    printf ("População: ");
    scanf ("%6f", &populacaoA01);
    printf ("Área: ");
    scanf ("%f", &areaA01);
    printf ("PIB: ");
    scanf ("%f", &pibA01);
    printf ("Pontos turisticos: ");
    scanf ("%d", &ptA01);

    printf ("\n\nCarta adicionada: \n%s \n%f \n%f \n%f \n%f \n%d", nomeA01, codigoA01, populacaoA01, areaA01, pibA01, ptA01);
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
    
}
