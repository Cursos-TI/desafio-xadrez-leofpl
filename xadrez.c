#include <stdio.h>

// Desafio de Xadrez - MateCheck

    void movercasas(int QntMovimento,int TipoMovimento){

        if (QntMovimento > 0){

        switch (TipoMovimento) {
        case 1:
            printf("Direita\n");
            break;
        case 2:
            printf("Esquerda\n");
            break;
        case 3:
            printf("Cima\n");
            break;
        case 4:
            printf("Baixo\n");
            break;
        case 5:
            printf("Cima, Esquerda\n");
            break;
        case 6:
            printf("Cima, Direita\n");
            break;
        case 7:
            printf("Baixo, Esquerda\n");
            break;
        case 8:
            printf("Baixo, Direita\n");
            break;
        }
        }
        else{
            return;
        }
        movercasas(QntMovimento-1,TipoMovimento);
    }

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //Quantidade de casas de cada movimento
    int QntMovimentoBispo = 5;
    int QntMovimentoTorre = 5;
    int QntMovimentoRainha = 8;
    int QntMovimentoCavalo1 = 2;
    int QntMovimentoCavalo2 = 1;
    int i;
    int j=0;
    int k=0;

    /*Tipo do movimento: 1 = direita, 2 = esquerda, 3 = cima, 4 = baixo, 
    5 = cima-esquerda, 6 = cima-direita, 7 = baixo-esquerda, 8 = baixo-direita */
    int TipoMovimentoBispo = 6;
    int TipoMovimentoTorre = 3;
    int TipoMovimentoRainha = 2;
    int TipoMovimentoCavalo1 = 3;
    int TipoMovimentoCavalo2 = 1;

    printf("Esses foram os movimentos do Bispo escolhidos:\n");
    movercasas(QntMovimentoBispo,TipoMovimentoBispo);

    printf("Esses foram os movimentos do Torre escolhidos:\n");
    movercasas(QntMovimentoTorre,TipoMovimentoTorre);

    printf("Esses foram os movimentos da Rainha escolhidos:\n");
    movercasas(QntMovimentoRainha,TipoMovimentoRainha);
   
    printf("Esses foram os movimentos do Cavalo escolhidos:\n");
    while (k < QntMovimentoCavalo2)
    {
        for (j=0; j < QntMovimentoCavalo1; j++)
    {
        switch (TipoMovimentoCavalo1)
        {
        case 1:
            printf("Direita\n");
            break;
        case 2:
            printf("Esquerda\n");
            break;
        case 3:
            printf("Cima\n");
            break;
        case 4:
            printf("Baixo\n");
            break;
        }
    }
    switch (TipoMovimentoCavalo2)
        {
        case 1:
            printf("Direita\n");
            k++;
            break;
        case 2:
            printf("Esquerda\n");
            k++;
            break;
        case 3:
            printf("Cima\n");
            k++;
            break;
        case 4:
            printf("Baixo\n");
            k++;
            break;
        }
    }

    return 0;
}
