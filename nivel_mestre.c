#include <stdio.h>

// Número de casas para os movimentos
const int num_casas_torre = 5;
const int num_casas_bispo = 5;
const int num_casas_rainha = 8;

// Funções Recursivas
// Movimento da Torre: 5 casas para a direita
void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Movimento do Bispo: diagonal superior direita
void moverBispoDiagonal(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispoDiagonal(vertical - 1, horizontal - 1);
}

// Movimento da Rainha: 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo: Loops Aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 3; i++) {         // controle das tentativas de movimento
        for (int j = 0; j < 3; j++) {     // simula a verificação de movimentos possíveis
            if (i == 2 && j == 1) {
                printf("Cavalo move: Uma casa para cima, uma para a direita\n");
                break; 
            }
            if (j == 2) continue;
        }
    }
}

// Bispo com Loops Aninhados
void bispoComLoopsAninhados(int casas) {
    printf("\nMovimento do Bispo com loops aninhados:\n");
    for (int v = 0; v < casas; v++) {
        for (int h = 0; h < casas; h++) {
            if (v == h) { // só imprime se for diagonal
                printf("Diagonal Superior Direita (v=%d, h=%d)\n", v, h);
            }
        }
    }
}

// Função Principal
int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorreDireita(num_casas_torre);

    // Bispo com recursão
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoDiagonal(num_casas_bispo, num_casas_bispo);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(num_casas_rainha);

    // Cavalo com loops complexos
    moverCavalo();

    // Bispo com loops aninhados
    bispoComLoopsAninhados(num_casas_bispo);

    return 0;
}