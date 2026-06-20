#include <stdio.h>

    int main() {

    char e1 [50];
    char e2 [50];
    char c1 [50];
    char c2 [50];
    char cod1 [50] = "A01";
    char cod2 [50] = "B02";
    unsigned long int p1;
    unsigned long int p2;
    float a1;
    float a2;
    float PIB1;
    float PIB2;
    int pt1;
    int pt2;
    float ppc1;
    float ppc2; 
    float dp1;
    float dp2;
    
        
        printf("Codigo da Carta: %s \n", cod1);

        printf("Digite o nome do Estado: \n");
        scanf("%s", e1);

        printf("Digite o nome da Cidade: \n");
        scanf("%s", c1);

        printf("Digite a População da Cidade: \n");
        scanf("%lu", &p1);

        printf("Digite a Area em km² da Cidade: \n");
        scanf("%f", &a1);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &PIB1);

        printf("Digite a quantidade de Pontos turisticos da Cidade: \n");
        scanf("%d", &pt1); 

        printf(" -----------------------------------\n");


    
        printf("Codigo da Carta: %s \n", cod2);

        printf("Digite o nome do Estado: \n");
        scanf("%s", e2);

        printf("Digite o nome da Cidade: \n");
        scanf("%s", c2);

        printf("Digite a População da Cidade: \n");
        scanf("%lu", &p2);

        printf("Digite a Area em km² da Cidade: \n");
        scanf("%f" , &a2);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &PIB2);

        printf("Digite a quantidade de Pontos turisticos da Cidade: \n");
        scanf("%d", &pt2);

        printf(" -----------------------------------\n\n");
        printf(" -----------------------------------\n\n");
        
        ppc1 = (float)PIB1 / p1;
        ppc2 = (float)PIB2 / p2;
        dp1 = (float)p1 / a1;
        dp2 = (float)p2 / a2;
        unsigned long int sp1 = (p1 + a1 + PIB1 + pt1 + dp1 + ppc1);
        unsigned long int sp2 = (p2 + a2 + PIB2 + pt2 + dp2 + ppc2);
        



        printf("Codigo: %s \n", cod1);
        printf("Estado: %s \n", e1);
        printf("Cidade: %s \n", c1);
        printf("População: %lu \n", p1);
        printf("Area: %.3f km² \n", a1);
        printf("PIB: %.2f  \n", PIB1);
        printf("Pontos Turisticos: %d \n", pt1);
        printf("Densidade Populacional: %.2f \n",dp1);
        printf("PIB per capita: %.2f \n",ppc1);
        printf("Super poder: %lu \n", sp1);
        printf("------------------------------------\n\n");
        printf("Codigo: %s \n", cod2);
        printf("Estado: %s \n", e2);
        printf("Cidade: %s \n", c2);
        printf("População: %lu \n", p2);
        printf("Area: %.3f km² \n", a2);
        printf("PIB: %.2f  \n", PIB2);
        printf("Pontos Turisticos: %d \n", pt2);
        printf("Densidade Populacional: %.2f \n",dp2);
        printf("PIB per capita: %.2f \n",ppc2);
        printf("Super poder: %lu \n", sp2);

        printf(" -----------------------------------\n\n");
        printf("Comparação das cartas: \n");
        printf("População: Carta 1 venceu (%d)  \n", p1 > p2);   
        printf("Area: Carta 1 venceu (%d)  \n", a1 > a2);
        printf("PIB: Carta 1 venceu (%d)  \n", PIB1 > PIB2);
        printf("Pontos Turisticos: Carta 1 venceu (%d)  \n", pt1 > pt2);
        printf("Densidade Populacional: Carta 1 venceu (%d)  \n", dp1 < dp2);
        printf("PIB per capita: Carta 1 venceu (%d)  \n", ppc1 > ppc2);
        printf("Super poder: Carta 1 venceu (%d)  \n", sp1 > sp2);
        printf("----------------------------------------------\n\n");

        printf("1 - População\n");
        printf("2 - Area em km²\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        printf("Super poder\n");
        
        
        printf("Atributo: PIB \n");
        printf("Carta 1: %s: %.2f \n", e1,PIB1);
        printf("Carta 2: %s: %.2f \n", e2,PIB2);
        
        

        



    }