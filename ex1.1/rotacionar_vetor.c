#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}, i, aux, dir;

    printf("Selecione a direcao que deseja rotacionar:\n");
    printf("Digite 1: direita\n");
    printf("Digite 2: esquerda\n");

    scanf("%d", &dir);

    while (dir != 1 && dir != 2) {
        printf("Numero invalido!\n");
        printf("Selecione a direcao que deseja rotacionar:\n");
        printf("Digite 1: direita\n");
        printf("Digite 2: esquerda\n");

        scanf("%d", &dir);
    }

    printf("O vetor original:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }

    if (dir == 1) {
        aux = vet[9];

        for (i = 9; i > 0; i--) {
            vet[i] = vet[i - 1];
        }

        vet[i] = aux;
        printf("Vetor rotacionado para direita:\n");
    } else {
        aux = vet[0];

        for (i = 0; i < 9; i++) {
            vet[i] = vet[i + 1];
        }

        vet[i] = aux;
        printf("Vetor rotacionado para esquerda:\n");
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
}