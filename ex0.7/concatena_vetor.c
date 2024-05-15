#include <stdio.h>

int main() {
    int vet[5] = {1,2,3,4,5}, vet2[5] = {6,7,8,9,10}, vet_concat[10], i;

    for (i = 0; i < 5; i++) {
        vet_concat[i] = vet[i];
        vet_concat[i + 5] = vet2[i];
    }

    for (i = 0; i < 10; i++) {
        printf("Vetor concatenado na posicao %d: %d\n", i, vet_concat[i]);
    }
}