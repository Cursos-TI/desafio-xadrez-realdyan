#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //
    const int torre = 5; /// 5 casas direita
    const int bispo = 5; // 5 casas na diagonal cima e direita
    const int rainha = 8; // 8 casas esquerda
    const int cavalo = 1;


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
// Movimentação da Torre usando while
    int x = 0; // Variavel para calcular com valor 0
    while (x < torre)
    {
        printf("Torre: Direita \n");
        x++;
        
    }

    printf("\n");

//Movimentação do Bispo usando do while
    x = 0; // Variavel para calcular com valor 0
    do
    {
        printf("Bispo: Cima \n");
        printf("Bispo: Direita\n");
        x++;
    } while (x < bispo);
    
    printf("\n");

//Movimentação Rainha usando for
    x = 0; // Variavel para calcular com valor 0

    for (int x = 0; x < rainha; x++)
    {
        printf("Rainha: Esquerda \n");
    }
    
    printf("\n");

//Movimentação Cavalo usando for e while (usando loops aninhados)
    x = 0;
    for (int i = 0; i < cavalo; i++)
    {
        while (x < 2)
        {
            printf("Cavalo: Baixo \n");
            x++;
        }
        printf("Cavalo: Esquerda \n");
    }
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.



    //----------------------------------------------------------------------------------------------------------

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
