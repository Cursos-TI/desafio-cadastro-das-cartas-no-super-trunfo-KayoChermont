#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //variaveis referentes as informções das cartas
    
    char estado01, estado02; 
    char cidade01[30], cidade02[30];
    char codigo01[20], codigo02[20];
    int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int pontosturisticos01, pontosturisticos02;
    float densidade01, densidade02;
    float pibpercapita01, pibpercapita02;

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
    scanf (" %d", &populacao01);
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
    scanf (" %d", &populacao02);
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
    
    //mostrando informaçoes das duas cartas

    printf ("\n\nCarta 1: \n\nEstado: %c \nCidade: %s \nCódigo: %s \nPopulação: %d \nÁrea: %.2f km²\nPIB: %.3f bilhões de reais \nPontos Turísticos: %d \nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.5f reais \n", 
        estado01, cidade01, codigo01, populacao01, area01, pib01, pontosturisticos01, densidade01, pibpercapita01);

    printf ("\n\nCarta 2: \n\nEstado: %c \nCidade: %s \nCódigo: %s \nPopulação: %d \nÁrea: %.2f km²\nPIB: %.3f bilhões de reais \nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.5f reais \n", 
        estado02, cidade02, codigo02, populacao02, area02, pib02, pontosturisticos02, densidade02, pibpercapita02);

    return 0;
     
}