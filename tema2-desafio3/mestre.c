#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
    int opcao1, opcao2;  
    int resultado1, resultado2;
    //float SUPER_PODER1 = 0.0;

    // Entrada de dados
    printf("Digite uma letra de 'A' a 'H' Para o Estado:\n");
    scanf("%c", &estado1);
    printf("Estado: %c\n", estado1);

    printf("Digite um código com 3 caracteres:\n");
    scanf("%s", nome1);
    printf("Código: %s\n", nome1);

    getchar(); // Limpa o buffer do teclado
    printf("Digite o Nome da cidade:\n");
    fgets(cidade1, 50, stdin);
    printf("Cidade: %s", cidade1);

    printf("Digite o número de Habitantes:\n");
    scanf("%d", &populacao1);
    printf("População: %d Habitantes\n", populacao1);

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

   getchar(); // Limpa o buffer do teclado
   printf ("Digite o Nome da cidade:\n");
   fgets(cidade2, 50, stdin);
   printf ("Cidade: %s", cidade2);

   printf ("Digite o numero de Habitentes:\n");
   scanf ("%d", &populacao2);
   printf ("População: %d Habitantes\n", populacao2);

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


//MENU INTERATIVO (carta 1 e carta 2)
printf ("Opções para Comparar as Cartas:\n");
printf( "1. Nome da Cidade \n");
printf( "2. População \n");
printf( "3. Área  \n");
printf( "4. PIB  \n");
printf( "5. Número de pontos turísticos  \n");
printf( "6. Densidade demográfica   \n");

//escolha da primira opção para comparação
printf( "Escolha a primeira opção:");
scanf("%d", &opcao1);

//escolha da segunda opção para comparação
printf("escolha a segunda opção:");
scanf("%d", &opcao2);
printf("\n");

// logica para que o jogador não possa selecionar o mesmo atributo duas vezes.
if((opcao1 == opcao2) && (opcao2==opcao1)){
    printf("Escolha opções diferentes para comparar as cartas.\n");
    printf("Escolha a primeira opção:");
    scanf("%d", &opcao1);
    printf("escolha a segunda opção:");
    scanf("%d", &opcao2);
} else {
    printf("Opções escolhidas: %d e %d\n", opcao1, opcao2);
}

//cidade1 VS cidade2
printf("%s vs %s\n", cidade1, cidade2);

// Comparação das cartas opção1
switch(opcao1) {
    case 1:
    printf("voce escolheu Nome da Cidade\n");
    printf("CARTA 1 = %s vs CARTA 2 = %s\n", cidade1, cidade2);
    resultado1= cidade1 > cidade2 ? 1:0;
        break;
     case 2:
     printf("voce escolheu População\n");
     printf("CARTA 1 = %d vs CARTA 2 = %d\n", populacao1, populacao2);
    resultado1= populacao1 > populacao2 ? 1:0;
    break;
    case 3:
    printf("voce escolheu Área\n");
    printf("CARTA 1 = %.2f vs CARTA 2 = %.2f\n", area1, area2);
    resultado1=     area1 > area2 ? 1:0;
        break;
    case 4:
    printf("voce escolheu PIB\n");
    printf("CARTA 1 = %.2f vs CARTA 2 = %.2f\n", PIB1, PIB2);
    resultado1=   PIB1 > PIB2 ? 1:0;
        break;
    case 5:
    printf("voce escolheu Pontos Turisticos\n");
    printf("CARTA 1 = %d vs CARTA 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
    resultado1=   pontosTuristicos1 > pontosTuristicos2 ? 1:0;
        break;
    case 6:
    printf("voce escolheu Densidade\n");
    printf("CARTA 1 = %.2f vs CARTA 2 = %.2f\n", densidade1, densidade2);
    resultado1 =  densidade1 < densidade2 ? 1:0;
        break;
    default:
    resultado1=  printf("Opção inválida.\n");
        break;
}


// Comparação das cartas opção2
switch(opcao2) {
    case 1:
    printf("voce escolheu Nome da Cidade\n");
    printf("CARTA 1 = %s vs CARTA 2 = %s\n", cidade1, cidade2);
    resultado2= cidade1 > cidade2 ? 1:0;
        break;
     case 2:
     printf("voce escolheu População\n");
     printf("CARTA 1 = %d vs CARTA 2 = %d\n", populacao1, populacao2);
    resultado2= populacao1 > populacao2 ? 1:0;
    break;
        break;
    case 3:
    printf("voce escolheu Área\n");
    printf("CARTA 1 = %.2f vs CARTA 2 = %.2f\n", area1, area2);
    resultado2=     area1 > area2 ? 1:0;
        break;
    case 4:
    printf("voce escolheu PIB\n");
    printf("CARTA 1 = %.2f vs CARTA 2 = %.2f\n", PIB1, PIB2);
    resultado2=   PIB1 > PIB2 ? 1:0;
        break;
    case 5:
    printf("voce escolheu Pontos Turisticos\n");
    printf("CARTA 1 = %d vs CARTA 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
    resultado2=   pontosTuristicos1 > pontosTuristicos2 ? 1:0;
        break;
    case 6:
    printf("voce escolheu Densidade\n");
    printf("CARTA 1 = %.2f vs CARTA 2 = %.2f\n", densidade1, densidade2);
    resultado2 =  densidade1 < densidade2 ? 1:0;
        break;
    default:
    resultado2=  printf("Opção inválida.\n");
        break;
}

if(resultado1 && resultado2 ) {
    printf("A carta 1 VENCEU!\n");
} else if(resultado1 !=resultado2 ) {
    printf("EMPATOU!\n");
} else {
    printf(" A carta 2 VENCEU!!.\n");
}



return 0;
}