#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //Quantidade de casas de cada movimento
    int QntMovimentoBispo = 5;
    int QntMovimentoTorre = 5;
    int QntMovimentoRainha = 8;
    int i;
    int j=0;
    int k=0;

    /*Tipo do movimento: 1 = direita, 2 = esquerda, 3 = cima, 4 = baixo, 
    5 = cima-esquerda, 6 = cima-direita, 7 = baixo-esquerda, 8 = baixo-direita */
    int TipoMovimentoBispo = 6;
    int TipoMovimentoTorre = 3;
    int TipoMovimentoRainha = 2;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Esses foram os movimentos do Bispo escolhidos:\n");
    for (i = 0; i < QntMovimentoBispo; i++)
    {
        switch (TipoMovimentoBispo)
        {
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
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Esses foram os movimentos do Torre escolhidos:\n");
    while (j < QntMovimentoBispo)
    {
    
    switch (TipoMovimentoTorre)
        {
        case 3:
            printf("Cima\n");
            j++;
            break;
        case 4:
            printf("Baixo\n");
            j++;
            break;
        }
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Esses foram os movimentos da Rainha escolhidos:\n");
    do
    {
        switch (TipoMovimentoRainha)
        {
        case 1:
            printf("Direita\n");
            k++;
            break;
        case 2:
            printf("Esquerda\n");
            k++;
            break;
        }
    } while (k < QntMovimentoRainha);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
