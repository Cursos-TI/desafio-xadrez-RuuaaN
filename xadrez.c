#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Movendo uma casa para a direita
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima Direita\n"); // Movendo uma casa na diagonal para cima e à direita
        i++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n"); // Movendo uma casa para a esquerda
        j++;
    } while (j < 8);

    // Movimento do Cavalo (padrão "L" - duas casas horizontais e uma vertical, ou duas verticais e uma horizontal)
    printf("\nMovimento do Cavalo:\n");

    // Definindo as direções possíveis do cavalo
    int movimentos[8][2] = {
        {2, 1}, {2, -1},  // Duas casas para a direita e uma para cima/baixo
        {-2, 1}, {-2, -1}, // Duas casas para a esquerda e uma para cima/baixo
        {1, 2}, {1, -2},  // Uma casa para a direita e duas para cima/baixo
        {-1, 2}, {-1, -2}  // Uma casa para a esquerda e duas para cima/baixo
    };

    // Utilizando loops aninhados para representar a movimentação do cavalo em L
    for (int i = 0; i < 8; i++) {  // 8 movimentos possíveis
        printf("Movimento: %d casas ", movimentos[i][0]);
        if (movimentos[i][0] > 0) {
            printf("para a direita ");
        } else {
            printf("para a esquerda ");
        }
        
        printf("e %d casas ", movimentos[i][1]);
        if (movimentos[i][1] > 0) {
            printf("para cima\n");
        } else {
            printf("para baixo\n");
        }
    }

    return 0;
}
