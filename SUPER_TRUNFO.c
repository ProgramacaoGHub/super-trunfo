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
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", nome1);
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("População: %f\n", populacao1);
    printf ("Área: %f km²\n",area1);
    printf ("PIB: %f milhões de reais\n",PIB1);
    printf ("Número de Pontos Turísticos: %i\n",pontosTuristicos1);
    printf ("\n");
 
    //INFORMAÇÕES DA CARTA 2:
     printf ("CARTA 2\n");
     char estado2 = 'B';
     char nome2[5]= "A02";
     char cidade2 [50] = "Batatais";
     float populacao2 = 1000;
     float area2 = 850.718;
     float PIB2 =  2.42;
     int pontosTuristicos2 = 15;
 
     //SAIDA DOS DADOS DA CARTA 2:
     printf ("Estado: %c\n", estado2);
     printf ("Código: %s\n", nome2);
     printf ("Nome da cidade: %s\n", cidade2);
     printf ("População: %f\n", populacao2);
     printf ("Área: %f km²\n",area2);
     printf ("PIB: %f Bilhões de reais\n",PIB2);
     printf ("Número de Pontos Turísticos: %i\n",pontosTuristicos2);
    
    return 0;
}