#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 


int main() {

    
    printf("*******BEM VINDO AO SUPER TRUNFO*******\n");
    printf("**************** **********************\n");
    printf("**************     ********************\n");
    printf("************         ******************\n");
    printf("**********             ****************\n");
    printf("********                 **************\n");
    printf("*******                   *************\n");
    printf("*******                   *************\n");
    printf("*********               ***************\n");
    printf("***************   *********************\n");
    printf("**************     ********************\n");
    printf("*************       *******************\n");
    printf("***************************************\n \n \n");
    
  
    
 
    //Definição das variaveis a ser usada

    //CARTA 1

    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    //a variavel populacao agora sera armazeanda usando unsined long int
    // int populacao1;
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
   

    //Foi adionado mais duas variaveis ao codigo envolendo calculos
    float densidadePopulacional1;
    float pibPerCapta1;

     //nova variavel super poder
     float superPoderCarta1;

    //CARTA 2

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    //a variavel populacao agora sera armazenada usando unsigned long int
    // int populacao2
    unsigned long int populacao2;
    float area2;
    float pib2; 
    int pontosturisticos2;


    //Foi adicionado mais duas variaveis ao codigo envolvendo calculos
    float densidadePopulacional2;
    float pibPerCapta2;

     //nova variavel super poder
     float superPoderCarta2;

    //Coletando informações das cartas

    //CARTA 1
    printf("CARTA 1 \n");
    printf("Digite a letra representando o estado: ");
    scanf("%s", &estado1);
    printf("Digite o código: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

     // //Aqui será aplicado os calculos carta1
     densidadePopulacional1 = (float)populacao1/area1;
     pibPerCapta1 = pib1/(float)populacao1;
     superPoderCarta1 = ((float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibPerCapta1 + 1.0/densidadePopulacional1);

        //CARTA 2
    printf("\n");    
    printf("CARTA 2 \n");
    printf("Digite a letra representando o estado: ");
    scanf("%s", &estado2);
    printf("Digite o código: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);


   // //Aqui será aplicado os calculos carta2

    densidadePopulacional2 = (float)populacao2/area2;
    pibPerCapta2 = pib2/(float)populacao2;
    superPoderCarta2= ((float)populacao2 + area2 + pib2 + (float)pontosturisticos1 + pibPerCapta2 + 1.0/densidadePopulacional2);

     //COMPARAÇÃO DE CARTAS

    // resultado = carta1 > carta 2;
//    int resultadoComparacaoPopulacao1 = populacao1 > populacao2;
//    int resultadoComparacaoArea1 = area1 > area2;
//    int resultadoComparacaoPib1 = pib1 > pib2;
//    int resultadoComparacaoPontosTuristicos1 = pontosturisticos1 > pontosturisticos2;
//    int resultadoComparacaoDensidade1 = densidadePopulacional1 < densidadePopulacional2;
//    int resultadoComparacaoPibPerCapita1 = pibPerCapta1 > pibPerCapta2;
//    int resultadoComparacaoSuperPoder1 = superPoderCarta1 > superPoderCarta2;

//    int resultadoComparacaoPopulacao2 = populacao2 >populacao1;
//    int resultadoComparacaoArea2 = area2 > area1;
//    int resultadoComparacaoPib2 = pib2 > pib1;
//    int resultadoComparacaoPontosTuristicos2 = pontosturisticos2 > pontosturisticos1;
//    int resultadoComparacaoDensidade2 = densidadePopulacional2 < densidadePopulacional1;
//    int resultadoComparacaoPibPerCapita2 = pibPerCapta2 > pibPerCapta1;
//    int resultadoComparacaoSuperPoder2 = superPoderCarta2 > superPoderCarta1;

  
    // Esta parte do codigo imprimi as informações das cartas coletadas atraves da digitação

    //CARTA 1
    printf("--------------------------------------------------------\n");
    printf("--------------------------------------------------------\n");
    printf("--------------- Informações CARTA1 ---------------------\n");
   
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Numeros de pontos turisticos: %d \n", pontosturisticos1);
    printf("Dencidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapta1);
    printf("Super poder: %.2f\n \n", superPoderCarta1);


    //CARTA 2
    printf("--------------------------------------------------------\n");
    printf("--------------------------------------------------------\n");
    printf("--------------- Informações CARTA2 ---------------------\n");
   
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Numeros de pontos turisticos: %d \n", pontosturisticos2);
    printf("Dencidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapta2);
    printf("Super poder: %.2f\n \n", superPoderCarta2);


   
 //COMPARAÇÃO DE CARTAS USANDO CONDICONAL IF/ELSE
    printf("--------------------------------------------------------\n");
    printf("--------------------------------------------------------\n");
    printf("------------- Comparando ATRIBUTOS ---------------------\n");
   
    if (populacao1 > populacao2)
    {
    printf("Carta 1 tem maior numero de população -- venceu \n");

    }else{

    printf("Carta 2 tem maior numero de população -- venceu \n");
    }
    if (area1 > area2)
    {
    printf("Carta 1 tem a area maior -- venceu \n");

    }else{

    printf("Carta 2 tem a area maior -- venceu \n");
    }
    if (pib1 > pib2)
    {
    printf("Carta 1 tem PIB maior -- venceu \n");

    }else{

    printf("Carta 1 tem PIB maior -- venceu \n");
    }
    if (pontosturisticos1 > pontosturisticos2)
    {
    printf("Carta 1 tem maior numero de pontos turisticos -- venceu \n");

    }else{

    printf("Carta 2 tem maior numero de pontos turisticos -- venceu \n");
    }
    if (densidadePopulacional1 < densidadePopulacional2)
    {
    printf("Carta 1 tem menor densidade populacional -- venceu \n");

    }else{

    printf("Carta 2 tem menor densidade populacional -- venceu \n");
    }
    if (pibPerCapta1 > pibPerCapta2)
    {
    printf("Carta 1 tem maior PIB per Capta -- venceu \n");

    }else{

    printf("Carta 2 tem maior PIB per Capta -- venceu \n \n");
    }
 
//RESULTADO DA CARTA VENCEDORA
// O ATRIBUTO POPULAÇÃO SERA O INDICADOR DA CARTA VENCEDORA NA COMPARAÇÃO
printf("--------------------------------------------------------\n");
printf("--------------------------------------------------------\n");
printf("------ Comparando as CARTAS (Atributo : População) -----\n");
printf("CARTA 1 : %s : %lu \n", cidade1, populacao1);
printf("CARTA 2 : %s : %lu \n \n", cidade2, populacao2);

printf("--------------------------------------------------------\n");
printf("--------------------------------------------------------\n");
printf("--------------------- RESULTADO ------------------------\n");

if(populacao1 > populacao2){

    printf("Carta 1 (%s) - VENCEU !!!", cidade1);

}else{

    printf("Carta 2 (%s) - VENCEU !!!", cidade2);


}


// Imprimindo as comparações das cartas

//    printf("População: carta1 > arta2 (%d)\n", resultadoComparacaoPopulacao);
//    printf("Area: carta1 > carta2 (%d)\n", resultadoComparacaoArea);
//    printf("PIB: carta1 > carta2 (%d)\n", resultadoComparacaoPib);
//    printf("Pontos turisticos: carta1 > carta2 (%d)\n", resultadoComparacaoPontosTuristicos);
//    printf("Densidade: carta1 < carta2 (%d)\n", resultadoComparacaoDensidade);
//    printf("Pib per capta: carta1 é > carta2 (%d)\n", resultadoComparacaoPibPerCapita);
//    printf("Super poder: carta1  > carta2 (%d)\n", resultadoComparacaoSuperPoder);

    // printf("******RESULTADO*******\n");
    // printf("População: CARTA 1 venceu (%d)\n", resultadoComparacaoPopulacao1);
    // printf("População: CARTA 2 venceu (%d)\n", resultadoComparacaoPopulacao2);
    // printf("Area: CARTA 1 venceu (%d)\n", resultadoComparacaoArea1);
    // printf("Area: CARTA 2 venceu (%d)\n", resultadoComparacaoArea2);
    // printf("PIB: CARTA 1 venceu (%d)\n", resultadoComparacaoPib1);
    // printf("PIB: CARTA 2 venceu (%d)\n", resultadoComparacaoPib2);
    // printf("Pontos turisticos: CARTA 1 venceu (%d)\n", resultadoComparacaoPontosTuristicos1);
    // printf("Pontos turisticos: CARTA 2 venceu (%d)\n", resultadoComparacaoPontosTuristicos2);
    // printf("Densidade: CARTA 1 venceu (%d)\n", resultadoComparacaoDensidade1);
    // printf("Densidade: CARTA 2 venceu (%d)\n", resultadoComparacaoDensidade2);
    // printf("Pib per capta: CARTA 1 venceu (%d)\n", resultadoComparacaoPibPerCapita1);
    // printf("Pib per capta: CARTA 2 venceu (%d)\n", resultadoComparacaoPibPerCapita2);
    // printf("Super poder: CARTA 1 venceu (%d)\n", resultadoComparacaoSuperPoder1);
    // printf("Super poder: CARTA 2 venceu (%d)\n", resultadoComparacaoSuperPoder2);
   

//Exemplos de dados de entrada para testes

// Estado: A
// Código: A01
// Cidade: Fortaleza
// População: 2700000
// Área: 313.8
// PIB: 65300000000
// Número de pontos turísticos: 30

// Estado: B
// Código: B01
// Cidade: Salvador
// População: 2900000
// Área (em km²): 693.0
// PIB: 73000000000
// Número de pontos turísticos: 30


    return 0;
}
   
