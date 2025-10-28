#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int torre = 5;//variavel torre recebe o valor 5 para movimento
    const int bispo = 5;//variavel bispo recebe o valor 5 para movimento
    const int rainha = 8;//variavel rainha recebe o valor 5 para movimento
    const int cavalo_v = 2; //variavel cavalo vertical recebe valor 2
    const int cavalo_h = 1; //variavel cavalo horizontal recebe valor 1 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("BISPO se movimentando\n");
    int j = 1;
    while (j <= bispo) {//movimentacao do bispo em diagonal para direita
        printf("Cima, Direita \n");
        j++;
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("TORRE se movimentando\n");
    for (int i = 1; i <= torre; i++) {//movimentaccao da torre para a direita
        printf("Direita \n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("RAINHA se movimentando\n");
    int k = 1;
    do {
        printf("Esquerda \n");
        k++;
    } while (k <= rainha);// movimentacao da rainha para esquerda
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("CAVALO se movimentando\n");
    for (int i = 1; i <= cavalo_v; i++) {  // movimento do cavalo na vertical
        printf("Baixo\n", i);
        int passo_h = 0;//variavel de controle do passo horizontal
        while (passo_h < cavalo_h && i == cavalo_v) {// movimento do cavalo na horizontal
            printf("Esquerda\n");
            passo_h++;
        }
    }
    printf("\n");
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
