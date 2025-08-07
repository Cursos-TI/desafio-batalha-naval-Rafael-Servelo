#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa tudo com 0

    // Coordenadas iniciais do navio horizontal (linha e coluna)
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    // Coordenadas iniciais do navio vertical (linha e coluna)
    int linha_vertical = 5;
    int coluna_vertical = 7;

    int i;
    int pode_posicionar = 1; // Flag para validar sobreposição

    // Validação: navio horizontal dentro dos limites
    if (coluna_horizontal + 3 > 10) {
        printf("Erro: Navio horizontal fora dos limites.\n");
        return 1;
    }

    // Validação: navio vertical dentro dos limites
    if (linha_vertical + 3 > 10) {
        printf("Erro: Navio vertical fora dos limites.\n");
        return 1;
    }

    // Validação de sobreposição
    for (i = 0; i < 3; i++) {
        if (tabuleiro[linha_horizontal][coluna_horizontal + i] == 3 ||
            tabuleiro[linha_vertical + i][coluna_vertical] == 3) {
            pode_posicionar = 0;
            break;
        }
    }

    if (!pode_posicionar) {
        printf("Erro: Sobreposição de navios detectada.\n");
        return 1;
    }

    // Posicionar navio horizontal
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
    }

    // Posicionar navio vertical
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = 3;
    }

    // Exibição do tabuleiro
    printf("Tabuleiro Batalha Naval:\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
