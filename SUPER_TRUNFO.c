#include <stdio.h>

int main() {
    printf ("SUPER TRUNFO/CARTAS\n");
    printf ("\n");
    //INFORMAÇÕES DA CARTA 1:
    printf ("CARTA 1\n");
    char estado1 = 'A';
    char nome1[5]= "A00";
    char cidade1 [50] = "Anhanguera";
    float populacao1 = 1000;
    float area1 = 33.3;
    float PIB1 = 21.7;
    int pontosTuristicos1 = 10;

    //SAIDA DOS DADOS DA CARTA 1:
    printf (" Digite uma letra de 'A' a 'H' Para o Estado:\n" );
    scanf ("%c", &estado1);
    printf ("Estado: %c\n", estado1);

    printf ("Digite um codigo Código com 3 caracteres:\n");
    scanf ("%s", &nome1);
    printf ("Código: %s\n", nome1);

    printf ("Digite o Nome da cidade:\n");
    scanf("%s", &cidade1);
    printf ("Cidade: %s\n", cidade1);

    printf ("Digite o numero de Habitentes:\n");
    scanf ("%f", &populacao1);
    printf ("População: %f\n", populacao1);

    printf ("Digite a Área da Cidade:\n");
    scanf ("%f", &area1);
    printf ("Área: %f km²\n", area1);


    printf ("Digite o PIB da Cidade:\n");
    scanf ("%f", &populacao1);
    printf ("PIB: %f reais\n", populacao1);


   printf ("Digite o Número de Pontos Turísticos:\n");
   scanf ("%i", &pontosTuristicos1);
   printf ("Pontos Turísticos: %i\n", pontosTuristicos1);
   printf ("\n");
    
   printf ("CARTA 2\n");
   char estado2 = 'A';
   char nome2[3]= "A00";
   char cidade2 [50] = "Anhanguera";
   float populacao2 = 1000;
   float area2 = 33.3;
   float PIB2 = 21.7;
   int pontosTuristicos2 = 10;

   //SAIDA DOS DADOS DA CARTA 2:
   printf (" Digite uma letra de 'A' a 'H' Para o Estado:\n" );
   scanf ("%c", &estado2);
   printf ("Estado: %c\n", estado2);

   printf ("Digite um codigo Código com 3 caracteres:\n");
   scanf("%s", &nome2);
   printf ("Código: %s\n", nome2);

   printf ("Digite o Nome da cidade:\n");
   scanf("%s", &cidade2);
   printf ("Cidade: %s\n", cidade2);

   printf ("Digite o numero de Habitentes:\n");
   scanf ("%f", &populacao2);
   printf ("População: %f\n", populacao2);

   printf ("Digite a Área da Cidade:\n");
   scanf ("%f", &area2);
   printf ("Área: %f km²\n", area2);


   printf ("Digite o PIB da Cidade:\n");
   scanf ("%f", &populacao2);
   printf ("PIB: %f reais\n", populacao2);


  printf ("Digite o Número de Pontos Turísticos:\n");
  scanf ("%i", &pontosTuristicos2);
  printf ("Pontos Turísticos: %i\n", pontosTuristicos2);


    return 0;
}