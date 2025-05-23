#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


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

    //Variavel criada para somar valores dos atributos nos menus
    int carta1valor1;
    int carta1valor2;
    int carta2valor1;
    int carta2valor2;
    
    // variaveis
    int escolhaAtributo1;
    int escolhaAtributo2;

    //CARTA 1

    char estado1[20];
    char codigo1[20] ;
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
    char cidade2[20] ;
    //a variavel populacao agora sera armazenada usando unsigned long int
    // int populacao2
    unsigned long int populacao2;
    float area2;
    float pib2; 
    int pontosturisticos2;


    //Foi adicionado mais duas variaveis ao codigo envolendo calculos
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
    superPoderCarta2= ((float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibPerCapta2 + 1.0/densidadePopulacional2);

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
    printf("\n");
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
    printf("\n");
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




    printf("\n");
    printf("--------------------------------------------------------\n");
    printf("--------------------- ATRIBUTOS ------------------------\n");

    //MENUS DE ESCOLHAS

    printf("Escolha o primeiro atributo para duelar: \n");
    printf("1 - POPULAÇÃO: \n");
    printf("2 - ÁREA: \n");
    printf("3 - PIB: \n");
    printf("4 - NUMEROS DE PONTOS TURISTICOS: \n");
    printf("5 - DENSIDADE DEMOGRÁFICA: \n");    
    printf("ESCOLHA 1: ");  
    scanf("%d", &escolhaAtributo1);

    printf("\n");
   
    printf("Escolha o segundo atributo para duelar: \n");
    
    if(escolhaAtributo1 == 1){
        printf("2 - ÁREA: \n");
        printf("3 - PIB: \n");
        printf("4 - NUMEROS DE PONTOS TURISTICOS: \n");
        printf("5 - DENSIDADE DEMOGRÁFICA: \n");
    } else if(escolhaAtributo1 == 2 ){
        printf("1 - POPULAÇÃO: \n");
        printf("3 - PIB: \n");
        printf("4 - NUMEROS DE PONTOS TURISTICOS: \n");
        printf("5 - DENSIDADE DEMOGRÁFICA: \n");

    } else if (escolhaAtributo1 == 3){
        printf("1 - POPULAÇÃO: \n");
        printf("2 - ÁREA: \n");
        printf("4 - NUMEROS DE PONTOS TURISTICOS: \n");
        printf("5 - DENSIDADE DEMOGRÁFICA: \n");
    } else if (escolhaAtributo1 == 4)
    {
        printf("1 - POPULAÇÃO: \n");
        printf("2 - ÁREA: \n");
        printf("3 - PIB: \n");
        printf("5 - DENSIDADE DEMOGRÁFICA: \n");
    } else if (escolhaAtributo1 == 5)
    {
        printf("1 - POPULAÇÃO: \n");
        printf("2 - ÁREA: \n");
        printf("3 - PIB: \n");
        printf("4 - NUMEROS DE PONTOS TURISTICOS: \n");
        
    }else{
        printf("Opção invalida");
    }
        

    printf("ESCOLHA 2: ");  
    scanf("%d", &escolhaAtributo2);

       
    printf("\n");
    printf("--------------------------------------------------------\n");
    printf("-------------- Resultado da Comparação -----------------\n\n");

    switch (escolhaAtributo1) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            carta1valor1 = populacao1;
            carta2valor1 = populacao2;
            if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao1 < populacao2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            carta1valor1 = area1;
            carta2valor1 = area2;
            if (area1 > area2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (area1 < area2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            carta1valor1 = pib1;
            carta2valor1 = pib2;
            if (pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pib1 < pib2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontosturisticos1);
            printf("%s: %d\n", cidade2, pontosturisticos2);
            carta1valor1 = pontosturisticos1;
            carta2valor1 = pontosturisticos2;
            if (pontosturisticos1 > pontosturisticos2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pontosturisticos1 < pontosturisticos2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
        
        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f\n", cidade1, densidadePopulacional1);
            printf("%s: %.2f\n", cidade2, densidadePopulacional2);
            carta1valor1 = densidadePopulacional1;
            carta2valor1 = densidadePopulacional2;
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (densidadePopulacional1 > densidadePopulacional2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
            
    default: printf("Opção invalida");
        break;
    }

    printf("\n");
    printf("\n");


    switch (escolhaAtributo2) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            carta1valor2 = populacao1;
            carta2valor2 = populacao2;
            if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao1 < populacao2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            carta1valor2 = area1;
            carta2valor2 = area2;
            if (area1 > area2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (area1 < area2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            carta1valor2 = pib1;
            carta2valor2 = pib2;
            if (pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pib1 < pib2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontosturisticos1);
            printf("%s: %d\n", cidade2, pontosturisticos2);
            carta1valor2 = pontosturisticos1;
            carta2valor2 = pontosturisticos2;
            if (pontosturisticos1 > pontosturisticos2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pontosturisticos1 < pontosturisticos2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f\n", cidade1, densidadePopulacional1);
            printf("%s: %.2f\n", cidade2, densidadePopulacional2);
            carta1valor2 = densidadePopulacional1;
            carta2valor2 = densidadePopulacional2;
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (densidadePopulacional1 > densidadePopulacional2)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;
            
    default: printf("Opção invalida");
        break;
    }
// CRIADO VARIAVEL PARA SOMAR OS ATRIBUTOS 
    float somaDosAtributosCarta1 = carta1valor1 + carta1valor2;
    float somaDosAtributosCarta2 = carta2valor1 + carta2valor2;
// SOMA DOS ATRIBUTOS

printf("\n");
printf("--------------------------------------------------------\n");
printf("---------------- SOMA DOS ATRIBUTOS -------------------\n\n");
    
    printf("%s : %.2f \n", cidade1, somaDosAtributosCarta1);
    printf("%s : %.2f \n", cidade2, somaDosAtributosCarta2);

printf("\n");
printf("--------------------------------------------------------\n");
printf("-------------------- VENCEDOR---------------------------\n");

    if (somaDosAtributosCarta1 > somaDosAtributosCarta2)
    {
        printf("              =======================              \n");
        printf("                    %s !!!\n", cidade1);
        printf("              =======================              \n");

    } else if( somaDosAtributosCarta2 > somaDosAtributosCarta1){

        printf("              =======================              \n");
        printf("                    %s !!!\n", cidade2);
        printf("              =======================              \n");

    } else if (somaDosAtributosCarta1 == somaDosAtributosCarta2){

        printf("=======================\n");
        printf(" EMPATE");
        printf("=======================\n");
    }
    
// SAIDA FORMATADA

// printf("==============================================================\n");
// printf("%s X %s\n", cidade1, cidade2);
// printf("%s: %d\n", cidade1, );
// printf("%s: %d\n", escolhaAtributo1);
   
   
 //COMPARAÇÃO DE CARTAS USANDO CONDICONAL IF/ELSE
    // printf("--------------------------------------------------------\n");
    // printf("--------------------------------------------------------\n");
    // printf("------------- Comparando ATRIBUTOS ---------------------\n");
   
    // if (populacao1 > populacao2)
    // {
    // printf("Carta 1 tem maior numero de população -- venceu \n");

    // }else{

    // printf("Carta 2 tem maior numero de população -- venceu \n");
    // }
    // if (area1 > area2)
    // {
    // printf("Carta 1 tem a area maior -- venceu \n");

    // }else{

    // printf("Carta 2 tem a area maior -- venceu \n");
    // }
    // if (pib1 > pib2)
    // {
    // printf("Carta 1 tem PIB maior -- venceu \n");

    // }else{

    // printf("Carta 1 tem PIB maior -- venceu \n");
    // }
    // if (pontosturisticos1 > pontosturisticos2)
    // {
    // printf("Carta 1 tem maior numero de pontos turisticos -- venceu \n");

    // }else{

    // printf("Carta 2 tem maior numero de pontos turisticos -- venceu \n");
    // }
    // if (densidadePopulacional1 < densidadePopulacional2)
    // {
    // printf("Carta 1 tem menor densidade populacional -- venceu \n");

    // }else{

    // printf("Carta 2 tem menor densidade populacional -- venceu \n");
    // }
    // if (pibPerCapta1 > pibPerCapta2)
    // {
    // printf("Carta 1 tem maior PIB per Capta -- venceu \n");

    // }else{

    // printf("Carta 2 tem maior PIB per Capta -- venceu \n \n");
    // }
 
//RESULTADO DA CARTA VENCEDORA
// O ATRIBUTO POPULAÇÃO SERA O INDICADOR DA CARTA VENCEDORA NA COMPARAÇÃO
// printf("--------------------------------------------------------\n");
// printf("--------------------------------------------------------\n");
// printf("------ Comparando as CARTAS (Atributo : População) -----\n");
// printf("CARTA 1 : %s : %d \n", cidade1, escolhaAtributo);
// printf("CARTA 2 : %s : %d \n \n", cidade2, escolhaAtributo);

// printf("--------------------------------------------------------\n");
// printf("--------------------------------------------------------\n");
// printf("--------------------- RESULTADO ------------------------\n");

// if(populacao1 > populacao2 || area1 > area2 || pib1 > pib2 || pontosturisticos1 > pontosturisticos2 || densidadePopulacional1 < densidadePopulacional2){

//     printf("Carta 1 (%s) - VENCEU !!!", cidade1);

// }else{

//     printf("Carta 2 (%s) - VENCEU !!!", cidade2);


// }


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
   
