#include <stdio.h>

int main() {
    int vet[10] = {1,2,3,4,5,6,7,8,9,10}, vet2[10] = {2,4,6,8,9,11,13,15,18,20}, i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vet[i] == vet2[j]) {
                printf("O valor %d, esta na posicao %d do vetor original e na posicao %d do segundo vetor\n", vet[i], i, j);
            }
        }
    }
}