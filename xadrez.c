#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
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
    for (int i = 0; i < 8; i++) {
        // Verificando se o número é positivo ou negativo para determinar a direção correta
        if (movimentos[i][0] > 0) {
            printf("Movimento: %d casa(s) para a direita ", movimentos[i][0]);
        } else if (movimentos[i][0] < 0) {
            printf("Movimento: %d casa(s) para a esquerda ", -movimentos[i][0]);
        }

        if (movimentos[i][1] > 0) {
            printf("e %d casa(s) para cima\n", movimentos[i][1]);
        } else if (movimentos[i][1] < 0) {
            printf("e %d casa(s) para baixo\n", -movimentos[i][1]);
        }
    }

    return 0;
}
