#include <stdio.h>

int main(){

    char Estado[3], Estado2 [10];
    char Codigodacarta[60], Codigodacarta2[60], Nomedacidade[60], Nomedacidade2[60];
    int Populacao, Populacao2, numerodepontosturisticos, numerodepontosturisticos2;
    float Area, Area2, PIB, PIB2;

    // Entre com valores da Carta

    printf("Digite o Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigodacarta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nomedacidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    // resultado dos valores 

    printf("Resultado Carta 1 \n");
    printf("Estado: %s \n", Estado);
    printf("Codigodacarta: %s \n", Codigodacarta);
    printf("Nomedacidade: %s \n", Nomedacidade);
    printf("Populacao: %d  \n", Populacao);
    printf("Area: %.2f Km²\n", Area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Numerodepontosturisticos: %d \n", numerodepontosturisticos);

     // Entre com valores da Carta2

     printf("Digite o Estado2: \n");
     scanf("%s", Estado2);
 
     printf("Digite o Código da Carta2: \n");
     scanf("%s", Codigodacarta2);
 
     printf("Digite o Nome da Cidade2: \n");
     scanf("%s", Nomedacidade2);
 
     printf("Digite a População2: \n");
     scanf("%d", &Populacao2);
 
     printf("Digite a Área2: \n");
     scanf("%f", &Area2);
 
     printf("Digite o PIB2: \n");
     scanf("%f", &PIB2);
 
     printf("Digite o número de Pontos Turísticos2: \n");
     scanf("%d", &numerodepontosturisticos2);

      // resultado dos valores2 

    printf("Resultado Carta 2 \n");
    printf("Estado: %s \n", Estado2);
    printf("Codigodacarta: %s \n", Codigodacarta2);
    printf("Nomedacidade: %s \n", Nomedacidade2);
    printf("Populacao: %d  \n", Populacao2);
    printf("Area: %.2f Km²\n", Area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Numerodepontosturisticos: %d \n", numerodepontosturisticos2);




    return 0;



}