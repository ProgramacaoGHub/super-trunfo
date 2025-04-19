#include <stdio.h>

int main() {
    printf("SUPER TRUNFO/CARTAS\n");

    // Variáveis da carta 1
    char estado1 = 'A';
    char nome1[5] = "A00";
    char cidade1[50] = "cidade";
    int populacao1 = 0;
    float area1 = 0.0;
    float PIB1 = 0.0;
    int pontosTuristicos1 = 0;
    //float SUPER_PODER1 = 0.0;

    // Entrada de dados
    printf("Digite uma letra de 'A' a 'H' Para o Estado:\n");
    scanf("%c", &estado1);
    printf("Estado: %c\n", estado1);

    printf("Digite um código com 3 caracteres:\n");
    scanf("%s", nome1);
    printf("Código: %s\n", nome1);

    printf("Digite o Nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Cidade: %s\n", cidade1);

    printf("Digite o número de Habitantes:\n");
    scanf("%d", &populacao1);
    printf("População: %d\n", populacao1);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area1);
    printf("Área: %.2f km²\n", area1);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &PIB1); 
    printf("PIB: %.2f reais\n", PIB1);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%i", &pontosTuristicos1);
    printf("Pontos Turísticos: %i\n", pontosTuristicos1);

    // Cálculos
    float densidade1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);

    float PIBpercapita1 = PIB1 / populacao1;
    printf("PIB per capita: %.2f reais\n", PIBpercapita1);
    printf("\n");

   //float SUPER_PODER1= populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBpercapita1 - densidade1 ;


    //INFORMAÇÕES DA CARTA 2:
   printf ("CARTA 2\n");
   char estado2 = 'A';
   char nome2[3]= "A00";
   char cidade2 [50] = "cidade";
   int populacao2 = 0;
   float area2 = 0.0;
   float PIB2 = 0.0;
   int pontosTuristicos2 = 0;
   //float SUPER_PODER2= 0.0;

   //SAIDA DOS DADOS DA CARTA 2:
   printf (" Digite uma letra de 'A' a 'H' Para o Estado:\n" );
   scanf (" %c", &estado2);
   printf ("Estado: %c\n", estado2);

   printf ("Digite um codigo Código com 3 caracteres:\n");
   scanf("%s", &nome2);
   printf ("Código: %s\n", nome2);

   printf ("Digite o Nome da cidade:\n");
   scanf("%s", &cidade2);
   printf ("Cidade: %s\n", cidade2);

   printf ("Digite o numero de Habitentes:\n");
   scanf ("%d", &populacao2);
   printf ("População: %d\n", populacao2);

   printf ("Digite a Área da Cidade:\n");
   scanf ("%f", &area2);
   printf ("Área: %.2f km²\n", area2);


   printf ("Digite o PIB da Cidade:\n");
   scanf ("%f", &PIB2);
   printf ("PIB: %.2f reais\n", PIB2);


  printf ("Digite o Número de Pontos Turísticos:\n");
  scanf ("%i", &pontosTuristicos2);
  printf ("Pontos Turísticos: %i\n", pontosTuristicos2);

     //CALCULOS DA DENSIDAEDE POPULACIONAL:
  float densidade2 = populacao2 / area2;
  printf ("Densidade Populacional: %.2f habitantes/km²\n", densidade2);

     // CALCULO DO PIB PER CAPITA:
  float PIBpercapita2 = PIB2 / populacao2;
  printf ("PIB per capita: %.2f\n", PIBpercapita2);
  printf ("\n");
//float SUPER_PODER1= populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBpercapita2 - densidade2 ;


//COMPARAÇÃO ENTRE POPULAÇÃO (carta 1 e carta 2) 
if(populacao1 > populacao2){
   printf("População carta1 (%s) venceu!\n" , cidade1);
} else {
   printf ("População carta2 (%s) venceu!\n" , cidade2);
}

return 0;
}