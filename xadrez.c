#include<stdio.h>

int main(){

    int torre =0,  bispo =0 , rainha =0, Movimentos,  i;

    printf("Qual peça vc quer mover: \n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Sair\n");
    scanf("%d", &Movimentos);

    switch (Movimentos) //criei um switch case pra selecionar qual peça quer mover
    {
    case 1:// Criei a logica de movimento da torre utilizando while
        printf("Quantas casas quer mover a torre: \n");
        scanf("%d", &i);

        while (torre <i){
            printf("Movendo pra esquerda\n");
            torre++;
        }

    break;

    case 2:// Criei a logica de movimento da torre utilizando Do-While
        printf("Quantas casas quer mover o bispo: \n");
        scanf("%d", &i);
        do{
            printf("Movendo pra Cima e Direita\n");
            
            bispo++;
        }while(bispo < i);

    break;

    case 3:// Criei a logica de movimento da torre utilizando For
        printf("Quantas casas quer mover a rainha: \n");
        scanf("%d", &i);

        for(i; rainha < i; rainha++){
            printf("Movendo pra Direita\n");
            
        }
        break;
    
    default:
        printf("Opção inválida!\n");
        printf("Saindo...\n");
        break;
    }
    return 0;
    
   
}