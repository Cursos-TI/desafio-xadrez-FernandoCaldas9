#include <stdio.h>

// Função para simular o movimento da Torre
void torre(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
}

void bispo(int casas) {
    int i = 0;
    while (i < casas) {
        printf("Cima, Direita\n");
        i++;
    }
}

void rainha(int casas) {
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas);
}

int main() {
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

    printf("Movimento da Torre:\n");
    torre(CASAS_TORRE);

    printf("\nMovimento do Bispo:\n");
    bispo(CASAS_BISPO);

    printf("\nMovimento da Rainha:\n");
    rainha(CASAS_RAINHA);

    return 0;
}

