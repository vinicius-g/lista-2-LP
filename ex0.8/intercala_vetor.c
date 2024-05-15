#include <stdio.h>

int main() {
    int vet[5] = {1,2,3,4,5}, vet2[5] = {6,7,8,9,10}, vet_inter[10], i;

    for (i = 0; i < 5; i++) {
        vet_inter[i * 2] = vet[i];
        vet_inter[i * 2 + 1] = vet2[i];
    }

    for (i = 0; i < 10; i++) {
        printf("Vetor intercalado na posicao %d: %d\n", i, vet_inter[i]);
    }
}