#include <stdio.h>
    int main(){
        char codigocarta[5];
        char inicialestado;
        char nomedacidade[20];
        unsigned int populacao;
        short int pontosturisticos;
        float area;
        float PIB;
        float densidadepop;
        float PIBpercap;

        printf("digite o codigo da carta:\n");
        scanf("%s", codigocarta);
        printf("digite a inicial do estado:\n");
        scanf(" %c", &inicialestado);
        printf("digite o nome da cidade:\n");
        scanf("%s", nomedacidade);
        printf("digite a quantidade da populaçao da cidade:\n");
        scanf("%u", &populacao);
        printf("digite a quantidade de pontos turisticos:\n");
        scanf("%d", &pontosturisticos);
        printf("digite a area da cidade:\n");
        scanf("%f", &area);
        printf("digite o PIB da cidade:\n");
        scanf("%f", &PIB);
        densidadepop = populacao/area;
        PIBpercap = populacao/PIB;

        printf("o codigo da cidade é: %s", codigocarta);
        printf("a inicial do estado da cidade é: %c", inicialestado);
        printf("o nome da cidade é: %s", nomedacidade);
        printf("a quantidade da população da cidade é: %u hab", populacao);
        printf("a quantidade de pontos turisticos da cidade é: %d", pontosturisticos);
        printf("a area da cidade é: %.2f km²", area);
        printf("o PIB da cidade é: R$ %.2f milhoes", PIB);
        printf("a densidade populacional da cidade: %.2f hab/km²\n", densidadepop);
        printf("o PIB per capital da cidade é: %.2f", PIBpercap);

        return 0;
    }
