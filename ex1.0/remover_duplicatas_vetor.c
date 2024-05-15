#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[10], i, j;
    srand(time(0));

    for (i = 0; i < 10; i++) {
        vet[i] = (rand() % 10) + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("vetor original, posicao %d: %d\n", i, vet[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vet[i] == vet[j] && i != j) {
                vet[i]++;
                j = -1;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("vetor sem duplicatas, posicao %d: %d\n", i, vet[i]);
    }
}