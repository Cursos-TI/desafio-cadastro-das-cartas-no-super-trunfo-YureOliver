#include <stdio.h>

int main(){

    //VARIAVÉIS

    char codigo[20], codigo1[20], cidade[20], cidade1[20];
    int populacao, populacao1, pturistico, pturistico1;
    float area, area1, pib, pib1;

    //ENTRADA DE DADOS CARTA 1

    printf("BEM VINDOS AO JOGO SUPER TRUNFO EM C!\n");
    printf("PARA COMEÇAR, PRECISO QUE VOCÊ ESCOLHA DOIS ESTADOS.\n");
    printf("VAMOS LÁ!\n\n");
    printf("CARTA 1\n");
    printf("NOME DA CIDADE:");
    scanf("%s", cidade);
    printf("QUAL A POPULAÇÃO:");
    scanf("%d", &populacao);
    printf("QUAL A AREA:");
    scanf("%f", &area);
    printf("QUAL O PIB:");
    scanf("%f", &pib);
    printf("QUANTIDADE DE PONTOS TURÍSTICOS:");
    scanf("%d", &pturistico);
    printf("CARTA CADASTRADA!\n\n");

    //ENTRADA DE DADOS CARTA 2

    printf("CARTA 2\n");
    printf("NOME DA CIDADE:");
    scanf("%s", cidade1);
    printf("QUAL A POPULAÇÃO:");
    scanf("%d", &populacao1);
    printf("QUAL A AREA:");
    scanf("%f", &area1);
    printf("QUAL O PIB:");
    scanf("%f", &pib1);
    printf("QUANTIDADE DE PONTOS TURÍSTICOS:");
    scanf("%d", &pturistico1);
    printf("CARTA CADASTRADA!\n\n");

    //SAIDA DE DADOS CARTA 1

    printf(" =§=§=§=§=§= CARTA 1 =§=§=§=§=§= \n\n");
    printf("ESTADO: A\n");
    printf("CODIGO: A01\n");
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("PONTOS TURÍSTICOS: %d\n", pturistico);

    //SAIDA DE DADOS CARTA 2
    
    printf(" \n\n=§=§=§=§=§= CARTA 2 =§=§=§=§=§= \n\n");
    printf("ESTADO: A\n");
    printf("CODIGO: A01\n");
    printf("NOME DA CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pturistico1);


    return 0;
}