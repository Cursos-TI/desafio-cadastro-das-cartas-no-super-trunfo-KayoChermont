#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //variaveis referentes as informções das cartas
    
    char estado01[3] = "SP", estado02[3] = "RJ"; 
    char cidade01[30] = "Sao Paulo", cidade02[30] = "Rio de Janeiro";
    char codigo01[4] = "A01", codigo02[4] = "B02";
    unsigned int populacao01 = 2580000, populacao02 = 1200000;
    float area01 = 520.000000, area02 = 650.000000;
    float pib01 = 32.000000000, pib02 = 32.000000000;
    int pontosturisticos01 = 52, pontosturisticos02 = 64;
    float densidade01, densidade02;
    float pibpercapita01, pibpercapita02;
    float superPoder01, superPoder02;

    unsigned int compPopulacao;
    float compArea;
    float compPib;
    int compPontosTuristicos;
    float compDensidade;
    float compPibpercapita;
    float compSuperpoder;

    int escolhaCarta, escolhaAtributo;

    //Calculo dos valores de densidade, pib per capita e super poder

    densidade01 = (float) populacao01 / area01;
    densidade02 = (float) populacao02 / area02;
    pibpercapita01 = (pib01 / populacao01);
    pibpercapita02 = (pib02 / populacao02);
    superPoder01 = (float) populacao01 + area01 + pib01 + pontosturisticos01 + pibpercapita01 + (populacao01 * area01);
    superPoder02 = (float) populacao02 + area02 + pib02 + pontosturisticos02 + pibpercapita02 + (populacao02 * area02);

    printf("### Bem vindo ao jogo Super Trunfo! ###\n\n");
    printf("Carta 1 - Carta 2\n\n");

    do {    
        printf("Escolha uma das cartas acima: ");
        scanf("%d", &escolhaCarta);

        if (escolhaCarta != 1 && escolhaCarta != 2) {
            printf("\nOpção iválida! Tende Novamente. \n\n");
        }
    } while (escolhaCarta != 1 && escolhaCarta != 2);
    
    //Criação do menu com utilização do switch 

    switch (escolhaCarta)
    {
    case 1:
    printf("\n\nVocê escolheu a carta 1: %s \n\n1. População: %u \n2. Área: %.3f \n3. PIB: %.3f \n4. Pontos Turísticos: %d \n5. Densidade Demográfica: %.2f \n\n", cidade01, populacao01, area01, pib01, pontosturisticos01, densidade01);   
        break;
    case 2:
        printf("\n\nVocê escolheu a carta 2: %s \n\n1. População: %u \n2. Área: %.3f \n3. PIB: %.3f \n4. Pontos Turísticos: %d \n5. Densidade Demográfica: %.2f \n\n", cidade02, populacao02, area02, pib02, pontosturisticos02, densidade02);   
        break;
    }

    do {
        printf("Escolha um atributo para comparar \n\nNúmero do Atributo: ");
        scanf("%d", &escolhaAtributo);

        if (escolhaAtributo < 1 || escolhaAtributo > 5){
            printf("Opção inválida! Tente novamente. \n\n");
        }
    } while (escolhaAtributo < 1 || escolhaAtributo > 5);


    //Criação do menu com utilização do switch e if-else-if

    switch (escolhaAtributo)
    {
    case 1: // População
        printf("\nVocê escolheu o atributo: População\n\n");
        printf("Carta 1 - %s: %u\n", cidade01, populacao01);
        printf("Carta 2 - %s: %u\n\n", cidade02, populacao02);
        if (escolhaCarta == 1 && populacao01 > populacao02) {
            printf("### Sua Carta Venceu!! ###\n");
        } else if (escolhaCarta == 2 && populacao01 < populacao02) {
            printf("### Sua Carta Venceu!! ###\n");
        } else if ((escolhaCarta == 1 || escolhaCarta ==2) && populacao01 == populacao02) {
            printf("### EMPATE!! ###\n");
        } else {
            printf("### Sua Carta Perdeu!! ###"); 
        }
        break;
    case 2: //Area
        printf("\nVocê escolheu o atributo: Área\n\n");
        printf("Carta 1 - %s: %.3f\n", cidade01, area01);
        printf("Carta 2 - %s: %.3f\n\n", cidade02, area02);
        if (escolhaCarta == 1 && area01 > area02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if (escolhaCarta == 2 && area01 < area02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if ((escolhaCarta == 1 || escolhaCarta ==2) && area01 == area02) {
        printf("### EMPATE!! ###\n");
        } else {
        printf("### Sua Carta Perdeu!! ###"); 
        }
        break;
    case 3: //PIB
        printf("\nVocê escolheu o atributo: PIB\n\n");
        printf("Carta 1 - %s: %.3f\n", cidade01, pib01);
        printf("Carta 2 - %s: %.3f\n\n", cidade02, pib02);
        if (escolhaCarta == 1 && pib01 > pib02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if (escolhaCarta == 2 && pib01 < pib02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if ((escolhaCarta == 1 || escolhaCarta ==2) && pib01 == pib02) {
        printf("### EMPATE!! ###\n");
        } else {
        printf("### Sua Carta Perdeu!! ###"); 
        }
        break;
    case 4: //Pontos Turisticos
        printf("\nVocê escolheu o atributo: Pontos Turísticos\n\n");
        printf("Carta 1 - %s: %d\n", cidade01, pontosturisticos01);
        printf("Carta 2 - %s: %d\n\n", cidade02, pontosturisticos02);
        if (escolhaCarta == 1 && pontosturisticos01 > pontosturisticos02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if (escolhaCarta == 2 && pontosturisticos01 < pontosturisticos02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if ((escolhaCarta == 1 || escolhaCarta ==2) && pontosturisticos01 == pontosturisticos02) {
        printf("### EMPATE!! ###\n");
        } else {
        printf("### Sua Carta Perdeu!! ###"); 
        }
        break;
    case 5: //Densidade Demográfica
        printf("\nVocê escolheu o atributo: População\n\n");
        printf("Carta 1 - %s: %.2f\n", cidade01, densidade01);
        printf("Carta 2 - %s: %.2f\n\n", cidade02, densidade02);
        if (escolhaCarta == 1 && densidade01 < densidade02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if (escolhaCarta == 2 && densidade01 > densidade02) {
        printf("### Sua Carta Venceu!! ###\n");
        } else if ((escolhaCarta == 1 || escolhaCarta ==2) && densidade01 == densidade02) {
        printf("### EMPATE!! ###\n");
        } else {
        printf("### Sua Carta Perdeu!! ###"); 
        }
        break;
    }

    return 0;
}