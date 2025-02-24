#include <stdio.h>

struct Carta {
    char estado;           
    char codigo[5];       
    char nomeCidade[50];     
    int populacao;         
    float area;             
    float pib;              
    int pontosTuristicos;    
};

void imprimirCarta(struct Carta carta) 

{
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("\n");
}

int main() {
    struct Carta carta1, carta2;

    // Entrada dos dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);  
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    printf("\n");

  
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);  
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    printf("\n");

    
    printf("Carta 1:\n");
    imprimirCarta(carta1);

    printf("Carta 2:\n");
    imprimirCarta(carta2);
  

    return 0;
}
