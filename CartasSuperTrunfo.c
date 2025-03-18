#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //variaveis referentes as informções das cartas
    
    char estado01, estado02; 
    char cidade01[30], cidade02[30];
    char codigo01[20], codigo02[20];
    unsigned int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int pontosturisticos01, pontosturisticos02;
    float densidade01, densidade02;
    float pibpercapita01, pibpercapita02;
    float superPoder01, superPoder02;

    //Boas vindas e solicitação de cadastro de cartas

    printf ("Bem vindo ao jogo Super Trunfo - Países \nA seguir, insira as informações das cartas:\n\n");
    
    //Inserindo informações da carta 1

    printf ("Carta número 1\n\n");
    
    printf ("Estado: ");
    scanf (" %c", &estado01);
    printf ("Cidade: ");
    scanf (" %[^\n]s", cidade01);
    printf ("Código: ");
    scanf (" %s", codigo01);
    printf ("População: ");
    scanf (" %u", &populacao01);
    printf ("Área: ");
    scanf (" %f", &area01);
    printf ("PIB: ");
    scanf (" %f", &pib01);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pontosturisticos01);

    //inserindo informações da carta 2

    printf ("\nCarta número 2\n\n");
    
    printf ("Estado: ");
    scanf (" %c", &estado02);
    printf ("Cidade: ");
    scanf (" %[^\n]s", cidade02);
    printf ("Código: ");
    scanf (" %s", codigo02);
    printf ("População: ");
    scanf (" %u", &populacao02);
    printf ("Área: ");
    scanf (" %f", &area02);
    printf ("PIB: ");
    scanf (" %f", &pib02);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pontosturisticos02);

    //definindo valor da densidade e do PIB per capita

    densidade01 = (populacao01 / area01);
    densidade02 = (populacao02 / area02);
    pibpercapita01 = (pib01 / populacao01);
    pibpercapita02 = (pib02 / populacao02);

    //calculando Super Poder

    superPoder01 = (float) populacao01 + area01 + pib01 + pontosturisticos01 + pibpercapita01 + (populacao01 * area01);
    superPoder02 = (float) populacao02 + area02 + pib02 + pontosturisticos02 + pibpercapita02 + (populacao02 * area02);
    
    //mostrando informaçoes das duas cartas

    printf ("\n\nCarta 1: \n\nEstado: %c \nCidade: %s \nCódigo: %s \nPopulação: %u \nÁrea: %.2f km²\nPIB: %.3f bilhões de reais \nPontos Turísticos: %d \nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais \nSuper Poder: %.0f \n", 
        estado01, cidade01, codigo01, populacao01, area01, pib01, pontosturisticos01, densidade01, pibpercapita01, superPoder01);

    printf ("\n\nCarta 2: \n\nEstado: %c \nCidade: %s \nCódigo: %s \nPopulação: %u \nÁrea: %.2f km²\nPIB: %.3f bilhões de reais \nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais \nSuper Poder: %.0f \n", 
        estado02, cidade02, codigo02, populacao02, area02, pib02, pontosturisticos02, densidade02, pibpercapita02, superPoder02);

    //mostrando comparação entre as cartas

    printf("\n\nComparação de cartaas:\n\n");
    printf ("População: %s (%d)\n", populacao01 > populacao02 ? "Carta 1 venceu" : "Carta 2 venceu", populacao01 > populacao02 ? 1:0);
    printf ("Area: %s (%d)\n", area01 > area02 ? "Carta 1 venceu" : "Carta 2 venceu", area01 > area02 ? 1:0);
    printf ("PIB: %s (%d)\n", pib01 > pib02 ? "Carta 1 venceu" : "Carta 2 venceu", pib01 > pib02 ? 1:0);
    printf ("Pontos Turisticos: %s (%d)\n", pontosturisticos01 > pontosturisticos02 ? "Carta 1 venceu" : "Carta 2 venceu", pontosturisticos01 > pontosturisticos02 ? 0:1);
    printf ("Densidade: %s (%d)\n", densidade01 < densidade02 ? "Carta 1 venceu" : "Carta 2 venceu", densidade01 > densidade02 ? 1:0);
    printf ("PIB Per Capita: %s (%d)\n", pibpercapita01 > pibpercapita02 ? "Carta 1 venceu" : "Carta 2 venceu", pibpercapita01 > pibpercapita02 ? 1:0);
    printf ("Super Poder: %s (%d)\n", superPoder01 > superPoder02 ? "Carta 1 venceu" : "Carta 2 venceu", superPoder01 > superPoder02 ? 1:0);

    return 0;

}