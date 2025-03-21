#include <stdio.h>

int main(){
    //Funções e variaveis da cartas.
    int populacao1,populacao2,pontoturistico1,pontoturistico2,escolhaJogador1,escolhajogador2;
    float area1,area2,pib1,pib2,densidadepopulacional1,pibpercapita1,densidadepopulacional2,pibpercapita2;
    char estado1[50]="Rio de janeiro",estado2[50]="Sao paulo",codigo1[4]="a01",codigo2[4]="b02",cidade1[20],cidade2[20];
    
 
    //Dados para usuario colocar da carta 1.
    printf("***PRIMEIRA CARTA***\n");

    printf("Digite os dados da primeira carta:\n");

    printf("Qual cidade:\n");
    scanf("%s", &cidade1);
    
    printf("Qual a área:\n");
    scanf("%f", &area1);

    printf("Qual o PIB:\n");
    scanf("%f", &pib1);

    printf("Qual a população:\n");
    scanf("%d", &populacao1);

    printf("Quantos pontos turisticos:\n");
    scanf("%d", &pontoturistico1);

     //Dados para usuario colocar da carta 2.
     printf("***SEGUNDA CARTA***\n");

     printf("Digite os dados da segunda carta:\n");
     
     printf("Qual cidade:\n");
     scanf("%s", &cidade2);
 
     printf("Qual a área:\n");
     scanf("%f", &area2);
 
     printf("Qual o PIB:\n");
     scanf("%f", &pib2);
 
     printf("Qual a população:\n");
     scanf("%d", &populacao2);
 
     printf("Quantos pontos turisticos:\n");
     scanf("%d", &pontoturistico2);


    // calculo carta 1
     pibpercapita1=(populacao1/pib1);

     densidadepopulacional1=(area1/populacao1);
     

     //calculo carta 2

     pibpercapita2=(populacao2/pib2);

     densidadepopulacional2=(area2/populacao2);
    
     //impressao para o usuario da primeira carta digitada.
    printf("Carta:01\nEstado:%s \n Cidade:%s \n Codigo da carta:%s \n",estado1, cidade1,codigo1);

    printf("Area:%f \n PIB:%f \n",area1,pib1);

    printf("População:%d \n Pontos turisticos:%d \n",populacao1,pontoturistico1);

    printf("Densidade populacional:%f\n",densidadepopulacional1);

    printf("PIB per capita:%f\n",pibpercapita1);

 
   //impressao para o usuario da segunda carta carta digitada.
    printf("Carta:02\nEstado:%s \n Cidade:%s \n Codigo da carta:%s \n",estado2, cidade2,codigo2);

    printf("Area:%f \n PIB:%f \n",area2,pib2);
 
    printf("População:%d \n Pontos turisticos:%d \n",populacao2,pontoturistico2);

    printf("Densidade populacional:%f\n",densidadepopulacional2);

    printf("PIB per capita:%f\n",pibpercapita2);

    //impressão para o jogador escolher qual atributo vai querer comparar das cartas.

    printf("Escolha o primeiro atributo para fazer a batalha : \n");
    printf("1.Área: \n");
    printf("2.PIB: \n");
    printf("3.População: \n");
    printf("4.Ponto turistico: \n");
    printf("5.Densidade populacional: \n");
    printf("6.PIB per capita: \n");
    scanf("%d",&escolhaJogador1);

           //segunda opção para o usuario de comparação
           printf("Escolha o segundo atributo para fazer a batalha: \n");
           printf("Voce deve escolher um atributo diferente do primeiro!\n");
           printf("1.Área: \n");
           printf("2.PIB: \n");
           printf("3.População: \n");
           printf("4.Ponto turistico: \n");
           printf("5.Densidade populacional: \n");
           printf("6.PIB per capita: \n");
           scanf("%d",&escolhajogador2);

    
    //primeira comparação dos atributos
    switch (escolhaJogador1)
    {
    case '1':
        printf("Você escolheu Área: \n:");
        escolhaJogador1 = area1 >area2 ? 1:0;
        break;
        case '2':
        printf("Você escolheu PIB: \n:");
        escolhaJogador1= pib1 > pib2 ? 1:0;
        break;
        case '3':
        printf("Você escolheu população: \n:");
        escolhaJogador1= populacao1>populacao2?1:0;
        break;
        case '4':
        printf("Você escolheu ponto turistico: \n:");
        escolhaJogador1= pontoturistico1>pontoturistico2?1:0;
        break;
        case '5': 
        printf("Você escolheu densidade populacional: \n:");
        escolhaJogador1=densidadepopulacional1<densidadepopulacional2?1:0;
        break;
        case '6':
        printf("Você escolheu PIB percapita: \n:");
        escolhaJogador1=pibpercapita1>pibpercapita2?1:0;
        break;
      


    
        //comparação da segunda opção de escolha do usuario.
    if (escolhaJogador1==escolhajogador2)//se escolhas forem iguais reseta.
    {
        printf("Você escolheu o mesmo atributo!\n");
    }else{
        switch (escolhajogador2){
        
        case '1':
            printf("Você escolheu Área: \n:");
            escolhajogador2 = area1 >area2 ? 1:0;
            break;
            case '2' :
            printf("Você escolheu PIB: \n:");
            escolhajogador2= pib1 > pib2 ? 1:0;
            break;
            case '3':
            printf("Você escolheu população: \n:");
            escolhajogador2= populacao1>populacao2?1:0;
            break;
            case '4':
            printf("Você escolheu ponto turistico: \n:");
            escolhajogador2=pontoturistico1>pontoturistico2?1:0;
            break;
            case '5': 
            printf("Você escolheu densidade populacional: \n:");
            escolhajogador2=densidadepopulacional1<densidadepopulacional2?1:0;
            break;
            case '6':
            printf("Você escolheu PIB percapita: \n:");
            escolhajogador2=pibpercapita1>pibpercapita2?1:0;
            break;
            default:
            printf("Opção de jogo invalido\n");
            break;
        }
    } 

    }

    if (escolhaJogador1 && escolhajogador2)
    {
        printf("*** Carta 1 venceu! ***\n");
    }else if(escolhaJogador1 != escolhajogador2){
        printf("Empatou!\n");

    }else{
        printf("*** Carta 2 venceu! ***:/ \n");
    }
    

   

    


    return 0;
    
}