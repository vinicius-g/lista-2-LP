#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[101], vet_frequencia[101], i;
    srand(time(0));

    for (i = 0; i < 101; i++) {
        vet_frequencia[i] = 0;
    }

    for (i = 0; i < 101; i++) {
        vet[i] = rand() % 101;
        vet_frequencia[vet[i]]++;
    }

    for (i = 0; i < 101; i++) {
        if (vet_frequencia[i] == 1) {
            printf("O numero %d, foi repetido no vetor original %d vez \n", i, vet_frequencia[i]);
        } else {
            printf("O numero %d, foi repetido no vetor original %d vezes \n", i, vet_frequencia[i]);
        }
    }
}