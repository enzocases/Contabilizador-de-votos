#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char nome[5][15], genero[5][15], endereco[5][15], mulheres[15] ="feminino";
    int i= 0,idade[5], res[5];

    do{

        printf("\nInsira o nome da pessoa %d: ", i);
        scanf("%s", nome[i]);
        printf("\nInsira a idade da pessoa %d: ", i);
        scanf("%d",&idade[i]);
        printf("\nInsira o genero da pessoa %d: (feminino || masculino)  ", i);
        scanf("%s",genero[i]);
        printf("\nInsira o endereco da pessoa %d: ", i);
        scanf("%s",endereco[i]);
        i++;
    }while(i<5);
    printf("\n\n\n");
    i = 0;
    do{
        res[i] = strcmp(genero[i],mulheres);
        if(res[i] == 0){
            printf("\nO nome da mulher do numero %d eh %se sua idade eh %d",i,nome[i], idade[i]);
            }


        i++;
    }while(i<5);
    i = 0;
    printf("\n\n\n");
    do{
        if(res[i] != 0){
            printf("\nO nome do homem do numero %d eh %s e seu endereco eh %s",i,nome[i], endereco[i]);
        }
        i++;
    }while(i<5);
    i = 0;
    printf("\n\n\n");
    do{

        if(idade[i]>20){
            printf("\nA pessoa do numero %d tem mais de 20 anos e seu nome eh %s",i,nome[i]);

        }
        i++;
    }while(i<5);
    return 0;
}
