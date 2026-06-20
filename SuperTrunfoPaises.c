#include <stdio.h>

    int main() {
    char cod2 [5] = "B02";
    char cod1 [5] = "A01";
    char pais1 [50] = "Brasil";
    char pais2 [50] = "Russia";
    long long  p1 = 213400000;
    long long p2 = 146000000;
    float a1 = 8515767;
    float a2 = 17098246;
    int pt1 = 3033;
    int pt2 = 4500;
    float PIB1 = 2.64;
    float PIB2 = 2.66;
    float dp1 = (p1 / a1);
    float dp2 = (p2 / a2);
    int atributo;

        //printf("Codigo da Carta: %s \n", cod1);
        //printf("Pais: %s \n", pais1);
        //printf("População: %d \n", p1);
        //printf("Area: %.3f km² \n", a1);
        //printf("PIB: %.2f  \n", PIB1);
        //printf("Pontos Turisticos: %d \n", pt1);

        //printf(" -----------------------------------\n\n");

        //printf("Codigo da Carta: %s \n", cod2);
        //printf("Pais: %s \n", pais2);
        //printf("População: %d \n", p2);
        //printf("Area: %.3f km² \n", a2);
        //printf("PIB: %.2f  \n", PIB2);
        //printf("Pontos Turisticos: %d \n", pt2);

        //printf(" -----------------------------------\n\n");

        printf("1 - População \n");
        printf("2 - Area km² \n");  
        printf("3 - PIB \n");
        printf("4 - Pontos Turisticos \n");
        printf("5 - Densidade Populacional \n");
        printf("6 - Escolha o atributo: \n");
        scanf("%d", &atributo);

        switch (atributo) {
        case 1: 
            printf("Atributo: População \n");
            printf("Carta 1 - %s: %d \n", &pais1,p1);
            printf("Carta 2 - %s: %d\n", &pais2,p2);

        if (p1 > p2) {
            printf("Carta 1 - %s Venceu!!", &pais1);
        } else if (p2 > p1) {
            printf("Carta 2 - %s Venceu!!", &pais2);
        } else {
            printf("Houve um empate!!");
        } break;

        case 2: 
            printf("Atributo: Area km² \n");
            printf("Carta 1 - %s: %.2fkm²\n", &pais1,a1);
            printf("Carta 2 - %s: %.2fkm²\n", &pais2,a2);

        if (a1 > a2) {
            printf("Carta 1 - %s Venceu!!", &pais1);
        } else if (a2 > a1) {
            printf("Carta 2 - %s Venceu!!", &pais2);
        } else {
            printf("Houve um empate!!");
        } break;

        case 3: 
            printf("Atributo: PIB \n");
            printf("Carta 1 - %s: %.2f \n", &pais1,PIB1);
            printf("Carta 2 - %s: %.2f \n", &pais2,PIB2);

        if (PIB1 > PIB2) {
            printf("Carta 1 - %s Venceu!!", &pais1);
        } else if (PIB2 > PIB1) {
            printf("Carta 2 - %s Venceu!!", &pais2);
        } else {
            printf("Houve um empate!!");
        } break;

        case 4: 
            printf("Atributo: Pontos Turisticos \n");
            printf("Carta 1 - %s: %d \n", &pais1,pt1);
            printf("Carta 2 - %s: %d\n", &pais2,pt2);

        if (pt1 > pt2) {
            printf("Carta 1 - %s Venceu!!", &pais1);
        } else if (pt2 > pt1) {
            printf("Carta 2 - %s Venceu!!", &pais2);
        } else {
            printf("Houve um empate!!");
        } break;

        case 5: 
            printf("Atributo: Densidade Populacional \n");
            printf("Carta 1 - %s: %.2f \n", &pais1,dp1);
            printf("Carta 2 - %s: %.2f\n", &pais2,dp2);

        if (dp1 < dp2) {
            printf("Carta 1 - %s Venceu!!", &pais1);
        } else if (dp2 < dp1) {
            printf("Carta 2 - %s Venceu!!", &pais2);
        } else {
            printf("Houve um empate!!");
        } break;

        default:
            printf("Opção invalida!!");
        
    }
        

}
       
        
        
        

    
        
    
    
