#include <stdio.h>

int main() {

    // Movimento da Torre (FOR)
    // A Torre se move em linha reta, neste caso, 5 casas para a direita.
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (WHILE)
    // O Bispo se move na diagonal. Vamos simular 5 casas para cima e à direita.
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha (DO-WHILE)
    // A Rainha se move em todas as direções. Vamos simular 8 casas para a esquerda.
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo: duas casas para baixo e uma para a esquerda
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("\n");

    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
        
        int j = 0;
        while (j < 1 && i == movimentosBaixo - 1) {
            for (int k = 0; k < movimentosEsquerda; k++) {
                printf("Esquerda\n");
            }
            j++;
        }
    }

    return 0;
}